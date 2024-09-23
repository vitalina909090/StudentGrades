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

    float getAver();
    void setMark(int mark, int index);
    int getMark(int index);
    void setName(const char* studentName);
    const char* getName();

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

    Student(Student&& object);

    Student& operator=(const Student& object);
};
