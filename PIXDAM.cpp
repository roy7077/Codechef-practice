#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll h,w,x,y,k;
	    cin>>h>>w>>x>>y>>k;
	    
	    double dis=sqrt(pow(w-x,2)+pow(h-y,2));
	    if(dis<k)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
