#include <iostream>
#include <vector>
#include <map>
#include <cmath>
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
    	
    	sort(v.begin(),v.end());
    	
    	vector<ll> ans;
    	map<ll,ll> mp;
    	for(int i=0;i<n;i++)
    	{
    	    ll p=log2(v[i])+1;
    	    mp[p]++;
    	    ans.push_back(p);
    	}
    	
    	sort(ans.begin(),ans.end());
    	ll j=mp[ans[ans.size()-1]];
    	cout<<(j+1)/2<<endl;
	}
	return 0;
}
