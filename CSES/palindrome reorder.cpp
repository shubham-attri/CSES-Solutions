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

    for(int i =0 ; i < s.length();i++){
        m[s[i]]++;
    }
    int count = 0;

    for(auto x: m){
        if(x.first%2 == 1)
            count++;
    }

    if(m.size()%2 == 0 && count >0)
        cout "NO SOLUTION" en
    else if(m.size()%2 == 1 && count > 1)
        cout "NO SOLUTION" en
    else{
        
        if(m.size()%2 == 0){
            string answer="";
            for(auto x : m){
                for(int i = 0 ; i < x.second/2;i++)
                    answer+= x.first;
                
                cout answer;
                reverse(answer.begin(),answer.end());
                cout answer; 
            }
            
        }
        else{
            char temp ;
            string answer="";
            for(auto x : m){
                if(x.second%2 == 1) temp = x.first;

                for(int i = 0 ; i < x.second/2;i++)
                    answer += x.first;
            }
            answer+=temp;
            cout answer;
            reverse(answer.begin(),answer.end());
            answer.erase(0,0);
            cout answer;
        }
    }


    return 0;
}