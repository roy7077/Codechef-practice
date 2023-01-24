#include <iostream>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
        bool flag=0;
        // string ans="";
        bool f=1;
        bool w=1;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            
            string test;
            cin>>test;
            
            if(flag)
            continue;
            
            int count=0;
           
            for(int i=0;i<m;i++)
            {
                if(test[i]=='1')
                count++;
                
            }
            
            if(s=="correct")
            {
                if(count!=m)
                {
                    f=0;
                    //cout<<"INVALID"<<endl;
                    //break;
                }
            }else
            {
                if(count==m)
                {
                    w=0;
                    // flag=1;
                    // cout<<"WEAK"<<endl;
                    //break;
                }
            }
            
        }
        if(f and w)
        cout<<"FINE"<<endl;
        else if(f and !w)
        cout<<"WEAK"<<endl;
        else
        cout<<"INVALID"<<endl;
        
    }
	return 0;
}

//time complexity - O(t*n*m)
