#include "../../include/libFen/base.hpp"

namespace Terminal {
    void drawLine(int x1,int y1, int x2,int y2) {
        // Bresenham's line algorithm
    }

    /**
     * @brief Draws a horizontal line between two points.
     * @param[in] y The Y value of the horizontal line.
     * @param[in] x A pair containing the end points on the X axis of your line.
    */
    void drawHLine(int y, std::pair<int,int> x, char character = ' ') {
        if (x.first > x.second) {
            std::swap(x.first, x.second);
        }
        for (int i = x.first; i < x.second; ++i) {
            Terminal::setCursorPosition(i, y);
            Terminal::print(character);
        }
    }

    /**
     * @brief Draws a vertical line between two points.
     * @param[in] x The X value of the horizontal line.
     * @param[in] y A pair containing the end points on the Y axis of your line.
    */
    void drawVLine(int x, std::pair<int,int> y, char character = ' ') {
        if (y.first > y.second) {
            std::swap(y.first, y.second);
        }
        for (int i = y.first; i < y.second; ++i) {
            Terminal::setCursorPosition(x, i);
            Terminal::print(character);
        }
    }
}