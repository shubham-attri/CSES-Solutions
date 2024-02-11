
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
        int a,b;
        cin>>a>>b;
        if((a+b)%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;

    }

    return 0;
}


