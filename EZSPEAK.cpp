#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        string str;
        cin>>str;
        
        int count=0;
        bool flag=1;
        for(int i=0;i<str.length();i++)
        {
            
            //if str[i] is consonants then count++
            if(str[i]!='a' and str[i]!='e' and str[i]!='i' and  str[i]!='o' and str[i]!='u')
            count++;
            else
            count=0;
            
            
            //if count is greater than equal to 4 thats mean it is hard to Pronunciation
            if(count>=4)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
            
        }
        
        if(flag)
        cout<<"YES"<<endl;
    }
}
    