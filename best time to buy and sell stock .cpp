//
// Created by Shubham Attri on 28/06/23.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i =INT_MAX ; int j = 0;

        for(auto x : prices){
            i = min(x, i);
            j = max(j,  x-i);
            cout<< j<< i;
        }

        return j;

    }
};