// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define ll long long

// int main() {
	
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    vector<ll> arr(3);
// 	    cin>>arr[0]>>arr[1]>>arr[2];
	    
// 	    int n;
// 	    cin>>n;
	    
// 	    if(n==1)
//         cout<<1<<endl;
//         else
//         {
//             sort(arr.begin(),arr.end());
//             if(arr[0]>=n)
//             cout<<3*n-2<<endl;
//             else if(arr[1]<n)
//             cout<<arr[0]+arr[1]+n<<endl;
//             else
//             cout<<arr[0]+2*n-1<<endl;
//         }
	    
	    
	    
	    
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long arr[3],n;
        cin>>arr[0]>>arr[1]>>arr[2]>>n;
        if(n==1)
        cout<<1<<endl;
        else
        {
            sort(arr,arr+3);
            if(arr[0]>=n)
            cout<<3*n-2<<endl;
            else if(arr[1]<n)
            cout<<arr[0]+arr[1]+n<<endl;
            else
            cout<<arr[0]+2*n-1<<endl;
        }
    }
	return 0;
}
