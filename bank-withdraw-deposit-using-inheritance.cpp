#include<iostream>
#include<string>
using namespace std;
class Bank{
	public:
		int deposit,withdraw;
};
class Member:public Bank{
	public:
		int acno,balance;
		string name;
		void display();
};

void Member::display(){
	cout<<"Name : "<<name<<endl<<"Account No : "<<acno<<endl<<"Balance : "<<balance<<endl;
	
}
int main(){
	char a;
	Member m1;
	cout<<"Enter your name ,acno,balance : "<<endl;
	getline(cin,m1.name);
	cin>>m1.acno>>m1.balance;
	m1.display();
	cout<<"You want to withdraw or deposit the amount ? for withdraw - W for deposit - D "<<endl;
	cin>>a;
	if (a == 'D' || 'd'){
		cout<<"Enter the amount you want to deposit : "<<endl;
		cin>>m1.deposit;
		m1.balance = m1.balance + m1.deposit;
		cout<<"Now the balance in your account : "<<m1.balance<<endl;
	}
	else if(a == 'W'||'w'){
		cout<<"Enter the amount you want to withdraw : "<<endl;
		cin>>m1.withdraw;
		if(m1.withdraw > m1.balance){
			cout<<"The Balance insufficient ";
		}
		else{
			m1.balance = m1.balance - m1.withdraw;
			cout<<"The withdraw is successful and your balence is : "<<m1.balance<<endl;
		}
		
	}
}


