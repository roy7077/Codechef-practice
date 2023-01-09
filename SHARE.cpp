#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long

int main() {
	
	ll n,m,c;
	cin>>n>>m>>c;
	
	vector<int> a(n),b(m);
	unordered_map<ll,ll> map;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<m;i++)
	{
	    cin>>b[i];
	    map[b[i]]++;
	}
	
	for(int i=0;i<n;i++)
	{
	    if(map[c-a[i]]>0)
	    {
	        cout<<"YES"<<endl;
	        return 0;
	    }
	}
	
	cout<<"NO"<<endl;
	return 0;
}
