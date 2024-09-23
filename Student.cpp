#include "Student.h"
#include <iostream>
using namespace std;

// �����������
Student::Student(int* marksArray, int count, const char* studentName, const char* studentDate, const char* studentTelephone, const char* studentCity, const char* studentCountry, const char* Academy, const char* Academy_city_country, int Number)
    : marksCount(count), number(Number)
{
    marks = new int[marksCount];  // �������� ���'�� ��� ������
    for (int i = 0; i < marksCount; i++) {
        marks[i] = marksArray[i];
    }

    // �������� �������� ���'�� ��� name
    name = new char[strlen(studentName) + 1];
    strcpy_s(name, strlen(studentName) + 1, studentName);

    // �������� �������� ���'�� ��� ����� �����
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

// ����������
Student::~Student() {
    delete[] marks;                    // ��������� ���'�� ��� ������
    delete[] name;                     // ��������� ���'�� ��� ����
    delete[] date;                     // ��������� ���'�� ��� ����
    delete[] telephone;                // ��������� ���'�� ��� ��������
    delete[] city;                     // ��������� ���'�� ��� ����
    delete[] country;                  // ��������� ���'�� ��� �����
    delete[] academy;                  // ��������� ���'�� ��� �����쳿
    delete[] academy_city_country;     // ��������� ���'�� ��� �����쳿 (����/�����)
}

// ����� ��� ���������� ���������� �������� ������
float Student::getAver() {
    float sum = 0;
    for (int i = 0; i < marksCount; i++) {
        sum += marks[i];
    }
    return marksCount > 0 ? sum / marksCount : 0;  // ���������� ������ �� ����
}

// ����� ��� ��������� ������ �� ��������
int Student::getMark(int index) {
    if (index >= 0 && index < marksCount) {
        return marks[index];
    }
    return -1; // ��� ������ �������
}

// ����� ��� ������������ ������
void Student::setMark(int mark, int index) {
    if (index >= 0 && index < marksCount) {
        if (mark < 1 || mark > 12) {
            mark = 0;
        }
        marks[index] = mark;
    }
}

// ����� ��� ��������� ����
const char* Student::getName() {
    return name;
}

// ����� ��� ������������ ����
void Student::setName(const char* studentName) {
    delete[] name;  // ��������� ����� ���'��
    name = new char[strlen(studentName) + 1];
    strcpy_s(name, strlen(studentName) + 1, studentName);
}

// ����� ��� ��������� ����
const char* Student::getDate() {
    return date;
}

// ����� ��� ������������ ����
void Student::setDate(const char* studentDate) {
    delete[] date;  // ��������� ����� ���'��
    date = new char[strlen(studentDate) + 1];
    strcpy_s(date, strlen(studentDate) + 1, studentDate);
}

// ����� ��� ��������� ��������
const char* Student::getTelephone() {
    return telephone;
}

// ����� ��� ������������ ��������
void Student::setTelephone(const char* studentTelephone) {
    delete[] telephone;  // ��������� ����� ���'��
    telephone = new char[strlen(studentTelephone) + 1];
    strcpy_s(telephone, strlen(studentTelephone) + 1, studentTelephone);
}

// ����� ��� ��������� ����
const char* Student::getCity() {
    return city;
}

// ����� ��� ������������ ����
void Student::setCity(const char* studentCity) {
    delete[] city;  // ��������� ����� ���'��
    city = new char[strlen(studentCity) + 1];
    strcpy_s(city, strlen(studentCity) + 1, studentCity);
}

// ����� ��� ��������� �����
const char* Student::getCountry() {
    return country;
}

// ����� ��� ������������ �����
void Student::setCountry(const char* studentCountry) {
    delete[] country;  // ��������� ����� ���'��
    country = new char[strlen(studentCountry) + 1];
    strcpy_s(country, strlen(studentCountry) + 1, studentCountry);
}

// ����� ��� ��������� ����� �����쳿
const char* Student::getAcademy() {
    return academy;
}

// ����� ��� ������������ ����� �����쳿
void Student::setAcademy(const char* Academy) {
    delete[] academy;  // ��������� ����� ���'��
    academy = new char[strlen(Academy) + 1];
    strcpy_s(academy, strlen(Academy) + 1, Academy);
}

// ����� ��� ��������� �����쳿 (����/�����)
const char* Student::getAcademy_city_country() {
    return academy_city_country;
}

// ����� ��� ������������ �����쳿 (����/�����)
void Student::setAcademy_city_country(const char* Academy_city_country) {
    delete[] academy_city_country;  // ��������� ����� ���'��
    academy_city_country = new char[strlen(Academy_city_country) + 1];
    strcpy_s(academy_city_country, strlen(Academy_city_country) + 1, Academy_city_country);
}

// ����� ��� ��������� ������
int Student::getNumber() {
    return number;
}

// ����� ��� ������������ ������
void Student::setNumber(int Number) {
    number = Number;
}

void Student::print() {
    cout << "���: " << getName() << "\n" << "���� ��������: " << getDate() << "\n" << "����� ��������: " << getTelephone() << "\n" << "�����: " << getCity() << "\n" << "������: " << getCountry() << "\n" << "�������� ��������: " << getAcademy() << "\n" << "����� � ������ (��������): " << academy_city_country << "\n" << "����� ������: " << getNumber() << endl;
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