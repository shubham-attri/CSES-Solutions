
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
        int n, k;
        cin >> n >> k;
        
        vector<int> a (n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int start = 0;
        bool valid = true;
        
        for (int i = 0; i < min (n, k); i++) {
            int end = (start + n - 1) % n;
            int val = a[end];
            
            if (val > n) {
                cout << "NO" << endl;
                valid = false;
                break;
            }
            
            start = (start - val + n) % n;
        }
    
        if(valid){cout << "YES" << endl;}
        


    }


    return 0;
}


