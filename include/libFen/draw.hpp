// draw.h
#pragma once

#include <iostream>
#include <string>
#include <utility>

#ifndef DRAW_H
#define DRAW_H

namespace Terminal {
    /**
     * @brief Draws a line.
    */
    void drawLine(int x1,int y1, int x2,int y2);

    /**
      * @brief Draws a horizontal line between two points.
      * @param[in] y The Y value of the horizontal line.
      * @param[in] x A pair containing the end points on the X axis of your line.
      * @param[in] character The character printed when the line is drawn, defaults to " " (Space).
    */
    void drawHLine(int y, std::pair<int,int> x, char character = ' ');

    /**
      * @brief Draws a vertical line between two points.
      * @param[in] x The X value of the horizontal line.
      * @param[in] y A pair containing the end points on the Y axis of your line.
    */
   void drawVLine(int y, std::pair<int,int> x, char character = ' ');
}

#endif