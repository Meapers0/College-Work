#include "Person.h"
#include <sstream>
using namespace std;
//PERSON
Person::Person() {
  Fname = "";
  Lname = "";
  birthDay = 1;
  birthMonth = 1;
  birthYear = 1;
}

Person::Person(string first, string last, int day, int month, int year) {
  Fname = first;
  Lname = last;
  birthDay = day;
  birthMonth = month;
  birthYear = year;
}

string Person::getName() {
  return Fname + " " + Lname;
}

string Person::getBirthdate() {
  ostringstream bday;
  bday << birthDay << "/" << birthMonth << "/" << birthYear;
  return bday.str();
}
//EMPLOYEE
Employee::Employee(double wage, int hours, string first, string last, int day, int month, int year)
:Person(first, last, day, month, year) {
  wage_ = wage;
  hours_ = hours;
}

double Employee::getPaycheck(){
  return wage_ * hours_;
}

void Employee::setPaycheck(double wage, int hours) {
  wage_ = wage;
  hours_ = hours;
}

Student::Student() {
  num_credits_ = 0;
}

Student::Student(string first, string last, int day, int month, int year, int credit)
:Person(first, last, day, month, year) {
  num_credits_ = credit;
}

void Student::setCredits(int credit) {
  num_credits_ = credit;
}

int Student::getCredits() {
  return num_credits_;
}
//GRADUATE
GradStudent::GradStudent(){
  graduate_ = false;
}

GradStudent::GradStudent(string first, string last, int day, int month, int year, int credit)
:Student(first, last, day, month, year, credit){
  if(credit >= 30){
    graduate_ = true;
  } else {
    graduate_ = false;
  }
}

bool GradStudent::shouldGraduate() {
  return graduate_;
}