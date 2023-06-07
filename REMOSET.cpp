#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int mod=1e9+7;
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int temp=n;
	    int cnt=0;
	    while(temp--)
	    {
	        int input;
	        cin>>input;
	        if(input%2==0)
	        cnt++;
	    }
	    
	 
	    ll k=1;
	    int v=cnt;
	    while(v--)
	    {
	        k*=2;
	        k%=1000000007;
	    }
	    
	    ll u=k;
	    if(cnt==n)
	    u--;
	    
	    cout<<u<<endl;
	    
	}
	return 0;
}
