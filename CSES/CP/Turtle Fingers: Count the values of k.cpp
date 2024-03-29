
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
        int a,b,l;
        cin>>a>>b>>l;

        set<int> ans;

        for(int i =1;l%i==0;i*=a){
            for(int j =1;l%(i*j)==0;j*=b){ans.insert(l/(i*j));}
        }
        cout<<ans.size()<<endl;


    }


    return 0;
}


