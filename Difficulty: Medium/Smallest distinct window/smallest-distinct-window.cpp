class Solution {
  public:
    int findSubString(string& str) {
        int n = str.size();
        vector<int> count(256, 0);
        int f = 0, s = 0, len = n;
        int diff = 0;
        while(f < n){
            if(count[str[f]] == 0){
                diff++;
                count[str[f]]++;
            }
            f++;
        }
        for(int i = 0; i < 256; i++){
            count[i] = 0;
        }
        f = 0;
        while(s < n){
            while(diff && s < n){
                if(count[str[s]] == 0){
                    diff--;
                }
                count[str[s]]++;
                s++;
            }
            len = min(len, s-f);
            while(diff != 1){
                len = min(len, s-f);
                count[str[f]]--;
                if(count[str[f]] == 0){
                    diff++;
                }
                f++;
            }
        }
        return len;
    }
};