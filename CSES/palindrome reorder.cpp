//
// Created by Shubham Attri on 20/07/23.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

#define int long long
#define vch vector<char>
#define vi vector<int>
#define vst vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define si set<int>
#define mii map<int,int>
#define vinp(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define vout(a,n) for(int i=0;i<n;i++)cout a[i]<<" ";
#define fo(n) for(int i =0 ; i < n ; i++)
#define en <<endl;
#define cout cout<<
#define mod 1e9 +7



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H

int32_t main(){

    string s;
    cin>>s;
    map<char,int> m;

    bool flag = true;

    for(auto i :s)
        m[i]++;



    char x ='-';int c = 0;
    for(auto i: m){
        if(i.second%2 == 1){
            c++;x=i.first;
        }
    }
    if(c>1){
        cout "NO SOLUTION" en
        return 0 ;
    }
    string ans;

    for(auto k : m){
        if(k.first == x) continue;
        fo(k.second/2){
            ans+=k.first;
        }
    }
    if(x!= '-'){
        fo(m[x]){
            ans += x;
        }
    }

    for(auto i = m.rbegin();i != m.rend();i++){
        if((*i).first == x) continue;
        for(int j = 0; j < (*i).second/2;j++){
            ans += (*i).first;
        }
    }
    cout ans en
    return 0;






    if(m.size()%2 == 0){
    	for(auto x: m){
            if(x.second%2 ==1)
                flag = false;
        }

        if(!flag){
            cout "NO SOLUTION" en
        }
        else{
            string ans = "";
            for(auto x: m)
            {
                for(int i =0;i < x.second/2 ;i++)
                    ans += x.first;
            }
            cout ans;
            reverse(ans.begin(),ans.end());
            cout ans;
        }
    }
    else{
        int count = 0;
        for(auto x:m){
            if(x.second%2 == 1)
                count++;
        }
        if(count>1)
            flag = false;

        if(!flag )
            cout "NO SOLUTION" en

        else{
            char temp;
        	string ans = "";
            for(auto x: m){
                if(x.second%2 == 1){
                    temp = x.first;
                }
                for(int i =0 ; i < x.second/2;i++)
                    ans += x.first;
            }
            cout ans ;
            cout temp;
            reverse(ans.begin(),ans.end());
            cout ans;
        }


    }






}