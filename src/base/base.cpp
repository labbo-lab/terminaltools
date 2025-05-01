// math_operations.cpp
#include "../../include/libFen/base.hpp"

#include <iostream>
#include <utility>
#include <string>
#include <regex>
#include <sstream>
#include <vector>

namespace Terminal {
    //std::string CSI = "\e[";

    // Control cursor position
    void setCursorPosition(int x, int y) {
        std::cout << CSI << y << ";" << x << "H";
    }

    void print(std::string str) {std::cout << str;}
    void print(char ch) {std::cout << ch;}
    
    /** @brief Show the cursor. */
    void cursorShow() {
        std::cout << CSI << "?25h";
    }
    /** @brief Hide the cursor. */
    void cursorHide() {
        std::cout << CSI << "?25l";
    }

    void clearScreen() {
        std::cout << "\e[1J";
    }

    // Styling
    void s_reset() {std::cout << "\e[0m";} // All attributes are turned off
    void s_bold() {std::cout << "\e[1m";}
    void s_faint() {std::cout << "\e[2m";}
    void s_italic() {std::cout << "\e[3m";}
    void s_underline() {std::cout << "\e[4m";}
    void s_blinkSlow() {std::cout << "\e[5m";} // Blinking to less than 150bpm
    void s_blinkFast() {std::cout << "\e[6m";} // Blinking 150+bpm
    void s_invert() {std::cout << "\e[7m";} // Swap foreground and background colors
    void s_strike() {std::cout << "\e[9m";}

    void s_defIntensity() {std::cout << "\e22m";}
    void s_notItalic() {std::cout << "\e23m";}
    void s_notUnderline() {std::cout << "\e24m";}
    void s_notBlink() {std::cout << "\e25m";}
    void s_notInvert() {std::cout << "\e27m";}
    void s_notStrike() {std::cout << "\e29m";}
    
    void s_foreground(int r, int g, int b) {
        std::cout << "\e[38;2;" << r << ";" << g << ";" << b << "m";
    }

    void s_background(int r, int g, int b) {
        std::cout << "\e[48;2;" << r << ";" << g << ";" << b << "m";
    }
}