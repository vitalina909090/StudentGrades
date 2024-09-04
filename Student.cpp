#include "Student.h"
#include<Windows.h>
#include <iostream>
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
    // присвоювання з перевіркою довжини
    strcpy_s(name, 20, studentName);
}

// доступ до елементів масиву marks
int Student::getMark(int index)
{
    return marks[index];
}

void Student::setMark(int mark, int index)
{
    // присвоювання з перевіркою оцінки
    if (mark < 1 or mark > 12)
    {
        mark = 0;
    }
    marks[index] = mark;
}

Student::Student(int mark[3], const char* studentName, const char* studentDate, const char* studentTelephone, const char* studentCity, const char* studentCountry, const char* Academy, const char* Academy_city_country, int Number) {
    strcpy_s(name, 20, studentName);
    for (int i = 0; i < 3; i++) {
        marks[i] = mark[i];
    }
    strcpy_s(date, 15, studentDate);
    strcpy_s(telephone, 10, studentTelephone);
    strcpy_s(city, 20, studentCity);
    strcpy_s(country, 20, studentCountry);
    strcpy_s(academy, 20, Academy);
    strcpy_s(academy_city_country, 20, Academy_city_country);
}


void Student::setDate(const char* studentDate) {
    strcpy_s(date, 15, studentDate);
}
const char* Student::getDate() {
    return date;
}

void Student::setTelephone(const char* studentTelephone) {
    strcpy_s(telephone, 20, studentTelephone);
}
const char* Student::getTelephone() {
    return telephone;
}

void  Student::setCity(const char* studentCity) {
    strcpy_s(city, 20, studentCity);
}
const char* Student::getCity() {
    return city;
}

void  Student::setCountry(const char* studentCountry) {
    strcpy_s(country, 20, studentCountry);
}
const char* Student::getCountry() {
    return country;
}

void  Student::setAcademy(const char* Academy) {
    strcpy_s(academy, 20, Academy);
}
const char* Student::getAcademy() {
    return academy;
}

void  Student::setAcademy_city_country(const char* Academy_city_country) {
    strcpy_s(academy_city_country, 20, Academy_city_country);
}
const char* Student::getAcademy_city_country() {
    return academy_city_country;
}

void  Student::setNumber(int Number) {

}
int  Student::getNumber() {
    return number;
}

void Student::print() {
    cout << "Имя: " << getName() << "\n" << "Дата рождения: " << getDate() << "\n" << "Номер телефона: " << getTelephone() << "\n" << "Город: " << getCity() << "\n" << "Страна: " << getCountry() << "\n" << "Название академии: " << getAcademy() << "\n" << "Город и страна (академии): " << academy_city_country << "\n" << "Номер группы: " << getNumber() << endl;
}