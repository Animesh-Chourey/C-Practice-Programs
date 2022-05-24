// Operator Overloading -> *
#include<iostream>
using namespace std;
class Multiply
{
	int a,b;
	
	public:
		Multiply(){}
		Multiply(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
		Multiply operator*(Multiply s)
		{
			Multiply temp;
			temp.a=a*s.a;
			temp.b=b*s.b;
			return temp;
		}
		
		void display()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};
main()
{
	Multiply s1(10,20);
	Multiply s2(100,200);
	Multiply s3;
	s3=s1*s2;
	cout<<"C1: ";
	s1.display();
	cout<<"C2: ";
	s2.display();
	cout<<"C3: ";
	s3.display();
}
