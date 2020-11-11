#include "student.h"
using namespace std;

Student::Student():id(0),name(""),age(0),city(""),mark1(0),mark2(0),mark3(0){}

Student::Student(int id, string name, int age, string city, int mark1, int mark2, int mark3):id(id),name(name),age(age),city(city),mark1(mark1),mark2(mark2),mark3(mark3){}

int Student::getId()
{
    return id;
}
string Student::getName()
{
    return name;
}
int Student::getAge()
{
    return age;
}
string Student::getCity()
{
    return city;
}
int Student::getMark1()
{
    return mark1;
}
int Student::getMark2()
{
    return mark2;
}
int Student::getMark3()
{
    return mark3;
}
double Student::total_marks()
{
    return 0;
}
double Student::average()
{
    return 0;
}