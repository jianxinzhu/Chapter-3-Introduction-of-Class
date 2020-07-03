/*  name: jianxin zhu
    date: july/02/2020
  */
  
  #include<iostream>

using namespace std;

class Date
{
public:
	Date(int initialMonth, int initialDay, int initialYear)
		:year(initialYear)
	{
		if (initialMonth >= 1 && initialMonth <= 12)
		{
			month = initialMonth;
		}

		if (initialDay >= 1 && initialDay <= 31)
		{
			day = initialDay;
		}
	}

	void displayDate(Date initialDate)
	{
		cout << initialDate.getMonth() << "/" << initialDate.getDay() << "/" << initialDate.getYear() << endl;
	}

	int getMonth() const
	{
		return month;
	}
	int getYear() const
	{
		return year;
	}
	int getDay() const
	{
		return day;
	}

private:
	int year = 1990;
	int month = 12;
	int day = 31;

};
