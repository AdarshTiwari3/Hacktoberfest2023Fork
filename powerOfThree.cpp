class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
         return false; //if value of n is negative or 0 it is definitely not power of 3 
     double x = log10(n)/log10(3);
     if(x==(int)x)
         return true;
     return false;
    }
};
