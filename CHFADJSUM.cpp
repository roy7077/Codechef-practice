#include <iostream>
#include <vector>
#include <map>
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
	    vector<int> b(n);
	    map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        mp[v[i]]++;
	    }
	    
	    b=v;
	    sort(b.begin(),b.end());
	    
	    if(mp.size()==1 or n<=2)
	    cout<<"NO"<<endl;
	    else if(mp[b[n-1]]==1 and mp.size()==2)
	    cout<<"NO"<<endl;
	    else if(mp[b[n-1]]>(n+1)/2)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	   // sort(v.begin(),v.end(),greater<int>());
	   // int z=b[n-1]+b[n-2];
	    
	    
	   // bool flag=1;
	   // for(int i=0;i<(n/2);i++)
	   // {
	   //     if(b[i]+b[n-i+1]>=z)
	   //     {
	   //         flag=0;
	   //         break;
	   //     }
	   // }
	   // if(n==3)
	   // {
	   //     swap(v[1],v[2]);
	   //     if((v[0]+v[1]>=z) or (v[1]+v[2]>=z))
	   //     cout<<"NO"<<endl;
	   //     else
	   //     cout<<"YES"<<endl;
	        
	   //     continue;
	   // }
	   // vector<int> temp(n);
	   // int j=n-1;
	   // int i=0;
	   // int k=0;
	   // while(i<=j)
	   // {
	   //     if(i==j)
	   //     {
	   //         temp[k]=b[i];
	   //         k++;
	   //         i++;
	   //         break;
	   //     }
	   //     temp[k++]=b[i];
	   //     temp[k++]=b[j];
	   //     i++;
	   //     j--;
	   // }
	    
	   // bool flag=1;
	   // //swap(temp[1],temp[n-1]);
	    
	   // for(int i=0;i<n-1;i++)
	   // {
	   //     if(temp[i]+temp[i+1]>=z)
	   //     {
	   //         flag=0;
	   //         break;
	   //     }
	   // }
	    
	   // for(auto it:temp)
	   // cout<<it<<" ";
	   // cout<<endl;
	    
	   // if(flag)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	    
	}
	return 0;
}
