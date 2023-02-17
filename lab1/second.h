/**
 * @file shape.h
 * @brief A class to represent a 2D shape.
 *
 * This file defines a base class that represents a 2D shape with an area.
 *
 * @author Mallika Asthana
 * @date 2023-02-12
 */

#ifndef SHAPE_H
#define SHAPE_H

/**
 * @brief A class to represent a 2D shape.
 *
 * This class defines a base class for 2D shapes with an area.
 * It has a pure virtual function to calculate the area of the shape.
 */
class Shape
{
public:
    /**
     * @brief Virtual destructor to allow destruction of derived objects.
     */
    virtual ~Shape() {}

    /**
     * @brief Calculate the area of the shape.
     *
     * This is a pure virtual function that must be overridden in derived classes.
     *
     * @return The area of the shape.
     */
    virtual double area() const = 0;
};

#endif // SHAPE_H
