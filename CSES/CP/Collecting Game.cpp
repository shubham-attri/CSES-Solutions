
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

        map<int,int> a;
        for(int i =0;i < n ;i++){int x;cin>>x;a[x]=i;}

        for( auto x : a){
            cout<<x.first<<" "<<x.second<<endl;
        }

        vector<int> result;
        
        


    }


    return 0;
}


