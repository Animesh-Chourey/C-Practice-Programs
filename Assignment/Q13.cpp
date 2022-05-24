#include<iostream>
using namespace std;
class Area
{
	protected:
		float r;
	public:	
		Area()
		{
			cout<<"Enter the value of r(radius)= ";
			cin>>r;
		}
		
};
class Circle : public Area
{
	float area;
	public:
		void calculate()
		{
			area=3.14*r*r;
		}
		void display()
		{
			cout<<"Area of circle: "<<area<<endl;
		}
};
main()
{
	Circle c;
	c.calculate();
	c.display();
}
