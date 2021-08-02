#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include "GradeBook.h"

using namespace std;

    GradeBook::GradeBook(string name)
    {
        setCourseName(name);
    }

    void GradeBook::setCourseName(string name)
    {
        courseName = name;
    }

    string GradeBook::getCourseName()
    {
        return courseName;
    }

    void GradeBook::displayMessage()
    {
        cout << "Welcome to Grade Book for\n" << getCourseName() << "!"
             << endl;
    }

