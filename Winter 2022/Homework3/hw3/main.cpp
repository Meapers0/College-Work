#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

int main()
{
	Person p1("Sultana", "Sunzia", 6, 14, 1994);
	cout << p1.getName() << " was born on: " << p1.getBirthdate() << endl;
	cout << "\n";
	Employee e1(15.50, 40, "Joe", "Smith", 6, 3, 1998);
	cout << e1.getName() << " was born on: " << e1.getBirthdate() << ". Their paycheck was: $" << e1.getPaycheck() << endl;
	cout << "\n";
	GradStudent g1("Jane", "Doe", 3, 22, 1960, 32);
	cout << g1.getName() << " was born on: " << g1.getBirthdate() << endl;
	if(g1.shouldGraduate()){
		cout << "Student has graduated" << endl;
	} else {
		cout << "Student has not graduated" << endl;
	}
	return 0;
}
