
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
      vector<int> v(n);
      for(int i =0; i < n ;i++)cin>>v[i];
      
      map<int,int> mp;
      int mn = INT_MAX;
      for(int i =0;i< n;i++){
        mp[v[i]]++;
        mn = min(mn,v[i]);
      }

      bool valid = true;
    
    if(mp[mn]!=1){
        valid = false;
        for(int i =0;i < n;i++){
            if(v[i]%mn!=0){valid = 1;break; }
        }
    }
    if(valid)putyes;
    else putno;


}
    return 0;

}


