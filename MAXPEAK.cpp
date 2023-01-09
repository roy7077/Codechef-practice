#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
       int n;
       cin>>n;
       vector<int> v(n);
	   for(int i=0;i<n;i++)
	   cin>>v[i];
	   
	   vector<int> inc(n,1),dec(n,1);
	   
	   //increase
	   for(int i=1;i<n;i++)
	   {
	       if(v[i]>v[i-1])
	       inc[i]+=inc[i-1];
	   }
	   
	   //decreasing 
	   for(int i=n-1;i>0;i--)
	   {
	       if(v[i-1]>v[i])
	       dec[i-1]+=dec[i];
	   }
	   
	   int length=INT_MIN;
	   //finding max height
	   for(int i=0;i<n;i++)
	   {
	       length=max(length,inc[i]+dec[i]-1);
	   }
	   
	   cout<<length<<endl;
	}
	return 0;
}
