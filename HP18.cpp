#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,a,b;
	    cin>>n>>a>>b;
	    
	    vector<ll> albob;
	    vector<ll> bob;
	    vector<ll> alice;
	    
	    for(ll i=0;i<n;i++)
	    {
	        ll input;
	        cin>>input;
	        
	        if(input%a==0 and input%b==0)
	        albob.push_back(input);
	        else if(input%a==0)
	        bob.push_back(input);
	        else if(input%b==0)
	        alice.push_back(input);
	    }
	    
	    
	    
	    
	    if(alice.size() == 0 && bob.size() == 0 && albob.size()==1) 
	    {
            cout << "BOB" << endl;
        }
        else if(alice.size() == 0 && bob.size() == 0 && albob.size() == 0) 
        {
            cout << "ALICE" << endl;
        }
        else if(albob.size() == 0) 
        {
            if(alice.size() >= bob.size()) {
                cout << "ALICE" << endl;
            }
            else {
                cout << "BOB" << endl;
            }
        }
        else {
            if(alice.size() > bob.size()) {
                cout << "ALICE" << endl;
            }
            else {
                cout << "BOB" << endl;
            }
        }
	    
	   // bool flag=1;
	   // while(1)
	   // {
	   //     if(flag)
	   //     {
	   //         if(bob.size()>0)
	   //         {
	   //             flag=(!flag);
	   //             bob.pop_back();
	   //         }
	   //        // else if(albob.size()>0)
	   //        // {
	   //        //     flag=(!flag);
	   //        //     albob.pop_back();
	   //        // }
    //             else
	   //         break;
	   //    }
	   //     else
	   //     {
	   //         if(alice.size()>0)
	   //         {
	   //             flag=(!flag);
	   //             alice.pop_back();
	   //         }
	   //        // else if(albob.size()>0)
	   //        // {
	   //        //     flag=(!flag);
	   //        //     albob.pop_back();
	   //        // }
	   //         else
	   //         break;
	   //     }
	   // }
	    
	   // if(flag)
	   // cout<<"ALICE"<<endl;
	   // else
	   // cout<<"BOB"<<endl;
	}
	return 0;
}

