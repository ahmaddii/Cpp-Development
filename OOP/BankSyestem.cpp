#include<iostream>
using namespace std;

class BankAccount{
	
	private:
		
		float Balance;
		
	public:
		
		void Deposit(float amount)
		{
			if(amount > 0)
			{
				Balance += amount;
			}
		}
		
		void Widthdraw(float amount)
		{
			if(amount >0 && amount <= Balance)
			{
				Balance -= amount;
			}
			else {
				cout<<"Balance is Zero or Invalid Amount"<<endl;
			}
		}
		
		void checkBalance()
		{
			cout<<"You Balance is :"<<Balance<<endl;
		}
	
};

int main()
{  
  BankAccount obj;
  obj.Deposit(500);
  obj.checkBalance();
  obj.Widthdraw(300);
  obj.checkBalance();
  obj.Widthdraw(200);
  obj.checkBalance();
}