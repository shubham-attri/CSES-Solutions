
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
        string s;
        cin>>s;
        vector<int> value = {1,2,3,4,5,6,7,8,9,0};
        int answer = 0;
        int pointer = 1;
        for(auto c:s){
            c = int(c) -48;

            if(c == 0){
                answer += abs(pointer - 10) +1;
                pointer = 10;
            }
            else{
            answer += abs (pointer - c) +1;
            pointer = c;
            }
            

        }
        cout <<answer<<endl;


    }



    return 0;
}


