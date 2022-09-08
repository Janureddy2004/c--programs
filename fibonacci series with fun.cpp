#include<iostream>
#include<string>
using namespace std;
void fib(int);
int main(){
	int a;
	cout<<"Enter a value : ";
	cin>>a;
	fib(a);
}
void fib(int a){
	int f1 = 0,f2=1,sum;
	sum = f1+f2;
	cout<<f1<<"\t"<<f2<<"\t";
	for(int i = 2;i<a;i++){
		cout<<sum<<"\t";
		f1=f2;
		f2=sum;
		sum  = f1+f2;
	}
}
