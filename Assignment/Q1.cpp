#include<iostream>
using namespace std;
class Test
{
	private:
		float a,b;
	public:
		int c,d;
		
	public:	
		void setData()
		{
			cout<<"Enter the valus of a and b: ";
			cin>>a>>b;
			cout<<"Enter the valus of c and d: ";
			cin>>c>>d;
		}
		
		void getData()
		{
			cout<<"A= "<<a<<"\tB= "<<b<<endl;
			cout<<"C= "<<c<<"\tD= "<<d<<endl; 
		}
};
main()
{
	Test t;
	t.setData();
	t.getData();
}
