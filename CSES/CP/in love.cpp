
//" FILE Created By Shubham Attri"

#include <bits/stdc++.h>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl
#define int long long 


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int q;
     cin >> q;

    multiset<int> left,right;    
    while(q--) {
        char c; cin >> c;
        int l,r; cin >> l >> r;
        if(c == '+') {
            left.insert(l);
            right.insert(r);
        }
        else {
            left.erase(left.find(l));

            right.erase(right.find(r));
        }
        if(left.size()<=1) {
            putno;
            continue;
        }
        
        auto r1 = right.begin();
        auto l1 = left.upper_bound(*r1);

        if(l1 == left.end()) {
            putno;
            continue;
        }
        putyes;
    }


    return 0;
}


