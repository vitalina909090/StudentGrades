#include <iostream>
#include<Windows.h>
#include "Student.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Успішність студента\n\n\n";

    int marks[3] = { 10, 8, 9 };
    Student stdnt(marks, "Легеза В.А.", "09/12/2006", "966121562", "Запорожье", "Украина", "ШАГ", "Запорожье/Украина", 34);


    cout << stdnt.getName() << "  " << stdnt.getMark(0) << "  " << stdnt.getMark(1) << "  " << stdnt.getMark(2) << "\n";
    cout << stdnt.getAver() << "\n";
    stdnt.print();

    return 0;
}