// Operator Overloading -> /
#include<iostream>
using namespace std;
class Divide
{
	int a,b;
	
	public:
		Divide(){}
		Divide(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
		Divide operator/(Divide s)
		{	
			Divide temp;
			temp.a=a/s.a;
			temp.b=b/s.b;
			return temp;
		}
		
		void display()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};
main()
{
	Divide s1(100,200);
	Divide s2(10,20);
	Divide s3;
	s3=s1/s2;
	cout<<"C1: ";
	s1.display();
	cout<<"C2: ";
	s2.display();
	cout<<"C3: ";
	s3.display();
}
