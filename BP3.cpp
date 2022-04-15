#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
	for (int i = 0; i < 68; i++)
		cout << "-";

	cout << "\n : " << setw(3) << "x" << " : ";
	cout << setprecision(3) << setw(7) << right << "x,rad" << " : ";
	cout << setw(7) << right << "cos(x)" << " : ";
	cout << setw(17) << right << "cos(x) + sin(x)" << " : ";
	cout << setw(17) << right << "cos(sin(x))" << " : " << endl;
	
	for (int i = 0; i < 68; i++)
		cout << "-";

	for (int x = 0; x < 91; x+=5)
	{
		double radx = x * (M_PI / 180);
		double cosinus = x == 90 ? 1 : cos(radx);
		double sinus = x == 90 ? 0 : sin(radx);

		cout << "\n : " << setw(3) << x << " : ";
		cout << setprecision(3) << setw(7) << right << radx << " : ";
		cout << setprecision(4) << setw(7) << right << cosinus << " : ";
		cout << setw(17) << right << cosinus + sinus << " : ";
		cout << setw(17) << right << cos(sinus) << " : ";
	}
	cout << endl;
	for (int i = 0; i < 68; i++)
		cout << "-";
}