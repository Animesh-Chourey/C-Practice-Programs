#include<iostream>
using namespace std;
class A
{
    public:
        void funcA()
        {
        	cout<<"Class A Function\n";
		}
};
class B : virtual public A
{
    public:
        void funcB()
        {
        	cout<<"Class B Function\n";
		}
};
class C : virtual public A
{
    public:
        void funcC()
        {
        	cout<<"Class C Function\n";
		}
};
class D : public B, public C
{
    public:
        void funcD()
        {
        	cout<<"Class D Function\n";
		}
};
main()
{
	D obj;
	obj.funcA();        
    //obj.a = 100;
    obj.funcB();
	obj.funcC();
	obj.funcD();

}
