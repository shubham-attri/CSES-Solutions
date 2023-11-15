
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

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin >> n;
    
        vector<int> a (n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        vector<int> b (n, 1);
        vector<int> cnt (101, 0);
        
        bool twoDone = false, threeDone = false;
        
        for (int i = 0; i < n; i++) {
            cnt[a[i]]++;
            
            if (cnt[a[i]] == 2) {
                if (!twoDone) b[i] = 2, twoDone = 1;
                else if (!threeDone) b[i] = 3, threeDone = 1;
            }
        }
        
        if (threeDone == false) {
            cout << -1 << endl;
            continue;
        }
        
        for (int x : b) {
            cout << x << " ";
        } cout << endl;

    }


    return 0;
}


