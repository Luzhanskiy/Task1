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
    const double k= 0.05;
  double x = 0;
    while ( x <= 0.86)
        {
        double y=Gety(x);;
        std::cout<<"x= " <<x<<"  y= " <<y <<std::endl;
        x=x+k;
        }
}
double Gety (const double x)
{
    return x - 1/(3+ sin (3.6* x));
}
