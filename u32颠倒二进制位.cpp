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
            m<<=1;//m������1λ��
            m = m|(n & 1);//m��ĩλ����Ϊn��ĩλ
            n>>=1;//n������1λ
        }
        return m;
}
