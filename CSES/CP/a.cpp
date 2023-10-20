
// FILE Created By Shubham Attri

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <queue>
#include <cstdio>
#include <iomanip>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){
        string s;
        long long pos;
        cin >> s >> pos;
        --pos;
        
        int curLen = s.size();
        vector <char> st;
        bool ok = pos < curLen;
        s += '$';
        
        for (auto c : s) {
            while (!ok && st.size() > 0 && st.back() > c) {
                pos -= curLen;
                --curLen;
                st.pop_back();
                
                if(pos < curLen) 
                    ok = true;
            }
            st.push_back(c);
        }

        
        cout << st[pos];
    }



    return 0;
}


