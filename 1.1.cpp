#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая значение a
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double z - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение a
**/
double getA(const double x, const double y, const double z);

/**
* \brief Математическая функция, рассчитывающая значение b
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double z - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double a - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение b
**/
double getB(const double x, const double y, const double z, const double a);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успешного выполнения.
 */
int main() {
	const double x = -4.8;
	const double y = 17.5;
	const double z = 3.2;
	const auto a = getA(x, y, z);
	const auto b = getB(x, y, z, a);
	cout << " x = " << x << "\n y = " << y << "\n z = " << z << "\n a = " << a << "\n b = " << b;
	return 0;
}

double getA(const double x, const double y, const double z) {
  return pow(x*y*z,2)-z/pow(sin(x/z), 2 );
}

double getB(const double x, const double y, const double z, const double a) {
  return (z*exp(-sqrt(z))*cos((y*x)/z));
