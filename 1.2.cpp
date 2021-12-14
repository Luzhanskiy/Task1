#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief Математическая функция, рассчитывающая значение getRectangleArea - Площадь прямоугольника
* \param const double a - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double b - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение getRectangleArea - Площадь прямоугольника
**/
double getRectangleArea (const double a,const double b);
/**
* \brief Математическая функция, рассчитывающая значение getTriangleArea - Площадь треугольника
* \param const double a - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double b - константа, имеющая тип данных с плавающей точкой двойной точности
\param const double c - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение getTriangleArea - Площадь треугольника
**/
double getTriangleArea (const double a,const double b, const double c);

int main()

{
	double a,b,c;
	cout<<"Введите 3 переменные";
	cin>>a>>b>>c;

	double Rectangle = getRectangleArea(a,b);
	double Triangle = getTriangleArea(a,b,c);

	cout<<Rectangle<<" "<<Triangle;
	return 0;
}

double getRectangleArea(const double a,const double b)
{
	return a*b;
}

double getTriangleArea (const double a,const double b, const double c)
{
	double p = (a + b + c) / 2;
	return (sqrt(p*(p - a)*(p - b)*(p - c)))/2;
}