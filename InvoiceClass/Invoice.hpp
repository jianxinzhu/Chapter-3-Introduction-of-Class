/*   name: jianxin zhu
     date: july/01/2020
*/


#include<string>
#include<iostream>

using namespace std;

class Invoice
{
public:
	Invoice(string initalPart, string initalDescription, int initalQuantity, int initalPrice)
		:partNumber(initalPart), partDescription(initalDescription), itemQuantity(initalQuantity),itemPrice(initalPrice)
	{

	}
	void setPartNumber(string number)
	{
		partNumber = number;
	}
	void setPartDescription(string description)
	{
		partDescription = description;
	}
	void setItemQuantity(int quantity)
	{
		if (quantity > 0)
		{
			itemQuantity = quantity;
		}
	}
	void setItemPrice(int price)
	{
		if (price > 0)
		{
			itemPrice = price;
		}
	}
	void setItemTax(double tax)
	{
		itemTax = tax;
	}
	void setItemDiscount(double discount)
	{
		itemDiscount = discount;
	}
	double getInvoiceAmount() 
	{
		double subAmount = 0.0;
		double totalAmount = 0.0;
		subAmount = (itemQuantity * itemPrice);
		totalAmount = subAmount + (subAmount * itemTax) - (subAmount * itemDiscount);

		return totalAmount;
	}
	string getPartNumber() const
	{
		return partNumber;
	}
	string getPartDescription() const
	{
		return partDescription;
	}
	int getItemQuantity() const
	{
		return itemQuantity;
	}
	int getItemPrice() const
	{
		return itemPrice;
	}
	double getItemTax() const
	{
		return itemTax;
	}
	double getItemDiscount() const
	{
		return itemDiscount;
	}
private:
	string partNumber;
	string partDescription;
	int itemQuantity;
	int itemPrice;
	double itemTax = 0.2;
	double itemDiscount = 0.0;
};
