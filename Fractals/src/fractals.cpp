/*
 * File: fractals.cpp
 * --------------------------
 * Name:
 * Section leader:
 * This file contains fractal problems for CS106X.
 */


#include "fractals.h"
#include <cmath>
#include "gbufferedimage.h"
#include "plasmacolor.h"

using namespace std;
//gfgfg
/**
 * Draws a Sierpinski triangle of the specified size and order, placing its
 * bottom-left corner at position (x, y).
 *
 * This will be called by fractalgui.cpp.
 *
 * @param window - The window in which to draw the Sierpinski triangle.
 * @param x - The x coordinate of the bottom-left corner of the triangle.
 * @param y - The y coordinate of the bottom-left corner of the triangle.
 * @param sideLength - The length of one side of the triangle.
 * @param order - The order of the fractal.
 */
void drawSierpinskiTriangle(GWindow& window, double x, double y, double sideLength, int order) {
    // TODO: remove the lines below and write this function
    (void) window;
    (void) x;
    (void) y;
    (void) sideLength;
    (void) order;
}

/**
 * Draws a recursive tree fractal image of the specified size and order,
 * placing the bounding box's top-left corner at position (x,y).
 *
 * This will be called by fractalgui.cpp.
 *
 * @param window - The window in which to draw the recursive tree.
 * @param x - The x coordinate of the top-left corner of the bounding box.
 * @param y - The y coordinate of the top-left corner of the bounding box.
 * @param size - The length of one side of the bounding box.
 * @param order - The order of the fractal.
 */
void drawTree(GWindow& window, double x, double y, double size, int order) {
    // TODO: remove the lines below and write this function
    (void) window;
    (void) x;
    (void) y;
    (void) size;
    (void) order;
}

/**
 * Draws a Mandelbrot Set in the graphical window at the specified location/size,
 * with maxIterations and in a given color.
 *
 * This will be called by fractalgui.cpp.
 *
 * @param window - The window in which to draw the Mandelbrot set.
 * @param leftX - The x coordinate of the top-left corner of the bounding box.
 * @param topY - The y coordinate of the top-left corner of the bounding box.
 * @param min - the minimum Complex number you should examine
 * @param max - the maximum Complex number you should examine
 * @param iterations - The maximum number of iterations to run recursive step
 * @param color - The color of the fractal
 */
void drawMandelbrotSet(GWindow& window, double leftX, double topY, double size,
                       const Complex& min, const Complex& max,
                       int iterations, int color) {
    GBufferedImage image(size, size, 0xffffff);
    window.add(&image, leftX, topY);
    Grid<int> pixels = image.toGrid(); // Convert image to grid

    // TODO: Remove these lines and put your Mandelbrot Set code here that
    // fills in the pixels in the grid (e.g. pixels[0][0] will display at (x, y) in the window)
    (void) window;
    (void) leftX;
    (void) topY;
    (void) size;
    (void) min;
    (void) max;
    (void) iterations;
    (void) color;
    // END (YOUR CODE)

    image.fromGrid(pixels); // Converts and puts the grid back into the image onscreen
}

/**
 * Generates a random displacement value you can add to a color to randomly shift it.
 *
 * You should call this function when calculating middle color values.
 *
 * @param newWidth - the width of the subdivided rectangles you are creating at that moment
 * @param newHeight - the height of the subdivided rectangles you are creating at that moment
 * @param totalWidth - the width of the entire plasma fractal (not just the part you are filling in at the moment)
 * @param totalHeight - the height of the entire plasma fractal (not just the part you are filling in at the moment)
 */
double displace(double newWidth, double newHeight, double totalWidth, double totalHeight) {
    double max = 3*(newWidth + newHeight) / (totalWidth + totalHeight);
    return (randomReal(0, 1) - 0.5) * max;
}

/**
 * Draws a Plasma Fractal in the graphical window at the specified location/size.
 *
 * This will be called by fractalgui.cpp.
 *
 * @param window - The window in which to draw the fractal.
 * @param x - The x coordinate of the top-left corner of the bounding box.
 * @param y - The y coordinate of the top-left corner of the bounding box.
 * @param size - The length of one side of the bounding box.
 */
void drawPlasma(GWindow &window, double x, double y, double size) {
    GBufferedImage image(size, size, 0xffffff);
    window.add(&image, x, y);
    Grid<int> pixels = image.toGrid(); // Convert image to grid

    // TODO: Remove these lines and put your Plasma Fractal code here that
    // fills in the pixels in the grid (e.g. pixels[0][0] will display at (x, y) in the window)
    (void) window;
    (void) x;
    (void) y;
    (void) size;
    // END (YOUR CODE)

    image.fromGrid(pixels); // Converts and puts the grid back into the image onscreen
}
