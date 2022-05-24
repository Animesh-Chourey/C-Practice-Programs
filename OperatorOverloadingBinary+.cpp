#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A(){}
		A(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void getData()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
		A operator +(A obj)
		{
			A temp;
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			return temp;
		}
};
main()
{
	A obj1(10,20);
	A obj2(100,200);
	A obj3;
	obj3=obj1+obj2;
	obj3.getData();
}
