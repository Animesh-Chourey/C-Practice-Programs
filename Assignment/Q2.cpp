#include<iostream>
using namespace std;
class Student
{
	char name[50];
	int rno;
	float marks[5],stream;
	
	public:
		Student()
		{
			int i;
			cout<<"Enter name of the student: ";
			gets(name);
			cout<<"Enter Roll No: ";
			cin>>rno;
			cout<<"Enter marks: ";
			for(i=0;i<5;i++)
			   cin>>marks[i];
		}
		
		void average()
		{
			int i,total;
			for(i=0;i<5;i++)
			   total=total+marks[i];
			stream=(total/5);
		}
		void assignStream()
		{
			if(stream>90)
			  cout<<"Assgned stream = Computer";
			if(stream>80 && stream<90)
			  cout<<"Assgned stream = Electronics";  
			if(stream>75 && stream<80)
			  cout<<"Assgned stream = Mechanical";
			if(stream>70 && stream<75)
			  cout<<"Assgned stream = Chemical";
			if(stream>60 && stream<70)
			  cout<<"Assgned stream = Civil";   
		}
};
main()
{
	Student s;
	s.average();
	s.assignStream();
}
