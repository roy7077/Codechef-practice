#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end(),greater<int>());
	    cout<<v[x-1]-1<<endl;
	}
	return 0;
}

// time _Complexity - O(t*nlogn)