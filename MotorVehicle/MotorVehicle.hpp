/*   name:  jianxin zhu
     date: july/02/2020
*/


#include<string>

using namespace std;

class MotorVehicle
{
public:
	MotorVehicle(string initialMake, string initalFuelType, int initialYear)
		:make(initialMake),fuelType(initalFuelType),yearOfManufacture(initialYear)
	{

	}
	void setMake(string makeValue)
	{
		make = makeValue;
	}
	void setFuelType(string fuelValue)
	{
		fuelType = fuelValue;
	}
	void setYear(int yearNumber)
	{
		yearOfManufacture = yearNumber;
	}
	void setColor(string colorValue)
	{
		color = colorValue;
	}
	void setEngineCapacity(int capacityValue)
	{
		engineCapacity = capacityValue;
	}

	void displayCarDetails()
	{
		cout << "Make: " << make << "\nFuelType: " << "\nYear Of Manufacture: " << yearOfManufacture
			<< "\nColor: " << color << "\nEngine Capacity:" << engineCapacity << endl;
	}
	string getMake() const
	{
		return make;
	}
	string getFuelType() const
	{
		return fuelType;
	}
	int getYearOfManufacture() const
	{
		return yearOfManufacture;
	}
	string getColor() const
	{
		return color;
	}
	int getEngineCapactiy() const
	{
		return engineCapacity;
	}
private:
	string make;
	string fuelType;
	int yearOfManufacture;
	string color;
	int engineCapacity;
};
