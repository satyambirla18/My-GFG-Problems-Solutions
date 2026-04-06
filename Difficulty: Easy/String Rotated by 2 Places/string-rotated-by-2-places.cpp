class Solution {
  public:
    
    void rotateclockwise(string &s){
        int n = s.size();
        char c = s[n-1];
        int idx = n-2;
        while(idx >= 0){
            s[idx+1] = s[idx];
            idx--;
        }
        s[0] = c;
    }
    
    void rotateanticlockwise(string &s){
        int n = s.size();
        char c = s[0];
        int idx = 1;
        while(idx < n){
            s[idx-1] = s[idx];
            idx++;
        }
        s[n-1] = c;
    }
    
    bool isRotated(string& s1, string& s2) {
        // code here
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 != n2) return false;
        
        string clockwise = s1;
        
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise == s2) return true;
        
        string anticlockwise = s1;
        
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        if(anticlockwise == s2) return true;
        
        return false;
    }
};
