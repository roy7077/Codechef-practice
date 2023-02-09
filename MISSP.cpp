#include <iostream>
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
	    
	    int count=0;
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        
	        map[a]++;
	    }
	    
	    for(auto it:map)
	    {
	        if(it.second&1)
	        {
	            cout<<it.first<<endl;
	        }
	    }
	}
	return 0;
}

// time _Complexity - O(t*n)
