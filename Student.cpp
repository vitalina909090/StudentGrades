#include "Student.h"
#include <iostream>
using namespace std;

// Конструктор
Student::Student(int* marksArray, int count, const char* studentName, const char* studentDate, const char* studentTelephone, const char* studentCity, const char* studentCountry, const char* Academy, const char* Academy_city_country, int Number)
    : marksCount(count), number(Number)
{
    marks = new int[marksCount];  // Виділення пам'яті для оцінок
    for (int i = 0; i < marksCount; i++) {
        marks[i] = marksArray[i];
    }

    // Динамічне виділення пам'яті для name
    name = new char[strlen(studentName) + 1];
    strcpy_s(name, strlen(studentName) + 1, studentName);

    // Динамічне виділення пам'яті для інших рядків
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

// Деструктор
Student::~Student() {
    delete[] marks;                    // Звільнення пам'яті для оцінок
    delete[] name;                     // Звільнення пам'яті для імені
    delete[] date;                     // Звільнення пам'яті для дати
    delete[] telephone;                // Звільнення пам'яті для телефону
    delete[] city;                     // Звільнення пам'яті для міста
    delete[] country;                  // Звільнення пам'яті для країни
    delete[] academy;                  // Звільнення пам'яті для академії
    delete[] academy_city_country;     // Звільнення пам'яті для академії (місто/країна)
}

// Метод для обчислення середнього значення оцінок
float Student::getAver() {
    float sum = 0;
    for (int i = 0; i < marksCount; i++) {
        sum += marks[i];
    }
    return marksCount > 0 ? sum / marksCount : 0;  // Запобігання діленню на нуль
}

// Метод для отримання оцінки за індексом
int Student::getMark(int index) {
    if (index >= 0 && index < marksCount) {
        return marks[index];
    }
    return -1; // або кинути виняток
}

// Метод для встановлення оцінки
void Student::setMark(int mark, int index) {
    if (index >= 0 && index < marksCount) {
        if (mark < 1 || mark > 12) {
            mark = 0;
        }
        marks[index] = mark;
    }
}

// Метод для отримання імені
const char* Student::getName() {
    return name;
}

// Метод для встановлення імені
void Student::setName(const char* studentName) {
    delete[] name;  // Звільнення старої пам'яті
    name = new char[strlen(studentName) + 1];
    strcpy_s(name, strlen(studentName) + 1, studentName);
}

// Метод для отримання дати
const char* Student::getDate() {
    return date;
}

// Метод для встановлення дати
void Student::setDate(const char* studentDate) {
    delete[] date;  // Звільнення старої пам'яті
    date = new char[strlen(studentDate) + 1];
    strcpy_s(date, strlen(studentDate) + 1, studentDate);
}

// Метод для отримання телефону
const char* Student::getTelephone() {
    return telephone;
}

// Метод для встановлення телефону
void Student::setTelephone(const char* studentTelephone) {
    delete[] telephone;  // Звільнення старої пам'яті
    telephone = new char[strlen(studentTelephone) + 1];
    strcpy_s(telephone, strlen(studentTelephone) + 1, studentTelephone);
}

// Метод для отримання міста
const char* Student::getCity() {
    return city;
}

// Метод для встановлення міста
void Student::setCity(const char* studentCity) {
    delete[] city;  // Звільнення старої пам'яті
    city = new char[strlen(studentCity) + 1];
    strcpy_s(city, strlen(studentCity) + 1, studentCity);
}

// Метод для отримання країни
const char* Student::getCountry() {
    return country;
}

// Метод для встановлення країни
void Student::setCountry(const char* studentCountry) {
    delete[] country;  // Звільнення старої пам'яті
    country = new char[strlen(studentCountry) + 1];
    strcpy_s(country, strlen(studentCountry) + 1, studentCountry);
}

// Метод для отримання назви академії
const char* Student::getAcademy() {
    return academy;
}

// Метод для встановлення назви академії
void Student::setAcademy(const char* Academy) {
    delete[] academy;  // Звільнення старої пам'яті
    academy = new char[strlen(Academy) + 1];
    strcpy_s(academy, strlen(Academy) + 1, Academy);
}

// Метод для отримання академії (місто/країна)
const char* Student::getAcademy_city_country() {
    return academy_city_country;
}

// Метод для встановлення академії (місто/країна)
void Student::setAcademy_city_country(const char* Academy_city_country) {
    delete[] academy_city_country;  // Звільнення старої пам'яті
    academy_city_country = new char[strlen(Academy_city_country) + 1];
    strcpy_s(academy_city_country, strlen(Academy_city_country) + 1, Academy_city_country);
}

// Метод для отримання номера
int Student::getNumber() {
    return number;
}

// Метод для встановлення номера
void Student::setNumber(int Number) {
    number = Number;
}

void Student::print() {
    cout << "Имя: " << getName() << "\n" << "Дата рождения: " << getDate() << "\n" << "Номер телефона: " << getTelephone() << "\n" << "Город: " << getCity() << "\n" << "Страна: " << getCountry() << "\n" << "Название академии: " << getAcademy() << "\n" << "Город и страна (академии): " << academy_city_country << "\n" << "Номер группы: " << getNumber() << endl;
}

Student::Student(Student&& object)
    : marks(object.marks),
    name(object.name),
    date(object.date),
    telephone(object.telephone),
    city(object.city),
    country(object.country),
    academy(object.academy),
    academy_city_country(object.academy_city_country),
    marksCount(object.marksCount),
    number(object.number) 
{
    object.marks = nullptr;
    object.name = nullptr;
    object.date = nullptr;
    object.telephone = nullptr;
    object.city = nullptr;
    object.country = nullptr;
    object.academy = nullptr;
    object.academy_city_country = nullptr;

}

Student& Student::operator=(const Student& object) {
    if (this != &object) { 
        delete[] marks;
        delete[] name;
        delete[] date;
        delete[] telephone;
        delete[] city;
        delete[] country;
        delete[] academy;
        delete[] academy_city_country;

        marksCount = object.marksCount;

        arr = object.arr;
        size = object.size;

        object.arr = nullptr;
        object.size = 0;

    }

    return *this;
}
//DynArray& operator=(DynArray&& object)
//{
//    if (!(this == &object))
//    {
//        delete arr;
//
//        arr = object.arr;
//        size = object.size;
//
//        object.arr = nullptr;
//        object.size = 0;
//
//    }
//    std::cout << "DynArr move assigned for "
//        << size << " elements, for " << this
//        << '\n';
//
//    return *this;
//}