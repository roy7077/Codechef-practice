#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1,s2;
	    cin>>s1;
	    cin>>s2;
	    int arr[n+1];
	    for(int i=0;i<n+1;i++){
	        cin>>arr[i];
	    }
	    int count=0;
	    for(int j=0;j<n;j++){
	        if(s1[j]==s2[j]){
	            count++;
	        }
	    }
	    int maxa=0;
	    if(count==n){
	        cout<<arr[count]<<endl;
	    }
	    else{
	        for(int i=0;i<=count;i++){
	            maxa=max(maxa,arr[i]);
	        }
	        cout<<maxa<<endl;
	    }
	}
	return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_map>
// using namespace std;
// #define ll long long

// int main() 
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    ll n;
// 	    cin>>n;
	    
// 	    string q,a;
// 	    cin>>q>>a;
	    
// 	    vector<ll> v(n+1);
	    
// 	    int count=0;
// 	    int pre=-1e9;
// 	    for(int i=0;i<=n;i++)
// 	    {
// 	        cin>>v[i];
// 	        if(v[i]==pre)
// 	        {
// 	            count++;
// 	            pre=v[i];
// 	        }
// 	        else
// 	        {
// 	            count=1;
// 	            pre=v[i];
// 	        }
// 	    }
	    
// 	    bool equal=0;
// 	    bool dec=1;
//     	bool inc=1;
    	
// 	    if(count==(n+1))
// 	    equal=1;
	    
// 	    if(!equal)
// 	    {
    	    
//     	    //checking for increasing
//     	    for(int i=0;i<n;i++)
//     	    {
//     	        if(v[i+1]<v[i])
//     	        {
//     	            inc=0;
//     	            break;
//     	        }
//     	    }
    	    
//     	   //checking for decreasing
//     	    for(int i=0;i<n;i++)
//     	    {
//     	        if(v[i+1]>v[i])
//     	        {
//     	            dec=0;
//     	            break;
//     	        }
//     	    }
// 	    }
	    
// 	    unordered_map<int,int> map;
// 	    int cnt=0;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(q[i]==a[i])
// 	        cnt++;
// 	        else
// 	        {
// 	           if(cnt!=0)
// 	           {
// 	               map[cnt]++;
// 	           }
// 	           else
// 	           {
// 	               if(map.count(0)==0)
// 	               map[0]=0;
// 	           }
// 	           cnt=0;
// 	        }
// 	   }
// 	    if(cnt!=0)
// 	    map[cnt]++;
	    
// 	    int mini=1e9;
// 	    int maxi=-1e9;
	    
	    
// 	    for(auto it:map)
// 	    {
// 	        //cout<<it.second<<" ";
// 	        mini=min(mini,it.first);
// 	        maxi=max(maxi,it.first);
// 	    }
	    
// 	   // cout<<endl;
// 	   // cout<<"mini -> "<<mini<<endl;
// 	   // cout<<"maxi -> "<<maxi<<endl;
// 	    if(equal or dec)
// 	    cout<<v[mini]<<endl;
// 	    else
// 	    cout<<v[maxi]<<endl;
	    
// 	}
// 	return 0;
// }
