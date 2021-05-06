#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
	float a;
	float sum, sumsin, sumcos;
	
	cout << "Enter angle: ";
	cin >> a;
	
	sumsin = (sin(a)*sin(a));
	sumcos = (cos(a)*cos(a));
	sum = sumsin + sumcos;
	
	cout << "\nAngle value: " << a;
	cout << "\n\nSum of Square of Sin: "<<sumsin;
	cout << "\nSum of Square of Cos: "<<sumcos;
	cout << "\nSum of square of sin and cos of angle: " << sum;
	if (sum=1)
	{
		cout << "\n Sum of square of sin and cos is 1, Congrates!";
	}
	else
		{
			cout << "\nSum of square of sin and cos is not 1, Araass! ";
		}
getch();
}
