#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        map[v[i]]++;
	    }
	    
	    if(n==1 or n==2)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    int maxi=0;
	    for(auto it:map)
	    {
	        if(it.second>maxi)
	        maxi=it.second;
	    }
	    
	    if(map.size()==3 and n==3)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    if(maxi==1)
	    cout<<(n-2)<<endl;
	    else
	    cout<<(n-maxi)<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
