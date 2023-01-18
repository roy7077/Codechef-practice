#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    
	    int mini=INT_MIN;
	    int maxi=INT_MAX;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]>=0)
	        {
	            maxi=min(maxi,v[i]);
	        }else
	        {
	            mini=max(mini,v[i]);
	        }
	    }
	    
	    --maxi;
	    
	    if(-maxi>mini)
	    {
	        cout<<maxi<<endl;
	        continue;
	    }
	    
	    
	    while(1)
	    {
	        maxi--;
	        if(-maxi>mini)
	        {
	            break;
	        }
	    }
	    
	    cout<<maxi<<endl;
	}
	return 0;
}
