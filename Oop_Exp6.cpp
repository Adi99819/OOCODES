#include <iostream>
#include <algorithm>
using namespace std;

class person
{
	public:
		string name;
		string dob;
		long tel;
		
		void getdata()
		{
			cout<<"Enter the Name:-"<<endl;
		    cin>>name;
		    cout<<"Enter Date of Birth"<<endl;
		    cin>>dob;
		    cout<<"Enter Phone Number"<<endl;
		    cin>>tel; 
		}
	
		
		void displaydata()
		{
			cout<<"\nName"<<name<<endl;
		    cout<<"Date Of Birth"<<dob<<endl;
		    cout<<"Telephone"<<tel<<endl;
		}
		
};

bool compare(const person &a, const person &b)
{
	return a.name < b.name;
}


int main()
{
	int n,c;
	cout<<"Enter the total number of Record:-";
	cin>>n;
	string z[n];
	person p[n];
	for (int i=0;i<n;i++)
	{
		p[i].getdata();
	}
	
	cout<<"*****Sort Record*********";
	sort(p,p+n, compare);
	for(int i=0;i<n;i++)
	{
		p[i].displaydata();
	}
	cout<<endl;
	
	string nm;
	cout<<"Enter the name to be search";
	cin>>nm;
	for(int i=0;i<n;i++)
	{
		z[i]=p[i].name;
	}
	
	if(binary_search(z,z+n,nm))
	{
		cout<<"******Record Found*****";
		
	}
	else cout<<"******Record not found*****";
}
