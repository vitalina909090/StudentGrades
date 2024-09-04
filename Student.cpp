#include "Student.h"
#include<Windows.h>
using namespace std;

float Student::getAver() {
    float sum = 0;
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        sum += marks[i];
    }
    sum /= sizeof(marks) / sizeof(marks[0]);
    return sum;
}

const char* Student::getName()
{
    return name;
}

void Student::setName(const char* studentName)
{
    // ������������ � ��������� �������
    strcpy_s(name, 20, studentName);
}

// ������ �� �������� ������ marks
int Student::getMark(int index)
{
    return marks[index];
}

void Student::setMark(int mark, int index)
{
    // ������������ � ��������� ������
    if (mark < 1 or mark > 12)
    {
        mark = 0;
    }
    marks[index] = mark;
}

Student::Student(int mark[3], const char* studentName) {
    strcpy_s(name, 20, studentName);
    for (int i = 0; i < 3; i++) {
        marks[i] = mark[i];
    }
}
