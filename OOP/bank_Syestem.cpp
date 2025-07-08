#include<iostream>
using namespace std;

// Bank Managment Syestem

class  BankAccount{
	
	private:
		
		int Account_Number;
	    float Balance;
	    
	public:
		
		// Setter
		
		void SetAccount(int accNo , float bal)
		{
			Account_Number = accNo;
			Balance = bal;
		}
		
		// getter
		
		float GetBalance()
		{     
		      cout<<"Current Balance is :"<<Balance<<endl;  
		      return Balance;  
		
		}
		
			// Deposit amount
		
		void Deposit(float amount)
		{
			Balance += amount;
			cout<<"Balance Deposited:"<<Balance<<endl;
		}
		
		// widthdraw amount
		
		void Widthraw(float amount)
		{
			if(amount > Balance)
			{
				cout<<"Insfufficent Balance !"<<endl;
			}
			else
			  {
			Balance -= amount;
			cout<<"Balance Widraw:"<<Balance<<endl;
			cout<<"Current Balance:"<<Balance<<endl;
				
			}
			
			
		}
};


int main()
{
    BankAccount b1;
    b1.SetAccount(023242142142532,40000);
    b1.GetBalance();
    b1.Deposit(10000);
    b1.Widthraw(100000);
}