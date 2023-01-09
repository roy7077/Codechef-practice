#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    ll k;
	    cin>>k;
	    
	   
	    for(int i=0;i<=n-k;i++)
	    {
	        cout<<*max_element(arr+i, arr + k+i)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
