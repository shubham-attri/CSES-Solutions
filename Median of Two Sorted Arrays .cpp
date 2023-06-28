//
// Created by Shubham Attri on 28/06/23.
//
#include <iostream>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1); // Choose the num1 array to be small er

        int n1 = nums1.size();
        int n2 = nums2.size();
        int low =0; // choosing low for nums1
        int high = n1; //choosing high for nums1

        while(low <= high){
            int cut1 = (low+high) >>1;  // setting the cut1 as in mid for binary search for nums1
            int cut2 = (n1+n2+1)/2 - cut1; // setting the cut2 for nums2

            int left1 = cut1 == 0 ? INT_MIN : nums1[cut1-1]; // setting INT_MIN if the cut is at 0
            int left2 = cut2 == 0 ? INT_MIN : nums2[cut2-1]; // setting INT_MIN if the cut is at 0 for array2

            int right1 = cut1 == n1 ? INT_MAX : nums1[cut1]; // setting INT_MAX if the cur is at end point
            int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

            if( left1 <= right2 && left2 <= right1){
                if((n1+n2)%2 == 0){
                    return  (max(left1,left2) + min(right1,right2))/2.0; //if even choose the max of left and min or right

                }
                else{
                    return max(left1, left2); // choosing the max of left cut
                }
            }
            else if(left1> right2){
                high = cut1-1; // standart binary search shifting of high and low
            }
            else{
                low = cut1+1;
            }
        }
        return 0.0;
    }
};

int main(){
    return 0;
}