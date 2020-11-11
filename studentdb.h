#ifndef __STUDENTDB_H
#define __STUDENTDB_H

#include "student.h"
#include "wcstudent.h"
#include<list>

using namespace std;

class WCStudentDatabase
{
    std::list<WCStudent> student;

    public:
    void addStudent(int id, string name, int age, string city, int mark1, int mark2, int mark3, DEPT e, double f);
    void removeStudent(int id, string name, int age, string city);
    int countAll();
    int findMaxMark();
    int findMinMark();
    double findAvgMark();
    //int findMaxAvgMark();
    //int findMinAvgMark();
    int countStudentByDept(DEPT d);
};


#endif
