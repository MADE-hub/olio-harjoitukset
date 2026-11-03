#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int studentNumber;
    double average;
public:
    student();

    double getAverage() const;
    void setAverage(double newAverage);

    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);

    string getName() const;
    void setName(const string &newName);
};

#endif // STUDENT_H
