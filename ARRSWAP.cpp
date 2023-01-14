#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<ll> v(2*n);
	    for(int i=0;i<(2*n);i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end());
	    int mini=1e9;
	    int i=0;
	    int j=n-1;
	    bool flag=0;
	    while(i<(2*n) and j<(2*n))
	    {
	        if(mini==0)
	        {
	            flag=1;
	            cout<<"0"<<endl;
	            break;
	        }
	        
	        if(v[j]-v[i]<mini)
	        {
	            mini=v[j]-v[i];
	        }
	        i++;
	        j++;
	    }
	    
	    if(flag)
	    continue;
	    
	    cout<<mini<<endl;
	}
	return 0;
}



// unordered_map<int,int> map;
// 	    vector<int> v(2*n);
// 	    for(int i=0;i<(2*n);i++)
// 	    {
// 	        cin>>v[i];
// 	        map[v[i]]++;
// 	    }
	    
// 	    bool flag=0;
// 	    for(auto it:map)
// 	    {
// 	        if(it.second>=n)
// 	        {
// 	            cout<<"0"<<endl;
// 	            flag=1;
// 	            break;
// 	        }
// 	    }
// 	    if(flag)
// 	    continue;
	    
// 	    sort(v.begin(),v.end());
// 	    int a=v[((2*n)/2)-1]-v[0];
// 	    int b=v[(2*n)-1]-v[(2*n)/2];
// 	    cout<<min({a,b})<<endl;