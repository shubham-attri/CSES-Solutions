//
// Created by Shubham Attri on 20/07/23.
//


//
// Created by Shubham Attri on 20/07/23.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

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



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H




int32_t main(){

    int n;
    cin>>n;
    set<int> set1;
    set<int> set2;



    if(n%4 == 3 ){
        cout "YES" en
        set1.insert(1);
        set1.insert(2);
        set2.insert(3);

        int i = 4;int j = n;
        while(i < j){
            set1.insert(i);
            set1.insert(j);
            i++;j--;
            set2.insert(i);
            set2.insert(j);
            i++;j--;
        }
        cout set1.size() en
        for(auto x : set1)
            cout x <<" ";
        cout "\n";
        cout set2.size() en
        for(auto x : set2)
            cout x <<" ";
        cout "\n";




    }
    else if(n%4 == 0 ){
        cout "YES" en
		int i = 1;int j = n;
        while(i < j){
            set1.insert(i);
            set1.insert(j);
            i++;j--;
            set2.insert(i);
            set2.insert(j);
            i++;j--;
        }
        cout set1.size() en
        for(auto x : set1)
            cout x <<" ";
        cout "\n";
        cout set2.size() en
        for(auto x : set2)
            cout x <<" ";
        cout "\n";


    }
    else{
        cout "NO" en
    }





    return 0;
}