#include<iostream>
using namespace std;
class interest
{
	public:
		interest(int principal,int year,float rate)
		{
			int ans;
			ans = principal * rate * year / 100;
			cout<<"simple interest is :"<<ans;
		}
		
};
int main()
{
   int principal;
   int year;
   float rate;
   cout<<"Enter Value Of Principal :";
   cin>>principal;
   cout<<"Enter Value Number of Years :";
   cin>>year;
   cout<<"Enter Rate Of Interest :";
   cin>>rate;
   
   interest i1(principal,year,rate);
}

