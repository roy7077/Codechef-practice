#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,c;
	    cin>>n>>c;
	    
	    n=n*c;
	    double digit=floor(log10(n) + 1);
	    
	    if(digit==5)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
