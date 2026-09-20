#include <iostream>
#include <string>

int main() {

	//integer (whole number)
	int age = 19;
	int year = 2023;


	//double (number including decimal)
	double price = 10.99;
	double gpa = 4.0;
	double temperature = 23.5;


	// single character
	char grade = 'A';
	char initial = 'B';
	char currency = '$';


	// boolean (true or false)
	bool student = true;
	bool power = false;

	// string (objects that represents a sequence of text)
	std::string name = "Fidan";
	std::string day = "Friday";
	std::string food = "pizza";


	std::cout << "Hello " << name << '\n';
	std::cout << "You are " << age << " years old";

	return 0;

}