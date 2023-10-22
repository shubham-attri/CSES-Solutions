
//" FILE Created By Shubham Attri"
#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int sum = 0;
        for (int i = 1; i < n; i++) {
            int temp = ceil(log2(1.0*a[i-1]/a[i]));
            sum+= temp;
            if(sum <= 0) sum =0;
            count += sum;
        }

        cout << count << endl;
    }

    return 0;
}
