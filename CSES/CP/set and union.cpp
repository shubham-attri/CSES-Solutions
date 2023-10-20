
// FILE Created By Shubham Attri

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <numeric>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;

        vector<vector<int> > sets(n);

        set<int> finalset;

        for(int i =0; i < n;i++){
            int k;cin>>k;
            for(int j = 0; j < k;j++){
                int x;cin>>x;
                sets[i].push_back(x);
            }
            for(auto v: sets[i]) finalset.insert(v);
        }

        int ans = 0;
        set<int> temp;

        // for(auto x: temp) cout<<x<<" ";
        //         cout<<endl;

        for(int i = 1; i < 51;i++){
            
            if(finalset.find(i) == finalset.end()) continue;

            temp.clear();

            for(int j = 0; j < n;j++){
                if(binary_search(sets[j].begin(),sets[j].end(),i)) continue;

                for(auto v: sets[j]) temp.insert(v);
                
                if(temp == finalset) continue;;

                // for(auto x: temp) cout<<x<<" ";
                // cout<<endl;
            }

            if(temp!=finalset) ans = max(ans, (int)temp.size());
            
        }

        cout <<ans<< endl;


    }

    return 0;
}


