#include<iostream>
#include<string>
using namespace std;
int prime(int);
int main(){
	int a,b;
	cout<<"Enter a number : \n";
	cin>>a;
	b = prime(a);
	if(b == 2){
		cout<<"The given number is a prime number :)\n";
	}
	else{
		cout<<"The given number is not a prime number :(";
	}
}
int  prime(int a){
	int i,c=0;
	for(i=1;i<=a;i++){
		if(a%i==0){
			c++;
		}
	}
	return c;
}
