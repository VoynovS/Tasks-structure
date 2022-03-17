//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
#include <string>
#include <math.h> // математические вычисления
using namespace std; //Подключение пространства имен

struct person{
	string name;
	int age;
	int coins[5]; //Массив
};

struct T {
	int X;
	int Y;
};



void showPerson(person &P);
int yearOfBirth(person& P, int year);
int cash(person& P);

int main() {

	setlocale(LC_ALL, "Russian");

	//Task 1
	person A = { "Том", 55, {5,1,1,2,5} };
	showPerson(A);
	cout << "Год рождения - " << yearOfBirth(A, 2022) << endl;
	cout << "Сумма монет = " << cash(A) << endl;

	//Task 2 //sqrt() - корень pow() - квадрат
	D1.struck
	int D1 = sqrt(pow(A.X - 0, 2) + pow(A.Y - 0, 2));
	int D2 = sqrt(pow(B.X - 0, 2) + pow(B.Y - 0, 2));

	

	return 0;
}

void showPerson(person &P) {
	//Tom, 55 years, 
	//coins: 
	cout << P.name << ", " << P.age << " лет\n";
	cout << "Монеты: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ", ";
	cout << "\b\b.\n";
}

int yearOfBirth(person& P, int year) {
	return year - P.age;
}

int cash(person &P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	cout << "\b\b.\n";
	return sum;
}