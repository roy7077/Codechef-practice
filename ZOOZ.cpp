#include <iostream>
using namespace std;

void solve() 
{
    int len; 
    cin >> len;
    cout << 1;
    for (int i = 0; i < len - 2; i++) 
    cout << 0;
    cout << 1 << "\n";
}

int main() 
{
    int tc;
    cin >> tc;
    while (tc--) 
    solve();
    
    return 0;
}

// time _Complexity - o(t*n)