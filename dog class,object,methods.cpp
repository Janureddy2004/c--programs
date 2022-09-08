#include<iostream>
#include<string>
using namespace std;
class Dog{
	public:
		int age;
		string color,breed;
		string name;
		void displaydetails();
};
void Dog::displaydetails(){
	cout<<"Pet name : "<< name<<endl<<"Breed : "<<breed<<endl<<"Age : "<<age<<endl<<"Color : "<<color<<endl;
	
}
int main(){
	Dog d1;
	cout<<"Enter the name ,age, breed & color of the dog : ";
	cin>>d1.name;
	cin>>d1.age;
	cin>>d1.breed;
	cin>>d1.color;
	d1.displaydetails();
	
}

