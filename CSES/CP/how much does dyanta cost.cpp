
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
        int n,k;
        cin>>n>>k;

        set<int> s;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }

        if(s.find(k) != s.end()){
            putyes;
            continue;
        }
        putno;

    }


    return 0;
}


