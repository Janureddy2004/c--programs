#include<iostream>
#include<string>
using namespace std;
class Employee{
	public: //Access specifier
		int id;//data members or attributers
		string name1,name2;//data members or attributers
};
int main(){
	Employee emp1;
	emp1.id = 1245;
	emp1.name1= "Jahnavi";
	emp1.name2 = "Reddy";
	cout<< emp1.id;
}
