
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
      int x;
      int prod = 1;
      while(n--){cin>>x;prod*=x;}

      if(2023%prod != 0)putno;
      else{
        putyes;
        cout<<2023/prod;k--;
        while(k--)cout<<" "<<1;
        cout<<endl;
      }


    }

    return 0;
}


