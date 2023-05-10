#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    
	    vector<int> v(4);
	    int sum=0;
	    for(int i=0;i<4;i++)
	    {
	        cin>>v[i];
	        sum+=v[i];
	    }
	    
	    bool flag=0;
	    for(int i=0;i<4;i++)
	    {
	        if(v[i]>sum-v[i])
	        {
	            flag=1;
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
