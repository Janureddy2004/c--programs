#include<iostream>
#include<string>
using namespace std;
class Circle{
	private://private
		int radius;
	public://public
		void setradius(int radius){
			this->radius = radius;
		}
		double getarea(){
			return 3.14*radius*radius;
		} 
};
int main(){
	Circle c;
	c.setradius(7);
	double area = c.getarea();
	cout<<"The area of the circle is : "<<area<<" sq units."<<endl;
}
