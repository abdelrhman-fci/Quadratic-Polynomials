#include<iostream>

using namespace std; 

class Poly {
private:
	double a, b, c;
public:

	Poly() {
		a = 0;
		b = 0;
		c = 0;
	}

	Poly(double A, double B, double C)
	{
		a = A;
		b = B;
		c = C;
	}

	Poly operator + (Poly p2)
	{
		Poly temp;
		temp.a = a + p2.a;
		temp.b = b + p2.b;
		temp.c = c + p2.c;

		return temp;
	}

	void print() {
		if (a > 0 && b > 0 && c > 0)
		{
			cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
		}
		else if (a==0&&b==0) {
			cout << c << endl;
		}
		else if (a==0)
		{
			cout  << b << "x" << "+" << c << endl;

		}
		else if (b==0)
		{
			cout << a << "x^2" << "+"  << c << endl;

		}
		else if(b<0&&c<0)
		{
			cout << a << "x^2" << "-" << -b << "x" << "-" << -c << endl;

		}
		else if (b<0)
		{
				cout << a << "x^2" << "-" << -b << "x" << "+" << c << endl;

		}
		else if  (c<0)
		{
			cout << a << "x^2" << "+" << b << "x" << "-" << -c << endl;

		}
	}



};




int main() {

	Poly sum, q1(3, 4, -2), q2(0, -4, 10);

	sum = q1 + q2;
	q1.print();
	q2.print();
	sum.print();



	return 0;
}