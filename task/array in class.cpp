#include<iostream>
using namespace std;
class stutdroll
{
	public:
		int rollno[10];
		int i;
		void studroll()
		{
		    for(i=1;i<=10;i++)
		    {
		    	
		       cout<<"enter roll no of student "<<i;
		       cout<<" :";
			   cin>>rollno[i];
			   
			    
			}
			for(i=1;i<=10;i++)
			{
				cout<<"roll no of student "<<i;
				cout<<" is :"<<rollno[i];
				cout<<"\n";
			}
		}
};
int main()
{
	stutdroll st;
	st.studroll();
}

