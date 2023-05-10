#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end(),greater<int>());
	    int sum=0;
	    sum+=v[0];
	    for(int i=1;i<n;i++)
	    {
	        if(v[i]!=sum)
	        {
	            sum+=v[i];
	            break;
	        }
	    }
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
