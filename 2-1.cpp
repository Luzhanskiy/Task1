#include <cmath>
#include <iostream>
enum numbers
{ 
    first,
    second,
};
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
    std::cout << "Введите первое число: ";
    double first;
    std::cin >> first ;
    std::cout << "Введите второе число: ";
    double second;
    std::cin >> second;
    double z, x;
    z = fabs(first);
    x = fabs(second);
    const auto arithmetic_mean_of_cubes = getArithmeticMean(first, second);
    const auto average_of_modules = getGeometricMean(first, second);
    std::cout<<"среднее арифметическое кубов этих чисел =" <<getArithmeticMean<< std::endl<<"среднее геометрическое модулей этих чисел " <<getGeometricMean;
}
double Getarithmetic_mean_of_cubes(const double first, const double second);
{
    return (pow(first,3)+pow(second,3))/2;
}
double Getaverage_of_modules (const double x, const double z)
{
    return (z + x)/2;
}
