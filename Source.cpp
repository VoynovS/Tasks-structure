//������������ ������ ������� �++
#include <iostream> // ������� ����������
#include <string>
#include <math.h> // �������������� ����������
using namespace std; //����������� ������������ ����

struct person{
	string name;
	int age;
	int coins[5]; //������
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
	person A = { "���", 55, {5,1,1,2,5} };
	showPerson(A);
	cout << "��� �������� - " << yearOfBirth(A, 2022) << endl;
	cout << "����� ����� = " << cash(A) << endl;

	//Task 2 //sqrt() - ������ pow() - �������
	D1.struck
	int D1 = sqrt(pow(A.X - 0, 2) + pow(A.Y - 0, 2));
	int D2 = sqrt(pow(B.X - 0, 2) + pow(B.Y - 0, 2));

	

	return 0;
}

void showPerson(person &P) {
	//Tom, 55 years, 
	//coins: 
	cout << P.name << ", " << P.age << " ���\n";
	cout << "������: ";
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