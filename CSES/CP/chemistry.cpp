
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

        string s;
        cin>>s;

        map<char,int> mp;

        for(auto x: s){
            mp[x]++;
        }

        bool oddpossible = false;
        if((n-k)%2 == 1) oddpossible = true;

        int oddvalues = 0;

        for(auto x: mp){
            if(x.second%2 == 1){
                oddvalues++;
            }
        } 

        oddvalues -= k;
        if(oddvalues>1) putno;
        else{
            if(oddvalues < 0 && oddpossible){
                putyes;
            } 
            else if(oddpossible){
                if(oddvalues == 1) putyes;
                else putno;
            }
            else{
                putyes; 
            }
        }




    }


    return 0;
}


