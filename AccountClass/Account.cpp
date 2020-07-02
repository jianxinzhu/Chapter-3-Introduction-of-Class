/*   name: jianxin zhu
     date: july/01/2020
 */
 
 
 #include<iostream>
#include"Account.h"

using namespace std;

int main()
{
	Account bankAccount = { "LiLy", 100 }; // data member;

	int withDrawAmount = 0; //local variable;

	cout << "Your account: " << bankAccount.getName() << "\nBalance: " << bankAccount.getBalance() << endl;

	cout << "Enter the amount you want to deposit: ";
	cin >> withDrawAmount;

	bankAccount.withDraw(withDrawAmount); // data member "deposit", to store local variable "depositAmount"

	cout << "Your account: " << bankAccount.getName() << "\nBalance: " << bankAccount.getBalance() << endl;


}
