//
// Created by Shubham Attri on 02/10/23.
//
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <bitset>

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
#define fo(i,n) for(int i =0 ; i < n ; i++)
#define en <<endl;
#define cout cout<<
#define mod 1e9 +7
#define sort(a) sort(a.begin(),a.end())



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H


int32_t main() {

    int n;cin>>n;vi a(n);vinp(a,n)
    int i=0,j=0;int answer =0;si s;
    mii m;int cl=0;
    while(i<n){
        if(m.find(a[i]) == m.end() || m[a[i]]==0){
            cl++;
            m[a[i]]++;
            answer= max(answer,cl);
            i++;
        }
        else{
            m[a[j]]--;
            cl--;
            j++;
        }
    }
    cout answer en


    return 0;
}