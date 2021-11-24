#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
using namespace std;
/**
* \brief Математическая функция, рассчитывающая значение arithmeticMean - Среднее арифмитическое
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение arithmeticMean - Среднее арифмитическое
**/
double getArithmeticMean(const double x, const double y );
/**
* \brief Математическая функция, рассчитывающая значение geometricMean - Среднее геометрическое
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение geometricMean - Среднее геометрическое
**/
double getGeometricMean(const double x, const double y );
/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успешного выполнения.
 */
int main()
{
  double x , y;
  cin >> x >> y;
  const auto arithmeticMean = getArithmeticMean(x , y );
  const auto geometricMean = getGeometricMean(x , y );
  cout << arithmeticMean <<endl<< geometricMean;
}
double getArithmeticMean(const double x, const double y )
{
  return (pow(x,3) + pow(y,3))/2.0;
}
double getGeometricMean(const double x, const double y )
{
  return sqrt(abs(x)*abs(y));
}
