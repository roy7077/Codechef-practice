#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    
	    int diff=abs(n-m);
	    if(n==m or diff%2==0 or diff%4==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	   // bool flag=0;
	   // bool turn=1;
	    
	   // if(n>m)
	   // turn=1;
	   // else
	   // turn=0;
	    
	   // while(1)
	   // {
	   //     //cout<<"n-> "<<n<<" m-> "<<m<<endl;
	   //     //base case
	        
	   //     if(n-m>=4)
	   //     {
	   //         flag=0;
	   //         break;
	   //     }
	        
	   //     if(n==m)
	   //     {
	   //         flag=1;
	   //         break;
	   //     }
	        
	   //     if(turn)
	   //     {
	   //         n--;
	   //         m++;
	   //     }
	   //     else
	   //     {
	   //         n+=3;
	   //         m--;
	   //     }
	        
	   //     turn=(!turn);
	   // }
	    
	   // if(flag)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	}
	return 0;
}
