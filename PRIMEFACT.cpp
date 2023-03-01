#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

// int seive[100000001];
// void prime_seive()
// {
//     int n=100000000;
//     for(int i=0;i<=n;i++)
//     seive[i]=1;
    
//     seive[0]=0;
//     seive[1]=1;
    
//     for(int i=2;i*i<=n;i++)
//     {
//         if(seive[i]==1)
//         {
//             seive[i]=i;
//             for(int j=i*i;j<=n;j+=i)
//             {
//                 if(seive[j]==1)
//                 seive[j]=i;
//             }
//         }
//     }
    
//     for(int i=2;i<=n;i++)
//     {
//         if(seive[i]==1)
//         seive[i]==i;
//     }
// }

bool is_prime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    
    return 1;
}
int main() 
{
	int t;
	cin>>t;
	//prime_seive();
	while(t--)
	{
	    ll x,y;
	    cin>>x>>y;
	    
	    if(x>=y)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    if(is_prime(x))
	    {
	        ll req=y-(2*x);
	        if(req<0)
	        {
	            cout<<"1"<<endl;
	            continue;
	        }
	        ll ans=ceil(double(req)/2)+1;
	        cout<<ans<<endl;
	       // cout<<"prime"<<endl;
	       // cout<<"req->"<<req<<endl;
	    }
	    else if(x%2==0)
	    {
	        ll req=y-x;
	        if(req<0)
	        {
	            cout<<"1"<<endl;
	            continue;
	        }
	        ll ans=ceil(double(req)/2);
	        cout<<ans<<endl;
	    }
	    else
	    {
	        ll req=y-(x+3);
	        if(req<0)
	        {
	            cout<<"1"<<endl;
	            continue;
	        }
	        ll ans=ceil(double(req)/2)+1;
	        cout<<ans<<endl;
	    }
	}
	
	return 0;
}

// time _Complexity - O(t*sqrt(n))