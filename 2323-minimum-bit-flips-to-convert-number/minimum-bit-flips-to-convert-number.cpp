class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xr=start^goal;
        return __popcount(xr);
    }
};