// #include <iostream>
// #include <vector>
// using namespace std;

// int main() 
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
	    
// 	    vector<int> A(n),B(n);
	    
// 	    //taking input
// 	    for(int i=0;i<n;i++)
// 	    cin>>A[i];
	    
// 	    for(int i=0;i<n;i++)
// 	    cin>>B[i];
	    
// 	    int one=0;
// 	    int zero=0;
	    
// 	   // int o=0;
// 	   // int z=0;
// 	    for(auto it:A)
// 	    {
// 	        if(it==1)
// 	        one++;
// 	        else
// 	        zero++;
// 	    }
	    
// 	    if((A[0]!=B[0]) or (A[n-1]!=B[n-1]))
// 	    {
// 	        cout<<"NO"<<endl;
// 	        continue;
// 	    }
	    
// 	    bool flag=1;
// 	    for(int i=1;i<n-1;i++)
// 	    {
// 	        if(A[i]!=B[i] and A[i]==0 and one==0)
// 	        {
// 	            cout<<"NO"<<endl;
// 	            flag=0;
// 	            break;
// 	        }
// 	        else if(A[i]!=B[i] and A[i]==1)
// 	        {
// 	            cout<<"NO"<<endl;
// 	            break;
// 	        }
// 	    }
	    
// 	   // for(int i=0;i<n;i++)
// 	   // {
// 	   //     if(A[i]==1)
// 	   //     one--;
// 	   //     else
// 	   //     zero--;
	        
// 	   //     if(B[i]==1)
// 	   //     {
// 	   //         if(one>=1 or o>=1 or A[i]==1)
// 	   //         {
// 	   //             if(A[i]==1)
// 	   //             {
// 	   //                 o++;
// 	   //             }
// 	   //             else
// 	   //             {
// 	   //                 z++;
// 	   //             }
// 	   //         }
// 	   //         else 
// 	   //         {
// 	   //             flag=0;
// 	   //             break;
// 	   //         }
// 	   //     }
// 	   //     else
// 	   //     {
// 	   //         if(zero>=1 and (z>=1 or A[i]==0))
// 	   //         {

// 	   //             z++;
// 	   //         }
// 	   //         else
// 	   //         {
// 	   //             flag=0;
// 	   //             break;
// 	   //         }
// 	   //     }
// 	   // }
	    
// 	    if(flag)
// 	    cout<<"YES"<<endl;
	    
// 	}
// 	return 0;
// }


#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        ll A[n],B[n];
        ll one=0;
        ll zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]==1)
            one++;
            else
            zero++;
        }
        
        for(int i=0;i<n;i++)
        cin>>B[i];
        
        if(A[0]!=B[0])
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        if(A[n-1]!=B[n-1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        bool flag=1;
        for(int i=1;i<n-1;i++)
        {
            if(A[i]!=B[i] and A[i]==0 and one==0)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
            else if(A[i]!=B[i] and A[i]==1)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        
        if(flag)
        cout<<"YES"<<endl;
    }
    return 0;
}


