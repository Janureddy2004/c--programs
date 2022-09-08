#include<iostream>
#include<string>
using namespace std;
class Dog{
	public://access specifier
		int age;//members 
		string petname,breed;//members
		Dog();//Default constructor 
		Dog(int,string,string);//parameterized constructor
		void displaydetails();//function or method
};
Dog::Dog(){
	cout<<"Dog object is created :)";
}
Dog::Dog(int age,string petname,string breed){
	this->age=age;
	this->petname=petname;
	this->breed=breed;
}
void Dog::displaydetails(){
	cout<<"Pet Name : "<<petname<<endl<<"Age : "<<age<<endl<<"Breed : "<<breed<<"\n";
	
}
int main(){
	Dog d1(2,"Kukka","german");
	d1.displaydetails();
}
