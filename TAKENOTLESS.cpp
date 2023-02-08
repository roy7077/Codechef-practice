#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
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
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end(),greater<ll>());
	    map<ll,ll> map;
	    
	    for(auto it:v)
	    map[it]++;
	    
	    bool flag=1;
	    for(auto it:map)
	    {
	        if(it.second&1)
	        {
	            flag=0;
	            break;
	        }
	        
	    }
	    
	   // bool flag=1;
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(i==0)
	   //     {
	   //         flag=(!flag);
	   //     }
	   //     else
	   //     {
	   //         if(v[i]<v[i-1])
	   //         {
	   //             break;
	   //         }
	   //         else
	   //         flag=(!flag);
	   //     }
	   // }
	    
	    if(flag)
	    cout<<"Zenyk"<<endl;
	    else
	    cout<<"Marichka"<<endl;
	   
	   //for(auto it:v)
	   //cout<<it<<" ";
	    
	}
	return 0;
}

// time _Complexity - O(t*nlogn)
