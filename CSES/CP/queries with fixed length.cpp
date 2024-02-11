
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

    int n, d, q;
    cin>>n>>q;
    assert(n <= 100000 && n >= 1 && q>=1 && q<= 100);
    vector<int> v(n+1);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
        assert(v[i] >= 0 && v[i] < 1000000);
    }
    while(q--) {
        int ans = 0;
        deque<int> deq;
        cin>>d;
        assert(d >= 1 && d <= n);
        for(int i =0; i < d; i++) {
            if(deq.empty()) {
                deq.push_front(i);
                continue;
            }
            while (1) {
                if (deq.empty()) {
                    deq.push_front(i);
                    break;
                }
                if (v[deq.front()] < v[i]) {
                    deq.pop_front();
                }
                else {
                    deq.push_front(i);
                    break;
                }
            }
        }
        ans = v[deq.back()];
        for(int i = d; i < n; i++) {
            while (!deq.empty() && deq.back() <= i-d) {
                deq.pop_back();
            }
            while (1) {
                if (deq.empty()) {
                    deq.push_front(i);
                    break;
                }
                if (v[deq.front()] < v[i]) {
                    deq.pop_front();
                }
                else {
                    deq.push_front(i);
                    break;
                }
            }
            ans = min(ans, v[deq.back()]);
        }
        cout<<ans<<endl;
    }

    return 0;
}


