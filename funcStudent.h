#include "cllassStudent.h"

void Student::setNameSur()
{
	std::cout << "enter studend name : ";
	std::cin.getline(name, 20);
	std::cout << " \n enter student surname : \n";
	std::cin.getline(surname, 40);
}
void Student::getNameSur()
{
	std::cout<<"Name is : " << name << "\n"<<"Surname is : " << surname << std::endl;;
}