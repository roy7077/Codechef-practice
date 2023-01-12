#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    
	    //map1 for parent's characters
	    //map2 for childrend's characters
	    unordered_map<char,int> map1;
	    unordered_map<char,int> map2;
	    
	    //storing the frequency of parent characters into map1
	    for(int i=0;i<a.length();i++)
	    map1[a[i]]++;
	    
	    for(int i=0;i<b.length();i++)
	    map1[b[i]]++;
	    
	    
	    int child;
	    cin>>child;
	    while(child--)
	    {
	        string temp;
	        cin>>temp;
	        
	        for(int i=0;i<temp.length();i++)
	        map2[temp[i]]++;
	    }
	    
	    //checking is child substring of a parent of not
	    bool flag=1;
	    for(auto it:map2)
	    {
	        if(map1[it.first]>=it.second)
	        continue;
	        else
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
