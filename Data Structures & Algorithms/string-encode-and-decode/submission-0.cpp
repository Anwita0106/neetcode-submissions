class Solution {
public:
    string encode(vector<string>& strs) {
        string result="";
        for(string s:strs)
        {
            int n=s.length();
            result+=to_string(n)+"#"+s;

        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i < s.length())
        {
            int t=s.find("#",i);
            string subsStr=s.substr(i,t-i);
            int len=stoi(subsStr);
            string word=s.substr(t+1,len);
            result.push_back(word);
            i=t+1+len;
        }
        return result;
    }
};
