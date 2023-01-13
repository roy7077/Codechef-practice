#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<pair<int,int>> v(n);
	    
	    //taking input of arrival time
	    for(int i=0;i<n;i++)
	    cin>>v[i].first;
	    
	    //taking input of leaving time
	    for(int i=0;i<n;i++)
	    cin>>v[i].second;
	    
	    //marking in ans array
	    vector<int> ans(1001,0);
	    for(int i=0;i<v.size();i++)
	    {
	        for(int j=v[i].first;j<v[i].second;j++)
	        ans[j]++;
	    }
	    
	    int maxi=0;
	    for(int i=0;i<ans.size();i++)
	    {
	        maxi=max(maxi,ans[i]);
	    }
	    
	    cout<<maxi<<endl;
	}
	return 0;
}

/* 
   time complexity - O(n)-> taking input
                     O(n)-> taking input
                     O(1000*n) -> marking in ans array
                     
    overall time complexity is O(1000*n)
    which can be n^2 if limit n instead of 1000
*/
