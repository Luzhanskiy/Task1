#include <iostream>
#include <cmath>

using namespace std;

void first_step(const double a,const double b);

void second_step(const double a,const double b);




enum path
{
	first = 1,
	second = 2
};

int main() {
  
	double a, b, choice;
	cout << "Введите два числа";
	cin>>a>>b;
	cout << "Выберите что вы хотите посчитать:\n 1 - среднее арифметическое кубов этих чисел\n 2 - среднее геометрическое модулей этих чисел\n Выбор: ";
	cin >> choice;
	const auto filling = static_cast<path>(choice);
	switch (filling) {
	case path::first:
	{
		first_step(a, b);
	}
	case path::second:
	{
		second_step(a, b);
	}
	default:
		cout << "Некоректный ввод.";
	}
}

void first_step(const double a,const double b){
	cout<<(pow(a,3) + pow(b,3))/2;
}

void second_step(const double a,const double b){
	cout<<(fabs(a) + fabs(b))/2;
}