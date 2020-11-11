#include "student.h"
#include "wcstudent.h"
#include <gtest/gtest.h>

namespace {

class StudentTest : public ::testing::Test {

protected:
  void SetUp() { // override {
    bptr = new WCStudent(1,"Baby",21,"TNJ",100,100,100,CSE,9894556998); 
  }
  void TearDown() {
    delete bptr;
  }
  Student *bptr;  
};

TEST_F(StudentTest, DefaultConstructor) {
  WCStudent b1;
  EXPECT_EQ(0, b1.getId());
  EXPECT_EQ("", b1.getName());
  EXPECT_EQ(0, b1.getAge());
  EXPECT_EQ("", b1.getCity());
  EXPECT_EQ(CSE, b1.getDepartment());
  EXPECT_EQ(0, b1.getPhone());
}
TEST_F(StudentTest, ParameterizedConstructor) {
  WCStudent w1(5,"VISHALI",21,"CHE",100,100,100,CSE,9894556987); 
  EXPECT_EQ(5, w1.getId());
  EXPECT_EQ("VISHALI", w1.getName());
  EXPECT_EQ(21, w1.getAge());
  EXPECT_EQ("CHE", w1.getCity());
  //EXPECT_EQ("CSE", w1.getDepartment());
  EXPECT_EQ(9894556987, w1.getPhone());
}
TEST_F(StudentTest, ComputationTest) {
  EXPECT_EQ(300, bptr->total_marks());
  EXPECT_EQ(100, bptr->average());
}
TEST_F(StudentTest, AnotherTest) {
  WCStudent w2(6,"DHIWAKAR",21,"CHE",90,100,100,ECE,9894556857);  
  Student *uptr = &w2;
  EXPECT_EQ(6, w2.getId());
  EXPECT_EQ("DHIWAKAR", w2.getName());
  EXPECT_EQ(21, w2.getAge());
  EXPECT_EQ("CHE", w2.getCity());
  //EXPECT_EQ("ECE", w2.getDepartment());
  EXPECT_EQ(9894556857, w2.getPhone());
  EXPECT_EQ(290, uptr->total_marks());
  EXPECT_EQ(96, uptr->average());  
}

} // namespace
