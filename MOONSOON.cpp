#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m,h;
	    cin>>n>>m>>h;
	    
	    vector<int> cars(n);
	    vector<int> power(m);
	    
	    for(int i=0;i<n;i++)
	    cin>>cars[i];
	    
	    for(int j=0;j<m;j++)
	    cin>>power[j];
	    
	    sort(cars.begin(),cars.end(),greater<int>());
	    sort(power.begin(),power.end(),greater<int>());
	    
	    ll ans=0;
	    for(int i=0;i<min(n,m);i++)
	    {
	        ll p=h*power[i];
	        if(p<=cars[i])
	        ans+=p;
	        else
	        ans+=cars[i];
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
