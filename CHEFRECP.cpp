#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	
	// t-> number of test cases
	int t;
	cin>>t;
	while(t--)
	{
	    //n-> size of an array
	    int n;
	    cin>>n;
	    
	    //taking input and storing frquency of an elements
	    vector<int> v(n);
	    unordered_map<int,int> map;
	    int curr=0;
	    bool flag=1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(curr==v[i])
	        map[v[i]]++;
	        else if(map[v[i]]==0)
	        {
	            map[v[i]]++;
	            curr=v[i];
	        }else
	        {
	            flag=0;
	        }
	        
	    }
	    
	    if(!flag)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    
	    //storing the frquency in temp vector
	    vector<int> temp;
	    for(auto it:map)
	    {
	      temp.push_back(it.second);  
	    }
	    
	    //sorting an array
	    sort(temp.begin(),temp.end());
	    for(int i=0;i<temp.size()-1;i++)
	    {
	        if(temp[i]==temp[i+1])
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(!flag)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	    
	}
	return 0;
}
