class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char c:s)
        {
            if(isalnum(c))
            {
                result+=tolower(c);

            }
        }
        int l=0;
        int r=result.length()-1;
        while(l<r)
        {
            if(result[l]!=result[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
