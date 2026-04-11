class Solution {
  public:
    int getLPSLength(string &s) {
        vector<int> lps (s.size(), 0);
        int p = 0, sf = 1;
        while(sf < s.size()){
            if(s[p] == s[sf]){
                lps[sf] = p + 1;
                p++;
                sf++;
            }
            else{
                if(p == 0){
                    lps[sf] = 0;
                    sf++;
                }
                else{
                    p = lps[p - 1];
                }
            }
        }
        return lps[s.size()-1];
    }
};