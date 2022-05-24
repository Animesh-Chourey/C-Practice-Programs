#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A(){};
		A(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void getData()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
		friend A operator+(A obj1,A obj2);
};
A operator +(A obj1,A obj2)
{
	return A(obj1.a+obj2.a,obj1.b+obj2.b);
}
main()
{
	A obj1(10,20),obj2(100,200),obj3;
	obj3=obj1+obj2;
	obj3.getData();
}
