#include<iostream>
#include<string>
using namespace std;
class Members{
	public:
		int age;
		string fullname;
		string phonenumber;
};
class Student:public Members{
	public:
		int studentid;
		string schlname;
		void display(){
			cout<<"Name : "<<fullname<<endl<<"Student ID : "<<studentid<<endl<<"Age : "<<age<<endl<<"Phone number : "<<phonenumber<<endl<<"School name : "<<schlname<<endl<<"\n";
		}
		void study(){
			cout<<"Studying"<<endl;
		}
};
class Employee:public Members{
	public:
		int emplyid;
		string cmpyname;
		void displayde(){
			cout<<"Name : "<<fullname<<endl<<"Age : "<<age<<endl<<"Employee ID : "<<emplyid<<endl<<"Company Name  : "<<cmpyname<<endl<<"Phone number : "<<phonenumber<<endl;
		}
		void work(){
			cout<<"Working"<<endl;
		}
};
int main(){
	Student s1;
	cout<<"Enter the details of the student :(age,full name,phn num,schl name,stdid) ";
	cin>>s1.age>>s1.fullname>>s1.phonenumber>>s1.schlname>>s1.studentid;
	Employee emp1;
	cout<<"Enter the details of the employee : (Name,Age,Employee ID,Company Name,Phone number)"
	cin>>emp1.fullname>>emp1.age>>emp1.emplyid>>emp1.cmpyname>>emp1.phonenumber;
	cout<<"The details of the student : \n";
	s1.display();
	s1.study();
	cout<<"The details of the employee : \n";
	emp1.displayde();
	emp1.work();
	
	
	
	
	
	
}
