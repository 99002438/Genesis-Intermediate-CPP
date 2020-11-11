#include "wcstudent.h"
using namespace std;


WCStudent::WCStudent():id(0),name(""),age(0),city(""),mark1(0),mark2(0),mark3(0),phone(0),dept(CSE){}

WCStudent::WCStudent(int a, string b, int c, string d, int m1, int m2, int m3, DEPT e, double f):id(a),name(b),	age(c),city(d),mark1(m1),mark2(m2),mark3(m3),dept(e),phone(f){}

double WCStudent::total_marks()
{
    return (mark1+mark2+mark3);
}
double WCStudent::average()
{
    return ((mark1+mark2+mark3)/3);
}
double WCStudent::getPhone()
{
    return phone;
}
DEPT WCStudent::getDepartment()
{
    return dept;
}
int WCStudent::getId()
{
    return id;
}
string WCStudent::getName()
{
    return name;
}
int WCStudent::getAge()
{
    return age;
}
string WCStudent::getCity()
{
    return city;
}
int WCStudent::getMark1()
{
    return mark1;
}
int WCStudent::getMark2()
{
    return mark2;
}
int WCStudent::getMark3()
{
    return mark3;
}
