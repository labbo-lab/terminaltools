#pragma once
#include <utility>

#ifndef BASE_H
#define BASE_H

namespace Terminal {
    #define CSI "\e["

    // Control cursor position
    void setCursorPosition(int,int);

    void print(std::string);
    void print(char);
    
    /** @brief Show the cursor. */
    void cursorShow();
    /** @brief Hide the cursor. */
    void cursorHide();
    
    
    void drawLine(int,int,int,int);

    /**
      * @brief Draws a horizontal line between two points.
      * @param[in] y The Y value of the horizontal line.
      * @param[in] x A pair containing the end points on the X axis of your line.
    */
    void drawHLine(int, std::pair<int,int>, char);
    
    /**
      * @brief Draws a vertical line between two points.
      * @param[in] x The X value of the horizontal line.
      * @param[in] y A pair containing the end points on the Y axis of your line.
    */
    void drawVLine(int, std::pair<int,int>, char);

    void clearScreen();

    // Styling
    void s_reset();
    void s_bold();
    void s_faint();
    void s_italic();
    void s_underline();
    void s_blinkSlow();
    void s_blinkFast();
    void s_invert();
    void s_strike();

    void s_defIntensity();
    void s_notItalic();
    void s_notUnderline();
    void s_notBlink();
    void s_notInvert();
    void s_notStrike();
    
    void s_foreground(int,int,int);

    void s_background(int,int,int);
}

#endif