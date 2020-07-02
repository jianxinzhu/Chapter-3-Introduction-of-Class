/*  name: jianxin zhu
    date: july/01/2020
 */
 
 #include<string>

class Account
{
public:
	Account(std::string accountName, int bankBalance)
		:name{ accountName }
	{
		if (bankBalance > 0)
		{
			balance = bankBalance;
		}
	}
	void withDraw(int withDrawAmount)
	{
		if (withDrawAmount > balance)
		{
			std::cout << "WithDrawal amount exceeded account balance" << std::endl;
		}
		else
		{
			balance = balance - withDrawAmount;
		}
	}
	void deposit(int depositAmount)
	{
		if (depositAmount > 0)
		{
			balance = balance + depositAmount;
		}
	}
	int getBalance() const
	{
		return balance;
	}
	void setName(std::string accountName)
	{
		name = accountName;
	}
	std::string getName() const
	{
		return name;
	}


private:
	std::string name;
	int balance = 0;

};
