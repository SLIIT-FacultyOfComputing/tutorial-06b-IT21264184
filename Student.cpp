#include "Student.h"
#include <iostream>
#include <cstring>

// Assign studentId and name
void Student::assignDetails(int no,char name[]) {
  studentID = no;
  strcpy(studentname,name);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student name :"<<studentname<<endl;
}
