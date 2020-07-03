/*   name:  jianxin zhu
     date: july/02/2020
 */
 
 #include<iostream>
#include"MotorVehicle.h"

int main()
{
	MotorVehicle item1{ "TOYOTA","98",2010 };
	string color;
	int capacity;

	cout << "Enter color and capacity: ";
	cin >> color >> capacity;

	item1.setEngineCapacity(capacity);
	item1.setColor(color);

	item1.displayCarDetails();
}
