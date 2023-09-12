#include<iostream>

using namespace std;

//if(d)
//	for(int i=0;i<2;i++)
//	


class Date1
{
	int dd,mm,yyyy;
	
	public:
		void setDate(int date)
		{
			dd=date;
		}
		
		void setMonth(int month)
		{
			mm=month;
		}
		
		void setYear(int year)
		{
			yyyy=year;
		}
		
		void setter(int date,int month,int year)
		{
		  	dd=date;
		 	mm=month;
		 	yyyy=year;
		}
		
		void getter()
		{
			cout<<"Date is : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
		}
};
int main()
{
	Date1 d1;
	d1.setter(03,12,2001);
	d1.getter();
	
	char date[11];
	cout<<"Enter the date [dd/mm/yyyy] : ";
	cin>>date;
	
	
	cout<<"After Modification : ";
	d1.setDate(date[]);
	d1.setMonth(mm);
	d1.setYear(yyyy);
	d1.getter();
}
