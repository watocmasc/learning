#include <iostream>
#include <typeinfo>
using namespace std;
 int main()
 {
 	int x=4,y=4,x2,y2,f=0;
    char symbol='y'; 
    //cin>>symbol;
    while(1)
    {
    	cout<<"write position of King"<<endl;
    	cin>>x2>>y2;
    if(typeid(x2).name()!=typeid(2).name())
    break;
	
			
		
		 if((x-x2==1 || x-x2==-1) && y2==y)
    	{
    		x=x2;
		}
		else if((y-y2==1 || y-y2==-1) && x2==x)
    	{
    		y=y2;
		}
		else if ((x-x2==1) && (y-y2==1))
		{
			x=x2;
			y=y2;
		}
			else if ((x-x2==-1) && (y-y2==-1))
		{
			x=x2;
			y=y2;
		}
			else if ((x-x2==-1) && (y-y2==1))
		{
			x=x2;
			y=y2;
		}
			else if ((x-x2==1) && (y-y2==-1))
		{
			x=x2;
			y=y2;
		}
	
		else{
			cout<<"incorect"<<endl;
			 f++;
			if(f==3)
			{
			cout<<"do you want play again again?"<<endl;
			cin>>symbol;
			if(symbol!='y')
			{
			break;	
			}
			} 
			
			
		}
		
	}
 
 }