
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
        int a,b,r;

        cin>>a>>b>>r;

        int c = a^b;
        if(c==0){cout<<0;continue;}

        int k = 0;
        while (c >> k)k++;

        int p = 1LL << (k - 1);

        if (p > r) {
        cout<< c<<endl;} 
        else {
        cout<<c - p + 1<<endl;}

    }


    return 0;
}


