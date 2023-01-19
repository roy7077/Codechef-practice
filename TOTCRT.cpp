#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cstring>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    unordered_map<string,int> map;
	    for(int i=0;i<3;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            int sub;
	            string code;
	            cin>>code>>sub;
	            
	            map[code]+=sub;
	        }
	    }
	    
	    vector<int> temp;
	    for(auto it:map)
	    {
	        temp.push_back(it.second);
	    }
	    
	    sort(temp.begin(),temp.end());
	    for(int i=0;i<temp.size();i++)
	    cout<<temp[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
