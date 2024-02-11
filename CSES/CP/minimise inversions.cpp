
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
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        vector<int> a1(n);
        vector<int> b1(n);

        for(int i =0;i<n;i++){cin>>a[i];a1[i] = i + 1 - a[i];}
        for(int i =0;i<n;i++){cin>>b[i];b1[i] = i +1  - b[i];}

        for(auto x: a1)cout<<x<<" ";cout<<endl;
        for(auto x: b1)cout<<x<<" ";cout<<endl;


    }

    return 0;
}


