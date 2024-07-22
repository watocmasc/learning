#include <iostream>
#include <typeinfo>

using namespace std;

 int main()
 {
 	
 	int x = 4, y = 4, x2, y2, f = 0;
    char symbol='y'; 
    
    // cin>>symbol;
    
    while(1)
    {
    	cout << "write position of King" << endl;
    	cin >> x2 >> y2;
		
		// проверка на верт. и гориз. ход
		if (
			( (y-y2==1 || y-y2==-1) && x2==x ) ||
			( (x-x2==1 || x-x2==-1) && y2==y )
		   )
    	{
    		x = x2;
    		y = y2;
		}
		// проверка на диагональный ход
		else if ( (x-x2 == 1 || x-x2 == -1) && (y-y2==1 || y-y2==-1) )
		{
			x=x2;
			y=y2;
		}
		else{
			// если произошла ошибка, более 3 раз
			cout << "incorect" << endl;
			f++;
			if(f==3)
			{
				cout << "do you want play again again?" << endl;
				
				cin >> symbol;
				
				// вопрос о продолжении игры
				if( symbol != 'y' )
				{
						break;	
				}
			} 
			
			
		}
		
	}
 
 }