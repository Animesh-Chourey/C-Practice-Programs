#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
	  void setValue(int a,int b)
	   {
	    	this->a=a;
		    this->b=b;
	   }
	   friend void friendfunction(A obj);
};
void friendfunction(A obj)
{
	cout<<"A= "<<obj.a<<endl;
	cout<<"B= "<<obj.b<<endl;
}
main()
{
	A obj;
	obj.setValue(1,2);
	friendfunction(obj);
}
