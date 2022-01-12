
#include <iostream>
#include <string>
using namespace std;

unsigned short ReadPersonAge() {
	unsigned short age;
	cout << "Введите возраст - " ;
	cin >> age;
	return age;
}

 string ReadPersonName( )
{
	 string s;
	cout << "Введите Имя - " ;
	cin >> s;
	return s;
}
unsigned short Height;
void ReadPersonHeight( )
{
	cout << "Введите Рост - ";
	cin >> Height;
	
}

void ReadPersonWeight(unsigned short& w)
{
	cout << "Введите Вес - " ;
	cin >> w;
	
}

void ReadPersonSalary(double* ag)
{
	cout << "Введите Заработную плату- " ;
	cin >> *ag;
	
}
void ReadPersonData(string& name, unsigned short& age, string& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    double dSalary;
    ReadPersonSalary(&dSalary);
    salary = to_string(dSalary);
}

void ReadPersonData(string& name, unsigned short& age, string& height, string& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    height = to_string(Height);
    unsigned short pWeight;
    ReadPersonWeight(pWeight);
    weight = to_string(pWeight);
}

void WritePersonData(unsigned short age, string& name, const string& height = "", const string& weight = "", const string& salary = "") {
    cout << name << endl << to_string(age) << endl << height << endl << weight << endl << salary << endl;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    string name, height, weight, salary;
    unsigned short age;
    ReadPersonData(name, age, salary);
    WritePersonData(age, name, "", "", salary);
    ReadPersonData(name, age, height, weight);
    WritePersonData(age, name, height, weight);
    return 0;
}

