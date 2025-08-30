#include<iostream>
using namespace std;

int gcd(int x,int y)
{
	if(x%y==0)
	{
		return y;
	}
	else
	{
		return gcd(y,x%y);
	}
}
void recursive(int a,int b,int x,int y,int c)
{
	if(x== c or y== c)
	{
		exit(0);//recursion stop exit the pograme
	}
	 //empty
			 
	if (x==a)
	{
		x=0;
		cout<<"("<<x<<","<<y<<") >";
	}
	if(y==b)
	{
		y=0;
		cout<<"("<<x<<","<<y<<") >";
	}
	
	//filling
	if(x==0)
	{
		x=a;
		cout<<"("<<x<<","<<y<<") >";
		 		 
	}
	 
	//pouring	 
	y  = y+ x;
    x = 0;
	if (y  > b) {
        x = y  - b;
        y  = b;
    }	 	
		 
	  
	cout<<"("<<x<<","<<y<<") >";
	recursive( a, b, x, y,c);
}
	
int jugspuzzle(int a,int b,int c)
{
	
	if(c%gcd(a,b) != 0)
	{
		return -1;						
	}
	else
	{
		int x=0,y=0;
		cout<<"("<<x<<","<<y<<") >";
	    recursive( a, b, x, y,c);
	}
	
	
}
	
int main()
{
	int a,b,c;
	cout<<"input:";
	cin>>a>>b>>c;
	
	if( a>0 && b>0 && c>0 && a<40000 && b<40000 && c<40000 )
	{
		if(a<b)
		{
			if(c>0 && c<b)
			{
				cout<< jugspuzzle(a, b, c);
			}
			else
			{
				cout<<"target value should be below to larger jug size";
			}
		}
		else{
			cout<<"first enter the small jug and then larger jug and target";
		}
		
	}
	
	else
	{
		cout<<"smaller jug and larger jug and target are should larger than zero and smaller than 40000";
	}
}
