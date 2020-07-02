/*   name: jianxin zhu
     date: july/01/2020
  */
  
  #include"Invoice.h"

int main()
{
	Invoice item1{ "101","HUMMER",30,5 };
	Invoice item2{ "102","CHAIR",10,3 };
	Invoice item3{"","",0,0};

	cout << "Item number: " << item1.getPartNumber() << "\nItem Description: " << item1.getPartDescription()
		<< "\nItem Price: " << item1.getItemPrice() << "\nItem Quantity: " << item1.getItemQuantity() 
		<<"\nItem Tax: "<<item1.getItemTax()<< endl;

	cout << "Total Amount: " << item1.getInvoiceAmount() << endl;

	cout << "--------------------------------------------------------------" << endl;

	cout << "Item number: " << item2.getPartNumber() << "\nItem Description: " << item2.getPartDescription()
		<< "\nItem Price: " << item2.getItemPrice() << "\nItem Quantity: " << item2.getItemQuantity()
		<< "\nItem Tax: " << item2.getItemTax() << endl;

	cout << "Total Amount: " << item2.getInvoiceAmount() << endl;


	string itemName, itemDescription;
	int itemPrice, itemQuantity;

	cout << "Enter new item number, description, quantiy and price: ";
	cin >> itemName >> itemDescription >> itemQuantity >> itemPrice;
	item3.setPartNumber(itemName);
	item3.setPartDescription(itemDescription);
	item3.setItemQuantity(itemQuantity);
	item3.setItemPrice(itemPrice);

	cout << "--------------------------------------------------------------" << endl;
	cout << "The Item you just entering: \n";

	cout << "Item number: " << item3.getPartNumber() << "\nItem Description: " << item3.getPartDescription()
		<< "\nItem Price: " << item3.getItemPrice() << "\nItem Quantity: " << item3.getItemQuantity()
		<< "\nItem Tax: " << item3.getItemTax() << endl;

	cout << "Total Amount: " << item3.getInvoiceAmount() << endl;




}
