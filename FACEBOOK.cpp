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
	    
	    vector<ll> l(n);
	    vector<ll> c(n);
	    
	    int maxi=0;
	    int ind=0;
	    
	    //taking input
	    for(int i=0;i<n;i++)
	    {
	        cin>>l[i];
	       // cin>>c[i];
	        
	        if(l[i]>maxi)
	        {
	            maxi=l[i];
	            ind=i;
	        }
	    }
	    for(int i=0;i<n;i++)
	    cin>>c[i];
	    
	    
	   // for(int i=0;i<n;i++)
	   // cout<<l[i]<<" ";
	    
	   // cout<<maxi<<" "<<ind<<endl;
	    //continue;
	    vector<ll> indi;
	    for(int i=0;i<n;i++)
	    {
	        if(l[i]==maxi)
	        indi.push_back(i);
	    }
	    
	    if(indi.size()==1)
	    {
	        cout<<ind+1<<endl;
	        continue;
	    }
	    
	    int max_comment=0;
	    int ans=0;
	    for(auto it:indi)
	    {
	        if(c[it]>max_comment)
	        {
	            max_comment=c[it];
	            ans=it;
	        }
	    }
	    
	    cout<<ans+1<<endl;
	}
	
	return 0;
}
