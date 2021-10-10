#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, R;
	srand((unsigned)time(NULL));

	cout << "R ="; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		cout << "x ="; cin >> x;
		cout << "y ="; cin >> y;

		if (((y * y) <= ((R * R) - (x * x)) && y >= 0 && x <= 0) ||
			y <= 0 && y >= (-R / (R / 2)) * x && y >= -R + ((R / (R / (R - 2))) * (x - (R / 2))))
			cout << "���" << endl;
		else
			cout << "ͳ" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R;
		y = 6. * rand() / RAND_MAX - R;

		if (((y * y) <= ((R * R) - (x * x)) && y >= 0 && x <= 0) ||
			y <= 0 && y >= (-R / (R / 2)) * x && y >= -R + ((R / (R / (R - 2))) * (x - (R / 2))))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "���" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "ͳ" << endl;
	}
	
	return 0;
}