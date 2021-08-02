#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class GradeBook{
public:
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
private:
    string courseName;
};
