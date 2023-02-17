/**
 * @file student.cpp
 * @brief A class to represent a student.
 *
 * This file defines a class that represents a student with a name and a grade.
 *
 * @author Mallika
 * @date 2023-02-12
 */

#include <string>

/**
 * @brief A class to represent a student.
 *
 * This class has two member variables: a name and a grade. It also has
 * member functions to get and set the name and grade.
 */
class Student
{
public:
    /**
     * @brief Constructor to create a student object.
     *
     * This constructor takes a name and a grade as input and initializes
     * the member variables with these values.
     *
     * @param name The name of the student.
     * @param grade The grade of the student.
     */
    Student(std::string name, int grade)
        : name(name), grade(grade)
    {
    }

    /**
     * @brief Get the name of the student.
     *
     * @return The name of the student.
     */
    std::string getName() const
    {
        return name;
    }

    /**
     * @brief Set the name of the student.
     *
     * @param name The new name of the student.
     */
    void setName(std::string name)
    {
        this->name = name;
    }

    /**
     * @brief Get the grade of the student.
     *
     * @return The grade of the student.
     */
    int getGrade() const
    {
        return grade;
    }

    /**
     * @brief Set the grade of the student.
     *
     * @param grade The new grade of the student.
     */
    void setGrade(int grade)
    {
        this->grade = grade;
    }

private:
    std::string name;  ///< The name of the student.
    int grade;         ///< The grade of the student.
};
