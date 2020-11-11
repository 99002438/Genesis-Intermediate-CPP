#include "student.h"
#include "wcstudent.h"
#include "studentdb.h"
#include <gtest/gtest.h>

namespace{

class StudentDbTest : public ::testing::Test {

protected:
  void SetUp() { 
    student.addStudent(1, "Muke", 22, "CBE", 80, 90, 100, CSE, 8789658789);  //600
    student.addStudent(2, "Prachi", 20, "BAM", 100, 100, 100, IT, 9875648789);   //400
    /*student.addStudent(6,10,5,  BLUE,  110);  //300
    student.addStudent(12,10,8, GREEN, 180);  //960
    student.addStudent(12,5,8,  RED,   200);  //480
    student.addStudent(15,8,10, BLUE,  140);  //1200
    student.addStudent(15,10,6, RED,   120);  //900
    student.addStudent(10,12,6, GREEN, 160);  //720 */
  }
  void TearDown() {}
  WCStudentDatabase student;
};

TEST_F(StudentDbTest, AddStudentTest) {
  student.addStudent(3, "Arun", 30, "VEL", 99, 100, 100, ECE, 9878954568);
  EXPECT_EQ(3, student.countAll());
}
TEST_F(StudentDbTest, RemoveStudentTest) {
  student.removeStudent(1, "Muke", 22, "CBE");
  EXPECT_EQ(1, student.countAll());
}
TEST_F(StudentDbTest, CountTest) {             
  EXPECT_EQ(2, student.countAll());
}
TEST_F(StudentDbTest, ComputationalTest) {  
  int maxMark = student.findMaxMark();
  int minMark = student.findMinMark();
  double avgMark = student.findAvgMark();
  EXPECT_EQ(300, maxMark);
  EXPECT_EQ(270, minMark);
  EXPECT_EQ(285, avgMark);         
}

TEST_F(StudentDbTest, CountByDeptTest) {
  int cseCount,eceCount;
  cseCount=student.countStudentByDept(CSE);
  eceCount=student.countStudentByDept(ECE);
  EXPECT_EQ(1, cseCount);
  EXPECT_EQ(0, eceCount);
}
TEST_F(StudentDbTest, AnotherDbTest) {
  student.addStudent(7, "Arun", 30, "VEL", 99, 100, 100, ECE, 9878954568);
  student.addStudent(8, "Arun", 30, "VEL", 99, 100, 100, ECE, 9878954568);
  EXPECT_EQ(4, student.countAll());
  EXPECT_EQ(300, student.findMaxMark());
  EXPECT_EQ(270, student.findMinMark());
  EXPECT_EQ(292, student.findAvgMark());
}

} // namespace
