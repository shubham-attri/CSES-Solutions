#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

#define int long long
#define vi vector<int>
#define sort(a) sort(a.begin(),a.end())

int32_t main() {
    int n,m,k,i,j,ans =0;
    cin>>n>>m>>k;

    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a);

    vi b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b);

    i=0,j=0;
    while(i < n && j < m){
        if(abs(a[i]-b[j]) <= k){
            ans++;
            i++;
            j++;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }

    cout << ans << endl;

    return 0;
}