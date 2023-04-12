#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n+1);
	    int count=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>v[i];
	        if(i==1)
	        {
	            double sr=(((double)v[i])/1)*100;
	            if(sr==100)
	            count++;
	            continue;
	        }
	        
	        v[i]+=v[i-1];
	        double sr=(((double)v[i])/i)*100;
            if(sr==100)
            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
