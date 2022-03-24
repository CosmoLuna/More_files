#include <iostream>
#include"structures.h"

void showObj(date D) {
	std::cout << D.day << "." << D.month << "." << D.year << std::endl;
}

void showObj(person P)
{
	std::cout << "Name: " << P.name << std::endl << "Birthday: ";
	showObj(P.birthday);
	std::cout << "Position: " << P.position << std::endl << "Salary: " << P.salary << std::endl;
}
