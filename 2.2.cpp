#include <cmath>
#include <iostream>

using namespace std;

/**
* \brief Математическая функция которая расчитывает значение функции y  
* \param  a - переменная 1
* \param  x - переменная 2
* \return Возвращает значение функции 
**/

double gety1(const double a, const double x);

/**
* \brief Математическая функция, рассчитывающая значение функции y 
* \param  a - переменная 1
* \param  x - переменная 2
* \return Возвращает значение функции y 
**/

double gety2(const double a, const double x);

/**
* \brief Точка входа в программу.
* \return Возвращает 0 в случае успешного выполнения.
*/
int main()
{
  const double a = 2.1;
  const double TRESHOLD = 4;
  double x;
  cin >> x;
  if (x < TRESHOLD)
  {
    const auto y = gety1(a, x);
    cout << "y = " << y;
  }
  else
  {
    const auto y = gety2(a, x);
    cout << "y = " << y;
  }
}

double gety1(const double a, const double x)
{
  return a/x + pow(x,2);
}

double gety2(const double a, const double x)
{
  return a*x+pow(x,3);
}
