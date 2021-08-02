#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include "GradeBook.h"

using namespace std;

int main()
{
    GradeBook gradeBook1{"CS101 Introduction to C++ Programming"};
    GradeBook gradeBook2("CS102 Data Structure in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName();
    cout << "\ngradeBook2 created for course: " << gradeBook2.getCourseName();
    cout << endl;

    return 0;
}

