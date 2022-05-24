#include<iostream>
using namespace std;
class Prime
{
	int n;
	
	public:
		void setValue(int n)
		{
			this->n=n;
		}
		void prime()
		{
			int i,temp=1;
			for(i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					temp=0;
					break;
				}
			}
			if(temp==1)
			 cout<<n<<" is a prime number\n";
			else
			 cout<<n<<" is not a prime number\n"; 
		}
};
main()
{
	Prime p;
	int n;
	cout<<"Enter the number= ";
	cin>>n;
	p.setValue(n);
	p.prime();
}
