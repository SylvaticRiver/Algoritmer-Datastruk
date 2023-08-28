#include "Recursive.h"
#include <iostream>
using namespace std;
Recursive recursive;

int main() {
	int v;
	cout << "1 for factorial, 2 for Fibonacci " << endl;
	cin >> v;
	if (v == 1) {
		double x;
		cout << "Type the factorial number" << endl;
		cin >> x;
		x = (int)x;
		recursive.y = x;
		double a = recursive.Recurse(x);
		cout << a;
	}
	if (v == 2) {
		double x;
		cout << "Type Fabonicci number" << endl;
		cin >> x;
		x = (int)x;
		double a = recursive.Fibonacci(x);
		cout << a;
	}

	return 0;
}

double Recursive::Recurse(double x) {
	if (x <= 1) {
		return this->y > 0 ? this->y : 1;
	}
	this->y *= (x - 1);
	Recurse(x - 1);
}

double Recursive::Fibonacci(int x)
{
	return x == 0 ? 0 : x == 1 ? 1 : Fibonacci(x - 1) + Fibonacci(x - 2);
}
