class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> bits;
        for(int i=0;i<32;i++)
        {
            bits.push_back(n%2);
            n/=2;
        }
        uint32_t m=0;
        for(int i=0;i<32;i++)
        {
            m=2*m+bits[i];
        }
        return m;
    }
};

uint32_t reverseBits(uint32_t n) {
        uint32_t m=0;
        for(int i=0;i<32;i++){
            m<<=1;//m向左移1位；
            m = m|(n & 1);//m的末位设置为n的末位
            n>>=1;//n向右移1位
        }
        return m;
}
