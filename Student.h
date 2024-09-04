#pragma once
class Student
{
private:
    char name[20];
    int marks[3];
    char date[15];
    char telephone[20];
    char city[20];
    char country[20];
    char academy[20];
    char academy_city_country[20];
    int number;

public:
    float getAver();
    void setMark(int mark, int index);
    int getMark(int index);
    void setName(const char* studentName);
    const char* getName();
    Student(int mark[3], const char* studentName, const char* studentDate, const char* studentTelephone, const char* studentCity, const char* studentCountry, const char* Academy, const char* Academy_city_country, int Number);

    void setDate(const char* studentDate);
    const char* getDate();

    void setTelephone(const char* studentTelephone);
    const char* getTelephone();

    void setCity(const char* studentCity);
    const char* getCity();

    void setCountry(const char* studentCountry);
    const char* getCountry();

    void setAcademy(const char* Academy);
    const char* getAcademy();

    void setAcademy_city_country(const char* Academy_city_country);
    const char* getAcademy_city_country();

    void setNumber(int Number);
    int getNumber();

    void print();

};

