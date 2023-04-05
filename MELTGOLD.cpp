#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int req=x-y;
	    if(req<=0)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    int tm=0;
	    for(int i=1; ;i++)
	    {
	        if(req<=0)
	        break;
	        
	        req-=i;
	        tm++;
	    }
	    
	    cout<<tm<<endl;
	}
	return 0;
}
