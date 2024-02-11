
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

        if(n==1){cout<<1<<endl;continue;}

        for(int i =0;i<n/2;i++){
            cout<<1<<string(i,'0')<<6<<string(i,'0')<<9<<string(n-3-2*i,'0')<<endl;
            cout<<9<<string(i,'0')<<6<<string(i,'0')<<1<<string(n-3-2*i,'0')<<endl;
        }
        cout<<196<<string(n-3,'0')<<endl;

        
    }


    return 0;
}


