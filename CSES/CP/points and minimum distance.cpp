
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
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++) cin>>a[i];


        sort(a.begin(),a.end());

        int left = 0;
        int right = 2*n-1;

        int answer = 0;

        vector<pair<int,int>> ans;

        while(left < right){

            // cout<<a[left]<<" "<<a[right]<<" ";
            ans.push_back({a[right],a[left]});
            left++;
            right--;
        }

        for(int i = 1;i < ans.size();i++){
            answer += abs(ans[i].first - ans[i-1].first);
            answer += abs(ans[i].second - ans[i-1].second);
        }

        cout<<answer<<endl;
        for(auto x: ans) cout<<x.first<<" "<<x.second<<endl;




    }


    return 0;
}


