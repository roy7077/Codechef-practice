#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
    int n;
    cin>>n;
    
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    
    ll count=0;
    ll maxi=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>maxi)
        {
            count++;
            maxi=v[i];
        }
    }
    
    cout<<count<<endl;
	return 0;
}
