#include <iostream>
#ifdef _WIN32
    #include <windows.h>
#elif __linux__
    #include <sys/ioctl.h>
    #include <unistd.h>
#endif

namespace keys {
    char getkey(){
        return std::cin.get();
    }
}

