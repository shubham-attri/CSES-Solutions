
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
    
    int n,x,y,num;
    cin>>n>>x>>y;

    map<pair<int,int>,int> mp;
    int ans = 0;
    for(int i =0;i<n;i++){
      cin>>num;
      int a = num%x;int b = num%y;
      ans+= mp[{(x-a)%x,b}];
      mp[{a,b}]++;
    }

    cout<<ans<<endl;

  }

  return 0;
}


