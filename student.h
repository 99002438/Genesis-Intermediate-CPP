#ifndef __STUDENT_H
#define __STUDENT_H

#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    int age;
    string city;
    int mark1, mark2, mark3;

    public:
    Student();
    Student(int id, string name, int age, string city, int mark1, int mark2, int mark3);
    int getId();
    string getName();
    int getAge();
    string getCity();
    int getMark1();
    int getMark2();
    int getMark3();
    virtual double total_marks()=0;
    virtual double average()=0; 
};

#endif