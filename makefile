
# in terminal: "make terminal/Terminal"
terminal/libTerminal.so:
	g++ -c -fPIC ./src/base/base.cpp -o ./src/base/base.o;
	g++ -shared -o ./src/base/libTerminal.so ./src/base/base.o;


#g++ ./terminal/terminal.cpp -o ./terminal/terminal

.PHONY: main
main:
	g++ ./src/main.cpp -o ./src/main
	./src/main


.PHONY: draw
draw:
	g++ ./src/draw/draw.cpp -o ./src/draw/draw
	./src/draw/draw
	
################################
#//// Moss' Makefile Tasks ////#
#////May be a bit confusing////#
################################

ValidateDirs ?= "./include/libFen" "./src" "./tests" "./build/lib" "./build/objects"

modules ?= draw base keys

LibName = libFen
compiler ?= g++
CompilerArgs ?= 
IncludeDir ?= ./include/libFen

.PHONY: ValidateDirStruct
ValidateDirStruct:
#	@echo ${ValidateDirs}
	@rm ./build/objects/*.o
	@mkdir -p ${ValidateDirs}
	@echo "Project directories validated"

.PHONY: BuildObjects
BuildObjects: ValidateDirStruct
	@for current_module in ${modules}; do \
		${compiler} ${CompilerArgs} -c -fPIC ./src/$$current_module/$$current_module.cpp -I${IncludeDir} -o ./build/objects/$$current_module.o; \
	done
	@echo "Objects built"

.PHONY: BuildLib
BuildLib: BuildObjects ValidateDirStruct
	@${compiler} ${CompilerArgs} -shared -o ./build/lib/${LibName}.so ./build/objects/*.o
	@echo "Library '${LibName}' compiled"