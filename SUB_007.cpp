#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<int> zero, seven;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0'){
	            zero.push_back(i);
	        }else{
	            seven.push_back(i);
	        }
	    }
	    int ans=0;
	    for(auto it:seven){
	        int num= upper_bound(zero.begin(),zero.end(),it)-zero.begin();
	        ans+=(num*(num-1))/2;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}



















// #include <iostream>
// #include <cstring>
// #include <vector>
// using namespace std;
// int count(string str,int ind,string output,vector<int>& memo)
// {
//     if(ind==str.length())
//     {
//         if(output=="007")
//         return 1;
//         else
//         return 0;
//     }
    
//     //memo check
//     if(memo[ind]!=-1)
//     return memo[ind];
    
//     //recursive call
//     //take and not take
    
//     int take,nottake;
//     take=nottake=0;
//     nottake=0+count(str,ind+1,output,memo);
//     take=count(str,ind+1,output+str[ind],memo);
    
//     return memo[ind]=take+nottake;
// }
// int main() {
	
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    string str;
// 	    cin>>str;
	    
// 	    vector<int> memo(str.length()+1,-1);
// 	    cout<<count(str,0,"",memo)<<endl;
// 	}
// 	return 0;
// }
