#include <iostream>
#include <Windows.h>
#include "Student.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Успішність студента\n\n\n";

    int marks[] = { 10, 8, 9 };
    int count = sizeof(marks) / sizeof(marks[0]);
    Student stdnt(marks, count, "Легеза В.А.", "09/12/2006", "966121562", "Запорожье", "Украина", "ШАГ", "Запорожье/Украина", 34);

    cout << stdnt.getName() << "  ";
    for (int i = 0; i < count; ++i) {
        cout << stdnt.getMark(i) << "  ";
    }
    cout << "\n" << stdnt.getAver() << "\n";
    stdnt.print();

    return 0;
}
