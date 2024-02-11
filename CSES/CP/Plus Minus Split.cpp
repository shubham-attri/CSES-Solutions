
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
        string s;
        cin>>n>>s;
        int pc = 0;
        int nc = 0;

        for(auto x: s){
            if(x == '+')pc++;
            else nc++;
        }

        cout<<abs(pc-nc)<<endl;


    }

    return 0;
}


