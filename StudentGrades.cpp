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

    Student stdnt1(marks, count, "Легеза В.А.", "09/12/2006", "966121562", "Запорожье", "Украина", "ШАГ", "Запорожье/Украина", 34);

    Student stdnt2 = stdnt1;

    cout << stdnt2.getName() << "  ";
    for (int i = 0; i < count; ++i) {
        cout << stdnt2.getMark(i) << "  ";
    }
    cout << "\n" << stdnt2.getAver() << "\n";
    stdnt2.print();

    return 0;
}
