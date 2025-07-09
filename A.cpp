//Compilers and Parsers
#include <bits/stdc++.h>    
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '<') {
                cnt++;
            } else {
                cnt--;
            }
            if(cnt < 0) {
                break;
            }
        }
        if(cnt == 0) {
            cout << n << endl;
        } else {
            int ans = 0;
            for(int i = 0; i < n; i++) {
                if(s[i] == '>') {
                    break;
                }
                ans++;
            }
            for(int i = n - 1; i >= 0; i--) {
                if(s[i] == '<') {
                    break;
                }
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}