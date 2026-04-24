class Solution {
  public:
    int gcd(int a, int b) {
        if(b == 0){
            return a;
        }
        if(a == 0){
            return b;
        }
        if(a >= b){
            return gcd(b, a%b);
        }
        else{
            return gcd(a, b%a);
        }
    }
};
