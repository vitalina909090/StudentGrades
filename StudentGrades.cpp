#include <iostream>
#include<Windows.h>
#include "Student.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Успішність студента\n\n\n";

    Student stdnt(new int [3] {10, 8, 9}, "Легеза В.А.");

    cout << stdnt.getName() << "  " << stdnt.getMark(0) << "\n";
    cout << stdnt.getAver();

    return 0;
}