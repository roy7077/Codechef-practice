#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> v(n);
	    int carry=0;
	    //bool ispossible=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]==1)
	        continue;
	        else
	        {
	            if(carry!=0)
	            {
	                carry--;
	            }else
	            carry++;
	        }
	    }
	    
	    if(carry==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
