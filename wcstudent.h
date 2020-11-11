#ifndef __WCSTUDENT_H
#define __WCSTUDENT_H

#include "student.h"
#include<iostream>
using namespace std;

enum DEPT {CSE, IT, ECE, MECH};

class WCStudent : public Student
{
    int id;
    string name;
    int age;
    string city;
    int mark1, mark2, mark3;
    double phone;
    
    public: 
    DEPT dept;
    WCStudent();
    WCStudent(int a, string b, int c, string d, int m1, int m2, int m3, DEPT e, double f);
    double getPhone();
    DEPT getDepartment();
    double total_marks();
    double average();
    int getId();
    string getName();
    int getAge();
    string getCity();
    int getMark1();
    int getMark2();
    int getMark3();
    //double average();
};

#endif
