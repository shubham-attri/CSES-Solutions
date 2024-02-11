
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
        int a,b;
        cin>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        set<pair<int,int>> king;
        set<pair<int,int>> queen;

        king.insert({x1+a,y1+b});
        king.insert({x1+a,y1-b});
        king.insert({x1-a,y1+b});
        king.insert({x1-a,y1-b});
        swap(a,b);
        king.insert({x1+a,y1+b});
        king.insert({x1+a,y1-b});
        king.insert({x1-a,y1+b});
        king.insert({x1-a,y1-b}); 

        
        queen.insert({x2+a,y2+b});
        queen.insert({x2+a,y2-b});
        queen.insert({x2-a,y2+b});
        queen.insert({x2-a,y2-b});
        swap(a,b);
        queen.insert({x2+a,y2+b});
        queen.insert({x2+a,y2-b});
        queen.insert({x2-a,y2+b});
        queen.insert({x2-a,y2-b});

        set<pair<int,int>> intersection;

        // for(auto x: king){
        //     cout<<x.first<<" "<<x.second<<endl;;
        // }
        // cout<<endl;
        // for(auto x: queen){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        set_intersection(king.begin(),king.end(),queen.begin(),queen.end(),inserter(intersection,intersection.begin()));

        cout<<intersection.size()<<endl;
 



    }


    return 0;
}


