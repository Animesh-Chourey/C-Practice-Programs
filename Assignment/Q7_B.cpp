// Operator Overloading -> -
#include<iostream>
using namespace std;
class Minus
{
	int a,b;
	
	public:
		Minus(){}
		Minus(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
		Minus operator-(Minus s)
		{
			Minus temp;
			temp.a=a-s.a;
			temp.b=b-s.b;
			return temp;
		}
		
		void display()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};
main()
{
	Minus s1(25,45);
	Minus s2(10,20);
	Minus s3;
	s3=s1-s2;
	cout<<"C1: ";
	s1.display();
	cout<<"C2: ";
	s2.display();
	cout<<"C3: ";
	s3.display();
}
