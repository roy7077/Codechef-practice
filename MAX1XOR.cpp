#include <iostream>
#include <cstring>
#include <cmath>
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
	    
	    string str1="";
	    string str2="";

	    //case when 1st when 1st index is 0
	    str1+='0';
	    for(int i=0;i<n-1;i++)
	    {
	        if(str1[i]==str[i])
	        str1+='0';
	        else
	        str1+='1';
	    }
	    
	    //case when 1st index is 1
	    str2+='1';
	    for(int i=0;i<n-1;i++)
	    {
	        if(str2[i]==str[i])
	        str2+='0';
	        else
	        str2+='1';
	    }
	    
	    int cnt1=0;
	    int cnt2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(str1[i]=='1')
	        cnt1++;
	        
	        if(str2[i]=='1')
	        cnt2++;
	    }
	    
	    
	    cout<<max(cnt1,cnt2)<<endl;
	   // if(cnt1>=cnt2)
	   // cout<<str1<<endl;
	   // else
	   // cout<<str2<<endl;
	}
	return 0;
}
