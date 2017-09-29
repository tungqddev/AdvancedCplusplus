#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_

using namespace std;
#include<iostream>

namespace caveofprogramming {
	class Complex
	{
	private:
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double real, double imaginary);
		Complex(const Complex &other);
		const Complex &operator=(const Complex &other);

		double getReal() const { return real; }
		double getImaginary() const { return imaginary; }

		~Complex();
	};
	ostream &operator<<(ostream &out, const Complex &c);

	Complex operator+(Complex &c1, const Complex &c2);
	Complex operator+(Complex &c1, double d);
	Complex operator+(double d,Complex &c1);
}

#endif // !COMPLEX_H_


