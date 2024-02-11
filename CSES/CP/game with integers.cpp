
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
    while(tc--)
    {
        int n;cin>>n;
        if(n%3 == 1 || n%3 == 2) cout<<"First"<<endl;
        else cout<<"Second"<<endl;

    }



    return 0;
}


