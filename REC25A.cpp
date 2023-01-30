#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        ll sum=(n*(n+1))/2;
        
        ll ans=ceil(sqrt((double)sum));
        cout<<ans<<endl;
    }
	
	return 0;
}
