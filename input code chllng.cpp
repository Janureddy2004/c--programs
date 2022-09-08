#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	int y;
	float gdp;
	char sign;
	cout<<"Enter the country name : ";
	getline(cin,name);
	cout<<"Enter the sign : ";
	cin>>sign;
	cout<<"Enter the gdp : ";
	cin>>gdp;
	cout<<"ENter the year : ";
	cin>>y;
	cout<<"As economic reforms picked up the pace,"<<name<<"'s GDP grew five-fold to reach US"<<sign<<gdp<<"trillion in "<<y<<"(as per IMF estimates).";
	
}
