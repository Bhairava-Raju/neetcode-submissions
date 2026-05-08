class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a = 0;
        int i = 32;
        while(i--){
            int b = n & 1;
            n = n>>1;
            a = a<<1;
            a = a | b;
        }
        return a;
    }
};
