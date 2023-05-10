#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> b(n);
	    vector<ll> a(n);
	    vector<ll> c(n);
	    int cnt=1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        a[i]=cnt;
	        c[i]=a[i]*b[i];
	        cnt*=2;
	    }
	    
	    
	    ll x=0;
	    ll y=0;
	    
	    for(int i=n-1;i>=0;i--)
	    {
	        if(b[i]==1)
	        x+=i+1;
	        else
	        y+=i+1;
	    }
	    
	    cout<<abs(x-y)<<endl;
	   // vector<int> d(n+1);
	   // d[0]=c[0];
	   // for(int i=1;i<n;i++)
	   // d[i]=d[i-1]+c[i];
	    
	   // int neg=0;
	   // int pos=0;
	    
	   // int i=0;
	   // int j=n-1;
	    
	   // while(i<=j)
	   // {
	   //     if(d[i]<0)
	   //     neg++;
	   //     else
	   //     pos++;
	        
	   //     if(d[j]<0)
	   //     neg++;
	   //     else
	   //     pos++;
	        
	   //     if(d[j]-d[i]<0)
	   //     neg++;
	   //     else
	   //     pos++;
	        
	   //     i++;
	   //     j--;
	   // }
	    
	   // for(int i=1;i<n;i++)
	   // {
	   //     if(c[i]<0)
	   //     neg++;
	   //     else
	   //     pos++;
	   // }
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(d[i]>0)
	   //     pos++;
	   //     else
	   //     neg++;
	   // }
	    
	   // for(int i=0;i<n;i++)
	   // {
	   //     for(int j=i+1;j<n;j++)
	   //     {
	   //         if(d[j]-d[i]<0)
	   //         neg++;
	   //         else
	   //         pos++;
	   //     }
	   // }
	   // for(int i=0;i<n;i++)
	   // {
	   //     int a=d[i];
	   //     int b=d[n-1]-d[i];
	        
	   //     if(a<0)
	   //     neg++;
	   //     else
	   //     pos++;
	        
	   //     if(b<0)
	   //     neg++;
	   //     else
	   //     pos++;
	   // }
	   // int neg=0;
	   // int pos=0;
	    
	   // for(int i=0;i<n;i++)
	   // {
	   //     int sum=0;
	   //     for(int j=i;j<n;j++)
	   //     {
	   //         sum+=c[j];
	   //         if(sum<0)
	   //         neg++;
	   //         else
	   //         pos++;
	   //     }
	   // }
	    
	   // cout<<"pos-> "<<pos<<endl;
	   // cout<<"neg-> "<<neg<<endl;
	   // cout<<abs(pos-neg)<<endl;
	    
	}
	return 0;
}
