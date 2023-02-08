#include <iostream>
#include <cstring>
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
	    
	    string s;
	    cin>>s;
	    
	    unordered_map<char,int> map;
	    for(auto it:s)
	    {
	        map[it]++;
	    }
	    
	    //int count=0;
	    bool flag=0;
	    for(auto it:map)
	    {
	        if(it.second>=2)
	        {
	            flag=1;
	            break;
	        }
	       // if(it.second&1)
	       // count++;
	    }
	    
	    if(flag)
	    {
	        cout<<n-2<<endl;
	        continue;
	    }
	    
	   // if(count==n)
	   // {
	   //     cout<<"-1"<<endl;
	   //     continue;
	   // }
	    cout<<-1<<endl;
	}
	return 0;
}

// time _Complexity - o(t*n)