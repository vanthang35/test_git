#include <iostream>
#include <string>
#include <map>

struct Employee
{
	std::string name;
	__int32 year_of_experience;
};

int main()
{
	std::map<__int32, Employee> listEmployee;

	listEmployee.insert(std::pair<__int32, Employee>(3, { "Le Tran Dat", 5 }));
	listEmployee.insert(std::pair<__int32, Employee>(2, { "Someone", 0 }));

	listEmployee[4] = { "new employee", 1 }; //operator[<key>] = <value>

	std::map<__int32, Employee>::iterator iter = listEmployee.find(3);
	if (iter != listEmployee.end())
	{
		std::cout << "Employee ID:        " << iter->first << std::endl;
		std::cout << "Employee name:      " << (iter->second).name << std::endl;
		std::cout << "Year of experience: " << (iter->second).year_of_experience << std::endl;
	}
	else
	{
		std::cout << "ID 3 is not exist" << std::endl;
	}

	return 0;
}