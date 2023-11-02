
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

        vector<int>  v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int q;cin>>q;
        while(q--){
            int l;cin>>l;
            int k;cin>>k;

            int previous = v[l-1];
            int answer = -1;

            for(int i =l-1; i <= n-1;i++){
                // cout<<i<<" "<<previous<<" "<<k<<endl;
                previous &= v[i];
                if(previous >= k) {
                    answer = max(answer,i+1);
                }
                if(previous == 0) break;
            }

            cout<<answer<<" ";

        }
        cout<<endl;

    }


    return 0;
}


