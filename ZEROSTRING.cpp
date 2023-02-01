#include <iostream>
#include <cstring>
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
	    
	    int cnt=0;
	    for(auto it:s)
	    {
	        if(it=='1')
	        cnt++;
	    }
	    
	    if(cnt==n)
	    cout<<"1"<<endl;
	    else if(cnt>(n-cnt))
	    {
	        cout<<1+(n-cnt)<<endl;
	    }
	    else
	    {
	        cout<<cnt<<endl;
	    }
	}
	return 0;
}
