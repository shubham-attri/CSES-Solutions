//
// Created by Shubham Attri on 25/07/23.
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
#define fo(n) for(int i =0 ; i < n ; i++)
#define en <<endl;
#define cout cout<<
#define mod 1e9 +7
#define sort(a) sort(a.begin(),a.end())



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H



int solve(int i, int s1, int s2, vector<int> a){
    if(i==a.size())
        return abs(s1-s2);
    return min(solve(i+1,s1+a[i],s2,a),solve(i+1,s1,s2+a[i],a));
}

int32_t main() {
    int n;
    cin>>n;
    vi a(n);
    fo(n)
    	 cin>>a[i];
    sort(a);
    cout solve(0,0,0,a) en

    return 0;
}