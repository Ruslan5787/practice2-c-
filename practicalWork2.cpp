#include <iostream>
#include <string>
#include <format>
#include <cmath>
using namespace std;

int getArrSum() {
	int array[5] = { 2, 4, 9, 3, 5 };
	int result = 0;

	for (int i = 0; i < size(array); i++)
	{
		result += array[i];
	}

	return result;
}

string get2ArrSum() {
	const int rows = 4;
	const int columns = 2;
	string resultStr;

	int array[rows][columns] = { {3, 2}, {1, 9}, {5, 4}, {8, 7} };

	for (int i = 0; i < rows; i++)
	{
		int result = 0;

		for (int j = 0; j < columns; j++)
		{
			result += array[i][j];
		}

		resultStr += to_string(i + 1) + " строка: " + to_string(result) + "\n";
	}

	return resultStr;
}

struct Person {
	string name[2];
	int age;
};

class Circle {
	private:
		int radius;

	public:
		float getS() {
			float pi = 3.1415926535;

			return pow(pi * radius, 2);
		}

		Circle(int c_radius) {
			radius = c_radius;
		}
};

string getUserInfo() {
	Person user;

	user.name[0] = "Mickey";
	user.name[1] = "Mouse";
	user.age = 21;

	return "Имя пользователя: " + user.name[0] + "\n"
		+ "Фамилия пользователя: " + user.name[1] + "\n"
		+ "Возраст: " + to_string(user.age);
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << getArrSum() << endl;
	cout << get2ArrSum() << endl;
	cout << getUserInfo() << endl;

	int r = 10;
	Circle circle(r);

	cout << "Площадь круга при радиусе " << to_string(r) << " равна " << circle.getS() << endl;
}
