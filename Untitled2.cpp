#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		int id;
		string name1,name2;
		Employee(int,string,string);
		string getfullname(){
			return name1+" "+name2;
		}
		void displaydetails();
};
Employee::Employee(int id,string name1,string name2){
	this->id = id;
	this->name1 = name1;
	this->name2 = name2;
}
void Employee::displaydetails(){
	cout<<"ID : "<<id<<endl<<"Name : "<<getfullname()<<"\n";
}
int main(){
	Employee emp1(1245,"Tangella","Jahnavi");
	emp1.displaydetails();
}
