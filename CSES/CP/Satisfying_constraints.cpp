
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
    std::cin >> tc;

    while(tc--){
      int n;
      cin>>n;
    
      int li= -mod;
      int ui= mod;
      
      set<int> invalid;

      while(n--){
        int a,b;
        cin>>a>>b;
        
        if(a==3)invalid.insert(b);
        else if(a ==1) li = max(li,b);
        else if(a==2 ) ui = min(ui,b);
      }

      int invalid_count;
      for(auto x: invalid){
        if(x<= ui && x >= li) invalid_count++;
      }

      int ans = ui-li+1-invalid_count;
      if(ans<0)ans = 0;
      cout<<ans<<endl;

    }

    return 0;
}


