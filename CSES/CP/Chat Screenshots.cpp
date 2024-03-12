#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define putyes cout << "YES" << endl
#define putno cout << "NO" << endl
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--) {
        int n, k;
        cin >> n >> k;        

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        if(k ==1 ){cout<<"YES"<<endl;continue;}
        for(int i = 0; i < n; i++)

        vector<int> ca;
        for(int i = 1; i < b[0] - 1; i++)
            ca.push_back(b[i]);
        for(int i = b[0]; i < n; i++)
            ca.push_back(a[i]);

        bool ans = true;
        k -= 2;
        while(k-- && ans) {
            vector<int> ta(n); // Resize the vector to proper size
            for(int i = 0; i < n; i++)
                cin >> ta[i];

            for(int i = 1; i < n; i++) {
                if(i == ta[0] - 1)
                    continue;
                if(ta[i] != ca[i]) {
                    ans = false;
                    break;
                }
            }
        }

        if(ans)
            putyes;
        else
            putno;
    }

    return 0;
}
