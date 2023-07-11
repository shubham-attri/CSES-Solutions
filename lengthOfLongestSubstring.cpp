class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ch;

        int i =0;
        int j =0;


        int result = 0;


        while(j<s.size()){
            if(ch.find(s[j]) == ch.end()){
                ch.insert(s[j]);
                result = max(result, j - i +1);
                j++;
            }
            else{
                ch.erase(s[i]);
                i++;
            }


        }

        return result;

    }
};