
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

        int x,y,k;
        cin>>x>>y>>k;

        if(y<x){
            cout<<x<<endl;
            continue;
        }
        else {
            
            if(y-x >= k)
            {
            cout<< x+ k + 2*(y-x-k)<<endl;
               continue;
            }
            else{
                cout<<y<<endl;
                continue;
            }
            
        }


    }


    return 0;
}


