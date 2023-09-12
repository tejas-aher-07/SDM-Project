#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		void setter(int r,int i)
		{
			real=r;
			img=i;	
//			getter();
		}
		
		void setReal(int r)
		{
			real=r;
		}
		
		void setImg(int img)
		{
			this->img = img;
		}
		
		void getter()
		{
			cout<<"Complex Number is : "<<real<<"+"<<img<<+"i"<<endl;
		}
};
int main()
{
	Complex c1;
	c1.setter(10,2);
	c1.getter();
	c1.setReal(20);
	c1.getter();
	c1.setImg(15);
	c1.getter();	
}
