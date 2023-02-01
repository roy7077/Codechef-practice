#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    double a=(double)(400)/x;
	    double b=(double)(400)/y;
	    double c=(double)(400)/z;
	    
	    if(a>b and a>c)
	    cout<<"ALICE"<<endl;
	    else if(b>a and b>c)
	    cout<<"BOB"<<endl;
	    else
	    cout<<"CHARLIE"<<endl;
	}
	return 0;
}
