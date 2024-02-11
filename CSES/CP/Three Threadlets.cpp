
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

    int tc;cin>>tc;
    while(tc--){

        int a,b,c;
        cin>>a>>b>>c;

        int mv = min(a,min(b,c));

        if( a == mv || a/2 = mv || a/3 ==mv )
        {
            if(b == mv || b/2 == mv || b/3 == mv){
            if(c == mv  || c/2 == mv || c/3 == mv)
            {
            putyes;
            continue;
            }
            }
        }
        putno;




    }



    return 0;
}


