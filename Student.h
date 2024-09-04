#pragma once
class Student
{
private:
    char name[20];
    int marks[3];

public:
    float getAver();
    void setMark(int mark, int index);
    int getMark(int index);
    void setName(const char* studentName);
    const char* getName();
    Student(int mark[3], const char* studentName);
};
