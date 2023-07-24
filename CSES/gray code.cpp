//
// Created by Shubham Attri on 23/07/23.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
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



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H



int32_t main(){

    int n;
    cin>>n;
	vector<int> v;
        int p=(1<<n);
        for(int i=0; i<p; i++){
            v.push_back(i^(i/2));
        }

        for(auto x: v){
            string s ="";
            while(x>0){
                s+= to_string(x%2);
                x/=2;
            }
            reverse(s.begin(),s.end());
            fo(n-s.size())
            	cout 0 ;
            cout s en

        }



    return 0;
}