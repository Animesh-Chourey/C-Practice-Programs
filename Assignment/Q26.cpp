#include<iostream>
using namespace std;
class Fibonacci
{
	int n;
	
	public:
		void setValue(int n)
		{
			this->n=n;
		}
		
		void fibonacci()
		{
			int i,a=-1,b=1,c;
			for(i=1;i<=n;i++)
			{
				c=a+b;
				cout<<c<<"\t";
				a=b;
				b=c;
			}
			cout<<endl;
		}
};
main()
{
	Fibonacci f;
	int n;
	cout<<"Enter the limit of the series: ";
	cin>>n;
	f.setValue(n);
	f.fibonacci();
}
