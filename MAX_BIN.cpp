#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,k;
	    cin>>n>>k;
	    
	    string str;
	    cin>>str;
	    
	    if(k==0)
	    {
	        cout<<str<<endl;
	        continue;
	    }
	    
	    if(str[0]=='0')
	    {
	        str[0]='1';
	        k--;
	    }
	    
	    while(k--)
	    {
	        str+='0';
	    }
	    
	    cout<<str<<endl;
	}
	return 0;
}
