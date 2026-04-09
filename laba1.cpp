#include <iostream>
#include <cmath>
using namespace std;
//pupupu
double rectangle_perimetr(double a, double b) {
	
	return (a + b) * 2;
}
double rectangle_squer(double a, double b) {

	return a * b;
}
double rectangle_diagonal(double a, double b) {
	
	return sqrt(pow(a, 2) + pow(b, 2));
}




int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Выберите действие : \n 1 - Периметр прямоугольника \n 2 - Площадь прямоугольника \n 3 - Длина диагонали прямоуголька" << endl;
	int numb;
	cin >> numb;
	double a; double b;
	cout << "Введите длинну стороны A" << endl;
	cin >> a;
	cout << "Введите длинну стороны B" << endl;
	cin >> b;
	if (numb == 1) {
		cout << rectangle_perimetr(a,b);
	}
	else if (numb == 2) {
		cout << rectangle_squer(a, b);
	}
	else if (numb == 3) {
		cout << rectangle_diagonal(a, b);
	}
	else{
		cout << "Ошибка";
}
}


