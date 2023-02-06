#include <iostream>
using namespace std;
#define ll long long
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c;
	    cin>>a>>b>>c;
	    
	    ll d=c/b;
	    ll rem=c%b;
	    
	    if(d<a)
	    cout<<rem*rem+(d*b*b)<<endl;
	    else
	    cout<<a*b*b<<endl;
	}
	return 0;
}

// time _Complexity - O(t)