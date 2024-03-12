
//" FILE Created By Shubham Attri"

#include <bits/stdc++.h>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl
#define int long long 

int total_digits(int n){
    int ans = 0;
    while(n>0){
        n/=10;
        ans++;
    }
   return ans;
}

int total_zeros(int n){
    int ans = 0;
    while(n>0){
        if(n%10 == 0)ans++;
        n/=10;
    }
    return ans;
}


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--){
        int n , m ;
        cin >> n >> m ;
        priority_queue<int>pq;
        int sum = 0, no_zeroes{};
        for (int i = 0; i < n; ++i) {
            string s ;
            cin >> s ;
            int c=0;
            for (int j = s.size()-1; j >=0 ; --j) {
                if (s[j]=='0'){c++;}
                else break;
            }
            if (c){pq.push(c);}
            else {no_zeroes++;}
            sum+=(s.size()-c);
            c=0;
        }
        m++;
        int turn = 0;
        while (!pq.empty()){
            if (!turn){pq.pop();}
            else {sum+=pq.top();pq.pop();}
            turn = 1-turn;
        }
        if (sum>=m){cout <<"Sasha"<<endl;}
        else cout <<"Anna"<<endl;


    }


    return 0;
}


