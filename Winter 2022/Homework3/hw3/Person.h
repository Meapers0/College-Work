#ifndef PERSON_H
#define PERSON_H
#include <string>
//PERSON
class Person {
public:
	Person();
	Person(std::string first, std::string last, int year, int day, int month);
	std::string getName();
	std::string getBirthdate();
private:
	std::string Fname;
	std::string Lname;
	int birthDay;
	int birthMonth;
	int birthYear;
};
//EMPLOYEE
class Employee : public Person {
public:
	Employee();
	Employee(double wage, int hours, std::string first, std::string last, int year, int day, int month);
	double getPaycheck();
	void setPaycheck(double wage, int hours);
private:
	int hours_;
	double wage_;
};
//STUDENT
class Student : public Person {
public:
	Student();
	Student(std::string first, std::string last, int day, int month, int year, int credit);
	int getCredits();
	void setCredits(int credits);
private:
	int num_credits_;
};
//Graduate?
class GradStudent : public Student {
public:
	GradStudent();
	GradStudent(std::string first, std::string last, int day, int month, int year, int credit);
	bool shouldGraduate();
private:
	bool graduate_;
};
#endif // PERSON_H