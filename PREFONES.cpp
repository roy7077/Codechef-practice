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
    	
    	string str;
    	cin>>str;
    	
    	
    	//1st part
    	bool flag=0;
    	int cnt=0;
    	int i=0;
    	if(str[0]=='1')
    	{
    	    flag=1;
    	    for(i ;i<str.length();i++)
    	    {
    	        if(str[i]=='1')
    	        cnt++;
    	        else
    	        break;
    	    }
    	}
    	
    	
    	
    	int count=0;
    	int maxi2=0;
    	if(flag)
    	{
    	    for(i;i<str.length();i++)
    	    {
    	        if(str[i]=='1')
    	        {
    	            count++;
    	            maxi2=max(count,maxi2);
    	        }else
    	        {
    	            maxi2=max(count,maxi2);
    	            count=0;
    	        }
    	    }
    	}
    	
    	
    	if(flag)
    	{
    	    cout<<cnt+maxi2<<endl;
    	    continue;
    	}
    	
    	int maxi=0;
    	int count2=0;
	    for(int i=0;i<str.length();i++)
	    {
	        if(str[i]=='1')
	        {
	            count2++;
	            maxi=max(count2,maxi);
	        }else
	        {
	            maxi=max(count2,maxi);
	            count2=0;
	        }
	   }
    	
    	
    	cout<<maxi<<endl;
    	
    // 	if(count2!=0)
    // 	maxi=max(maxi,count2);
    	
    	
    	
    	
    // 	int cnt=0;
    // 	for(int i=0;i<str.length();i++)
    // 	{
    // 	    if(str[i]=='1')
    // 	    cnt++;
    // 	    else
    // 	    {
    // 	        if(cnt!=0)
    // 	        {
    // 	            map[cnt]++;
    // 	        }
    	        
    // 	        cnt=0;
    // 	    }
    // 	}
    // 	if(cnt!=0)
    // 	map[cnt]++;
    	
    // 	//if size is 0
    // 	if(map.size()==0)
    // 	{
    // 	    cout<<"0"<<endl;
    // 	    continue;
    // 	}
    	
    // 	//first and second
    // 	int first=0;
    // 	int second=0;
    	
    // 	for(auto it:map)
    // 	{
    // 	    if(it.first>=first)
    // 	    {
    // 	        if(it.second>=2)
    // 	        {
    // 	            first=it.first;
    // 	            second=it.first;
    // 	        }else
    // 	        first=it.first;
    // 	    }
    // 	    else if(it.first>=second)
    // 	    second=it.first;
    // 	}
    	
    // 	cout<<first+second<<endl;
	}
	
	
	return 0;
}
