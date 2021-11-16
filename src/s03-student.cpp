#include <iostream>
#include <string>
using namespace std;

struct Student
{
	char imie[20];
	char nazwisko[20];
	int nr_indeksu;
	int semestr;
	double srednia_ocen;
};

string toString(Student student) 
{
	string text = student.imie;
	text += ' ';
	text += student.nazwisko; 
	text += " [s";
	text += std::to_string(student.nr_indeksu);
	text += "] semestr ";
	text += std::to_string(student.semestr);
	text += ": ";
	text += std::to_string(student.srednia_ocen);
	return text;
}

int main()
{
	auto const student = Student{
		"Kacper",
		"Tokarzewski",
		26288,
		1,
		3.75
	};
	
	cout << toString(student) + " \n";

	return 0;
}
