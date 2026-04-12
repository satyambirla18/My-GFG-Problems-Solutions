class Solution {
  public:
    int minChar(string &s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int n = s.size();
        s += '$';
        s += rev;
        int size = s.size();
        vector<int> lps (size, 0);
        int p = 0, sf = 1;
        while(sf < size){
            if(s[p] == s[sf]){
                lps[sf] = p+1;
                sf++;
                p++;
            }
            else{
                if(p == 0){
                    sf++;
                }
                else{
                    p = lps[p-1];
                }
            }
        }
        return n - lps[size-1];
    }
};
