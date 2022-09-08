#include<iostream>
#include<string>
using namespace std;
class Animal{
	public:
		int age;
		string color;
		string run(){
			return "Running Ahh...!";
		}
	
};
class Dog:public Animal{
	public:
		string petname;
		string bark(){
			return "Bow Bow ^@^";
		}
		void displaydetails();
};
void Dog::displaydetails(){
	Dog d;
	cout<<"Petname : "<<petname<<endl<<"Age : "<<age<<endl<<"Color : "<<color<<endl<<"The dog do : "<<bark()<<run()<<endl;
}
class Lion:public Animal{
	public:
		string roar(){
			return "Roaring !!";
		}
		void disPlay();
};
void Lion::disPlay(){
	cout<<"Age of the lion : "<<age<<endl<<"Color : "<<color<<endl<<"The lion do : "<<roar()<<run()<<endl;
}
int main(){
	Dog dog1;
	cout<<"Enter the pet name,color,age of the Dog :"<<endl;
	getline(cin,dog1.petname);
	cin>>dog1.color>>dog1.age;
	
	Lion li1;
	cout<<"Enter the details of Lion :(age,color) "<<endl;
	cin>>li1.age>>li1.color;
	cout<<"The Dog details are : "<<endl;
	dog1.displaydetails();
	cout<<"The lion details are : "<<endl;
	li1.disPlay();
	
	
	
}
