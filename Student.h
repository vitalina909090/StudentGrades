#pragma once
#include <cstring>

class Student
{
private:
    char* name;
    int* marks;
    char* date;
    char* telephone;
    char* city;
    char* country;
    char* academy;
    char* academy_city_country;
    int number;
    int marksCount;

public:
    Student(int* marksArray, int count, const char* studentName, const char* studentDate, const char* studentTelephone, const char* studentCity, const char* studentCountry, const char* Academy, const char* Academy_city_country, int Number);
    ~Student();

    Student(const Student& other);
    Student& operator=(const Student& other);

    float getAver();
    int getMark(int index);
    void setMark(int mark, int index);
    const char* getName();
    void setName(const char* studentName);
    const char* getDate();
    void setDate(const char* studentDate);
    const char* getTelephone();
    void setTelephone(const char* studentTelephone);
    const char* getCity();
    void setCity(const char* studentCity);
    const char* getCountry();
    void setCountry(const char* studentCountry);
    const char* getAcademy();
    void setAcademy(const char* Academy);
    const char* getAcademy_city_country();
    void setAcademy_city_country(const char* Academy_city_country);
    int getNumber();
    void setNumber(int Number);
    void print();

    Student(Student&& other);
    Student& operator=(Student&& other);
};
