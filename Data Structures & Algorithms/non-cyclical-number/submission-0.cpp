class Solution {
public:
    int square(int n)
    {
        return n*n;
    }
    bool isHappy(int t) {
        int n=t;
        unordered_set<int>seen;
        while(n!=1)
        {
            int sum=0;
        while(n>0)
        {
            int d=n%10;
            int c=square(d);
            sum+=c;
            n/=10;
        }
        if(seen.count(sum)) return false;
        seen.insert(sum);
        n=sum;
        }
        return true;
    }
};