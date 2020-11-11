all: all.out 
all.out : student.o wcstudent.o studentdb.o student-test.o studentdb-test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
studentdb-test.o: studentdb-test.cpp student.h wcstudent.h studentdb.h
	g++ $< -c
student-test.o: student-test.cpp student.h wcstudent.h
	g++ $< -c
studentdb.o : studentdb.cpp studentdb.h wcstudent.h student.h
	g++ $< -c
wcstudent.o : wcstudent.cpp wcstudent.h student.h
	g++ $< -c    
student.o : student.cpp student.h
	g++ $< -c
clean:
	rm -rf *.o *.out
