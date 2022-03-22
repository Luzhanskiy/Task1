#include <iostream>
using namespace std;


void input_manual(int* ar, unsigned int n, int left, int right);
void input_random(int* ar, unsigned int n, int left, int right);
void output_array(int* ar, unsigned  int n);
int function1(int* ar, unsigned int  n);
unsigned int function2(int* ar, unsigned int  n);
unsigned int function3(int* ar, unsigned int  n);

int main()
{
	setlocale(LC_ALL, "rus");
	const int left = -100;
	const int right = 200;
	unsigned int n;
	cout << " введите размерность массива " << endl;
	cin >> n;
	int* ar = new int[n];
	cout << " вы хотите ввести чила вручную(1) или заполнить случайно(0)?" << endl;
	int b;
	while (true)
	{
		cin >> b;
		switch (b)
		{
		case 1: input_manual(ar, n, left, right);
			break;
		case 0: input_random(ar, n, left, right);
			break;
		default:
			cout << " можно вводить только 1 или 0" << endl;
			continue;
		}
		break;
	}
	cout << "получили массив :" << endl;
	output_array(ar, n);
	int result = function1(ar, n);//сумма отричательных элементов
	if (result == 0)
	{
		cout << " в вашем массиве нет отрицательных чисел  " << endl;
	}
	else
	{
		cout << " сумма всех отрицательных равно " << result << endl;
	}
	unsigned int r = function2(ar, n);//количество элементов, значения которых положительны и не превосходят заданного числа а
	cout << " положительны элементы <=a : " << r << endl;
	result = function3(ar, n);//номера последней пары разнознаковых чисел
	if (result == 0)
	{
		cout << " нет таких пар " <<  endl;
	}
	else
	{
		cout << " индекс первого элемента последней разнознаковой пaры:"<< result - 1 << endl;
	}
	delete[] ar;
}

void input_manual(int* ar, unsigned int n, int left, int right)
{
	cout << " введите " << n << " чисел от  " << left << " до " << right << endl;
	for (unsigned int i = 0; i < n; ++i)
	{
		while (true)
		{
			cin >> ar[i];
			if (ar[i] >= left && ar[i] <= right)
			{
				break;
			}
			else
			{
				cout << "повторите ввод" << endl;
			}
		}
	}
}

void input_random(int* ar, unsigned int n, int left, int right)
{
	for (unsigned int i = 0; i < n; ++i)
	{
		ar[i] = rand() % 31 - 15;
	}
}

void output_array(int* ar, unsigned int n)
{
	for (unsigned int i = 0; i < n; ++i)
	{
		cout << ar[i] << endl;
	}
}

int function1(int* ar, unsigned int  n)//сумма отрицательных элементов
{
	int c = 0;
	for (unsigned int i = 0; i < n; ++i)
	{
		if (ar[i] < 0)
		{
			c += ar[i];
		}

	}
	return c;
}

unsigned int function2(int* ar, unsigned int  n )//количество элементов, значения которых положительны и не превосходят заданного числа а
{
	int a;
	unsigned int r = 0;
	
	cout << "введите число ";
	cin >> a;
	for (unsigned int i = 0; i < n; ++i )
	{
		if (ar[i] > 0 && ar[i] <= a)
		{
			r++;
		}
	}

	return r;
}

unsigned int function3(int* ar, unsigned int  n )// номера последней пары разнознаковых чисел
{
	unsigned int k = 0;
	bool pozitive = ar[0] >= 0;
	for (unsigned int i = 1; i < n; ++i)
	{
		if (pozitive && (ar[i] < 0) || !pozitive && (ar[i] >= 0))
		{
			k = i;
			pozitive = ar[i] >= 0;
		}
	}

	return k;
	
}
