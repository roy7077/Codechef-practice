#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int cnt=0;
	    if(n==1 or n==2)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	   // for(int i=1;i<=n;i++)
	   // {
	   //     if(i==1)
	   //     continue;
	   //     else if(i==2)
	   //     cnt++;
	   //     else if(i==n)
	   //     cnt++;
	   //     else if(i%2==0)
	   //     cnt+=2;
	   //     else
	   //     cnt++;
	   // }
	   
	   cnt++;
	   cnt+=n-2;
	   if((n-2)&1)
	   cnt+=((n-2)/2);
	   else
	   cnt+=((n-2)/2)-1;
	   
	    cout<<cnt<<endl;
	}
	return 0;
}
