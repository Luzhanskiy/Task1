#include <cmath>
#include <iostream>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая значение функции y
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает значение функции y
**/

double gety(const double x);

/**
* \brief Точка входа в программу.
* \return Возвращает 0 в случае успешного выполнения.
*/
int main()
{
  const double x = 0;
  const auto y = gety(x);
}

double gety(const double x)
{
  for(double x = 0; x <= 0.85; x = x + 0.05)
  {
    cout << "y = " << x - (1/(3 + sin(3.6 * x)) << endl;
  }
  return 0.85;
}