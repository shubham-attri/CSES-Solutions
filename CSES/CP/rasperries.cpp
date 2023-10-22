
//" FILE Created By Shubham Attri"

#include <bits/stdc++.h>

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
        int n,k;
        cin>>n>>k;

        vector<int> a(n);

        int answer =0;
        for(int i =0;i < n;i++){
            cin>>a[i];
            a[i] = a[i]%k;
        }

        map<int,int> mp;
        bool divisible = false;
        for(auto x: a){
            mp[x]++;
        }

        // for(auto x:mp) cout<<k<<" "<< x.first<<" "<<x.second<<endl;

        if(mp[0] > 0) answer =0;

        else if(k == 2)
            answer = 1;
        
        else if(k == 3)
                if(mp[2] > 0) answer = 1;
                else answer = 2;
        else if(k == 4){
            
            if(mp[3] >0 && mp[2] < 2 ) answer = 1;
            else if(mp[2]>0){
                if(mp[2]>=2) answer =0;
                else if(mp[1]>0 && mp[2]== 1) answer = 1;
                else answer = 2;
            }
            else if(mp[1]>=2) answer = 2;
            else answer = 3;

            
        }
        else if(k == 5){
            if(mp[4] > 0) answer = 1;
            else if(mp[3] > 0) answer = 2;
            else if(mp[2] >0) answer = 3;
            else if(mp[1] > 0) answer = 4;
        }

        
        cout <<answer<<endl;       

        


    }

    return 0;
}


