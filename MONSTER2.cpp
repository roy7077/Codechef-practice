#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    long long A, B, X, Y;
	    cin >> A >> B >> X >> Y;
	    
	    if (Y >= X) {
	        cout << "0\n";
	    } else {
	        long long monsterHit = floor(A / (X - Y));
	        if (A % (X - Y)) monsterHit++;
	        
	        long long myHit = floor(B / Y);
	        if (B % Y) myHit++;
	        
	        if (monsterHit >= myHit) {
	            cout << "0\n";
	        } else {
	            cout << "1\n";
	        }
	    }
	}
}