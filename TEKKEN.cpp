#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	   // if(b<c)
	   // {
	   //     b=0;
	   //     c-=b;
	   // }
	   // else
	   // {
	   //     c=0;
	   //     b-=c;
	   // }
	    
	   // int k=max(b,c);
	   // int m=a-min(a,k);
	   // int n=k-min(a,k);
	    
	   // if(m>0)
	   // cout<<"Yes"<<endl;
	   // else
	   // cout<<"No"<<endl;
	   
	   if(a>abs(c-b))
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
