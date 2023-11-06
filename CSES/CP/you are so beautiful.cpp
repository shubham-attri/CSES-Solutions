
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

        int n;cin>>n;
        vector<int> a(n);

        map<int,int> lo;
        set<int> s;
        set<int> li;
        set<int> fi;

        for(int i= 0;i< n;i++){

            cin>>a[i];
            if(s.count(a[i]) ==0)fi.insert(i);
            s.insert(a[i]);
            lo[a[i]] = i;
        }
        for(auto x: lo) li.insert(x.second);
        int count = 0;
        int answer = 0;
        for(int i = n-1;i >= 0;i--){
            if(li.count(i)) count++;
            if(fi.count(i)) answer+= count;

        }

        



        // for(auto x : lo){
        //     // cout<<x.first<<" "<<x.second<<endl;
        // }

    
        // map<vector<int>,int> m;

        // for(int i =0;i < n;i++){
        //     vector<int> temp ={};
        //     for(int j = i;j <n;j++){


        //         temp.push_back(a[j]);
        //         // if(lo[a[j] != j]) continue;
        //         // cout<<"temp: ";
        //         // for(auto x : temp) cout<<x<<" lo: "<<lo[a[j]]<<" j: "<<j<<" ";
        //         // cout<<endl;
        //         if(lo[temp[temp.size()-1]] != j ) m[temp] = 0-mod;
        //         if(fo[temp[0]] != i) m[temp] = 0-mod; 

        //         m[temp]++;
        //         // cout<<m[temp]<<endl;
        //     }
        // }
        // // cout<<m.size()<<endl;
        // // cout<<endl;

        // int answer = 0;
        // for(auto x:m)
        // {
        //     if(x.second == 1) answer++;
        // }

        // for(auto x: m){
        //     cout<<"count: "<<x.second<<endl;
        //     for(auto y : x.first){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }


        cout<<answer<<endl;
        // cout<<endl;


    }


    return 0;
}




