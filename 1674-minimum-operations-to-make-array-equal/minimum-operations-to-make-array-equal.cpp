class Solution {
public:
    int minOperations(int n) {
        int e = n/2;
        if(n%2 == 0){
            return e*e;
        }
        return e * (e+1);
    }
};