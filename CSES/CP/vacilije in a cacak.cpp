
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

        int n,k,x;
        cin>>n>>k>>x;

        int lower = k*(k+1)/2;
        int upper = n*(n+1)/2 - (n-k)*(n-k+1)/2;

        if(x < lower || x > upper){
            putno;
            continue;
        }
        putyes;








    }



    return 0;
}


