/*       PROBLEM STATEMENT
--Imagine a publishing company which does marketing for book and audiocassette versions.
Create a class publication that stores the title (a string) and price (type float) of a publication.
From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data and displays the data members. If an exception is caught, replace all the data member values with
zero values.
*/


#include <iostream>
#include<string.h>

using namespace std;

class Publication
{
	protected:
		string title;
		float price;
		public:
			void Set_zero(void)
			{
				title="0";
				price= 0.0;
				
			}
			
			void getdata(void)
			{
				cout<<"\n Enter the name";
				cin>>title;
				cout<<"Enter the price";
				cin>>price;
				
			}
			
			void putdata(void)
			{
				cout<<"\nName"<<title;
				cout<<"Price"<<price;
				
			}
};

class Book:public Publication
{
	int page_count;
	public:
		void Set_Zero(void)
		{
			page_count=0;
			Publication::Set_zero();
		}
		void getdata(void)
		{
			Publication::getdata();
			cout<<"Enter the number of pages";
			cin>>page_count;
			
			try
			{
				if(price<0)
				throw(0);
				
				if(page_count<0)
				throw(0.0);
				
			}
			catch(double x)
			{
				cout<<"\nException Page count cannot hold a negative value";
				cout<<"\n Turning all values to zero";
				Set_Zero();
				
			}
			catch(int x)
			{
				cout<<"\n Exception Price cannot hold a negative value";
				cout<<"\n Turning all values to zero";
				Set_Zero();
				
			}
		}
		
		void putdata(void)
		{
			Publication::putdata();
			cout<<"\t Number of pages"<<page_count;
			cout<<endl<<endl;
			
		}
};

class Tape: public Publication
{
	float playing_time;
	public:
		void Set_Zero(void)
		{
			playing_time=0.0;
			Publication::Set_zero();
		}
		
		void getdata(void)
		{
			Publication::getdata();
			cout<<"\t Enter the playing time";
			cin>>playing_time;
			
			try
			{
				if(price<0)
				throw 0;
				
				if(playing_time<0)
				throw 0.0;
				
				
			}
			catch(int x)
			{
				cout<<"Exception Price cannot be negative";
				cout<<"Turning all values to zero";
				Set_Zero();
			}
			
			catch(double x)
			{
				cout<<"Exception Price cannot be negative";
				cout<<"Turning all values to zero";
				Set_Zero();
			}
		}
		void putdata(void)
		{
			Publication::putdata();
			cout<<"\t Playing time"<<playing_time;
			cout<<endl<<endl;
			
		}
};

int main()
{
	Tape T;
	Book B;
	cout<<"\n\t Enter the data of Tape :\n";
	T.getdata();
	T.putdata();
	cout<<"\n\t Enter the data of Book:\n";
	B.getdata();
	B.putdata();
	
	return 0;
	
}
