#include <iostream>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    
	    ll tc=(n*(n+1)*m*(m+1))/4;
	    ll tb=n*m;
	    cout<<tc-tb<<endl;
	}
	return 0;
}
