#include <iostream>
#include <map>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	map<string,int> mp;
	vector<string> v(n);
	
	for(int i=0;i<n;i++)
	cin>>v[i];
	  
	for(int i=v.size()-1;i>=0;i--)
	{
	    if(mp.count(v[i])==0)
	    {
	        string temp=v[i];
    	    string ans="";
    	    ans+=temp[temp.size()-2];
    	    ans+=temp[temp.size()-1];
    	    mp[v[i]]++;
    	    cout<<ans;
	    }
	}

	cout<<endl;
	return 0;
}
