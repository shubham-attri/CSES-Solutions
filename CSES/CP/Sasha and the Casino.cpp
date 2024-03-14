
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
      
      int k,x,a;
      cin>>k>>x>>a;
      int w=0;
      while(a){
        a-=a/k+1;
        w++;
      }
      cout<<(w>x?"YES":"NO")<<endl; 
    }
    return 0;
}

