#include "student.h"
#include "wcstudent.h"
#include "studentdb.h"
#include <list>
using namespace std;


void WCStudentDatabase::addStudent(int id, string name, int age, string city, int mark1, int mark2, int mark3, DEPT e, double f)
{
    student.push_back(WCStudent(id,name,age,city,mark1,mark2,mark3,e,f));
}
void WCStudentDatabase::removeStudent(int id, string name, int age, string city)
{
    std::list<WCStudent>::iterator it;
    for(it=student.begin();it!=student.end();++it)
    {
        if((it->getId()==id) && (it->getName().compare(name)==0) && (it->getAge()==age) && (it->getCity().compare(city)==0))
        {
            student.erase(it);
	    break;
        }
    }
}
int WCStudentDatabase::countAll()
{
    return student.size();
}
int WCStudentDatabase::findMaxMark()
{
    int max=0;
    std::list<WCStudent>::iterator it;
    it=student.begin();
    std::list<WCStudent>::iterator maxit;
    maxit=it;
    max=it->total_marks();
    for(it=student.begin();it!=student.end();++it)
    {
        if(it->total_marks()>max)
        {
            max=it->total_marks();
            maxit=it;
        }
    }
    return max;
}
int WCStudentDatabase::findMinMark()
{
    int max=1000;
    std::list<WCStudent>::iterator it;
    it=student.begin();
    std::list<WCStudent>::iterator maxit;
    maxit=it;
    max=it->total_marks();
    for(it=student.begin();it!=student.end();++it)
    {
        if(it->total_marks()<max)
        {
            max=it->total_marks();
            maxit=it;
        }
    }
    return max;
}
double WCStudentDatabase::findAvgMark()
{
    int mk=0;
    std::list<WCStudent>::iterator it;
    for(it=student.begin();it!=student.end();++it)
    {
        mk+=it->total_marks();
    }
    double avg=mk/(student.size());
    return avg;
}
int WCStudentDatabase::countStudentByDept(DEPT d)
{
    int count=0;
    std::list<WCStudent>::iterator it;
    for(it=student.begin();it!=student.end();++it)
    {
        if(it->getDepartment()==d)
        {
            ++count;
        }
    }
    return count;
}
