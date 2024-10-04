#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int* marksArray, int count, const char* studentName, const char* studentDate, const char* studentTelephone, const char* studentCity, const char* studentCountry, const char* Academy, const char* Academy_city_country, int Number)
    : marksCount(count), number(Number)
{
    marks = new int[marksCount];
    for (int i = 0; i < marksCount; i++) {
        marks[i] = marksArray[i];
    }

    name = new char[strlen(studentName) + 1];
    strcpy_s(name, strlen(studentName) + 1, studentName);

    date = new char[strlen(studentDate) + 1];
    strcpy_s(date, strlen(studentDate) + 1, studentDate);

    telephone = new char[strlen(studentTelephone) + 1];
    strcpy_s(telephone, strlen(studentTelephone) + 1, studentTelephone);

    city = new char[strlen(studentCity) + 1];
    strcpy_s(city, strlen(studentCity) + 1, studentCity);

    country = new char[strlen(studentCountry) + 1];
    strcpy_s(country, strlen(studentCountry) + 1, studentCountry);

    academy = new char[strlen(Academy) + 1];
    strcpy_s(academy, strlen(Academy) + 1, Academy);

    academy_city_country = new char[strlen(Academy_city_country) + 1];
    strcpy_s(academy_city_country, strlen(Academy_city_country) + 1, Academy_city_country);
}

Student::~Student() {
    delete[] marks;
    delete[] name;
    delete[] date;
    delete[] telephone;
    delete[] city;
    delete[] country;
    delete[] academy;
    delete[] academy_city_country;
}

Student::Student(const Student& other)
    : marksCount(other.marksCount), number(other.number)
{
    marks = new int[marksCount];
    for (int i = 0; i < marksCount; i++) {
        marks[i] = other.marks[i];
    }

    name = new char[strlen(other.name) + 1];
    strcpy_s(name, strlen(other.name) + 1, other.name);

    date = new char[strlen(other.date) + 1];
    strcpy_s(date, strlen(other.date) + 1, other.date);

    telephone = new char[strlen(other.telephone) + 1];
    strcpy_s(telephone, strlen(other.telephone) + 1, other.telephone);

    city = new char[strlen(other.city) + 1];
    strcpy_s(city, strlen(other.city) + 1, other.city);

    country = new char[strlen(other.country) + 1];
    strcpy_s(country, strlen(other.country) + 1, other.country);

    academy = new char[strlen(other.academy) + 1];
    strcpy_s(academy, strlen(other.academy) + 1, other.academy);

    academy_city_country = new char[strlen(other.academy_city_country) + 1];
    strcpy_s(academy_city_country, strlen(other.academy_city_country) + 1, other.academy_city_country);
}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        delete[] marks;
        delete[] name;
        delete[] date;
        delete[] telephone;
        delete[] city;
        delete[] country;
        delete[] academy;
        delete[] academy_city_country;

        marksCount = other.marksCount;
        number = other.number;

        marks = new int[marksCount];
        for (int i = 0; i < marksCount; i++) {
            marks[i] = other.marks[i];
        }

        name = new char[strlen(other.name) + 1];
        strcpy_s(name, strlen(other.name) + 1, other.name);

        date = new char[strlen(other.date) + 1];
        strcpy_s(date, strlen(other.date) + 1, other.date);

        telephone = new char[strlen(other.telephone) + 1];
        strcpy_s(telephone, strlen(other.telephone) + 1, other.telephone);

        city = new char[strlen(other.city) + 1];
        strcpy_s(city, strlen(other.city) + 1, other.city);

        country = new char[strlen(other.country) + 1];
        strcpy_s(country, strlen(other.country) + 1, other.country);

        academy = new char[strlen(other.academy) + 1];
        strcpy_s(academy, strlen(other.academy) + 1, other.academy);

        academy_city_country = new char[strlen(other.academy_city_country) + 1];
        strcpy_s(academy_city_country, strlen(other.academy_city_country) + 1, other.academy_city_country);
    }

    return *this;
}

Student::Student(Student&& other)
    : marks(other.marks),
    name(other.name),
    date(other.date),
    telephone(other.telephone),
    city(other.city),
    country(other.country),
    academy(other.academy),
    academy_city_country(other.academy_city_country),
    marksCount(other.marksCount),
    number(other.number)
{
    other.marks = nullptr;
    other.name = nullptr;
    other.date = nullptr;
    other.telephone = nullptr;
    other.city = nullptr;
    other.country = nullptr;
    other.academy = nullptr;
    other.academy_city_country = nullptr;
}

Student& Student::operator=(Student&& other) {
    if (this != &other) {
        delete[] marks;
        delete[] name;
        delete[] date;
        delete[] telephone;
        delete[] city;
        delete[] country;
        delete[] academy;
        delete[] academy_city_country;

        marks = other.marks;
        name = other.name;
        date = other.date;
        telephone = other.telephone;
        city = other.city;
        country = other.country;
        academy = other.academy;
        academy_city_country = other.academy_city_country;

        marksCount = other.marksCount;
        number = other.number;

        other.marks = nullptr;
        other.name = nullptr;
        other.date = nullptr;
        other.telephone = nullptr;
        other.city = nullptr;
        other.country = nullptr;
        other.academy = nullptr;
        other.academy_city_country = nullptr;

        other.marksCount = 0;
        other.number = 0;
    }

    return *this;
}


float Student::getAver() {
    float sum = 0;
    for (int i = 0; i < marksCount; i++) {
        sum += marks[i];
    }
    return marksCount > 0 ? sum / marksCount : 0;
}

int Student::getMark(int index) {
    if (index >= 0 && index < marksCount) {
        return marks[index];
    }
    return -1;
}

void Student::setMark(int mark, int index) {
    if (index >= 0 && index < marksCount) {
        marks[index] = mark;
    }
}

const char* Student::getName() {
    return name;
}

void Student::setName(const char* studentName) {
    delete[] name;
    name = new char[strlen(studentName) + 1];
    strcpy_s(name, strlen(studentName) + 1, studentName);
}

const char* Student::getDate() {
    return date;
}

void Student::setDate(const char* studentDate) {
    delete[] date;
    date = new char[strlen(studentDate) + 1];
    strcpy_s(date, strlen(studentDate) + 1, studentDate);
}

const char* Student::getTelephone() {
    return telephone;
}

void Student::setTelephone(const char* studentTelephone) {
    delete[] telephone;
    telephone = new char[strlen(studentTelephone) + 1];
    strcpy_s(telephone, strlen(studentTelephone) + 1, studentTelephone);
}

const char* Student::getCity() {
    return city;
}

void Student::setCity(const char* studentCity) {
    delete[] city;
    city = new char[strlen(studentCity) + 1];
    strcpy_s(city, strlen(studentCity) + 1, studentCity);
}

const char* Student::getCountry() {
    return country;
}

void Student::setCountry(const char* studentCountry) {
    delete[] country;
    country = new char[strlen(studentCountry) + 1];
    strcpy_s(country, strlen(studentCountry) + 1, studentCountry);
}

const char* Student::getAcademy() {
    return academy;
}

void Student::setAcademy(const char* Academy) {
    delete[] academy;
    academy = new char[strlen(Academy) + 1];
    strcpy_s(academy, strlen(Academy) + 1, Academy);
}

const char* Student::getAcademy_city_country() {
    return academy_city_country;
}

void Student::setAcademy_city_country(const char* Academy_city_country) {
    delete[] academy_city_country;
    academy_city_country = new char[strlen(Academy_city_country) + 1];
    strcpy_s(academy_city_country, strlen(Academy_city_country) + 1, Academy_city_country);
}

int Student::getNumber() {
    return number;
}

void Student::setNumber(int Number) {
    number = Number;
}

void Student::print() {
    cout << "Имя: " << getName() << "\n" << "Дата рождения: " << getDate() << "\n" << "Номер телефона: " << getTelephone() << "\n" << "Город: " << getCity() << "\n" << "Страна: " << getCountry() << "\n" << "Название академии: " << getAcademy() << "\n" << "Город и страна (академии): " << getAcademy_city_country() << "\n" << "Номер группы: " << getNumber() << endl;
}