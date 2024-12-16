#ifndef COMPLEX_MATH_H
#define COMPLEX_MATH_H

#pragma once

#ifdef _WIN32
    #ifdef COMPLEXMATH_EXPORTS
        #define COMPLEXMATH_API __declspec(dllexport)
    #else
        #define COMPLEXMATH_API __declspec(dllimport)
    #endif
#else
    #define COMPLEXMATH_API
#endif
#include <iostream>
#include <complex>
using namespace std;
// Определяем тип для работы с комплексными числами
using Complex = complex<double>;
// Арифметические операции
COMPLEXMATH_API Complex add(const Complex& a, const Complex& b);
COMPLEXMATH_API Complex subtract(const Complex& a, const Complex& b);
COMPLEXMATH_API Complex multiply(const Complex& a, const Complex& b);
COMPLEXMATH_API Complex divide(const Complex& a, const Complex& b);
#endif 
