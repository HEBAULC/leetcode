vector<vector<int>> subsets(vector<int>& nums) {
        //n������0~max-1��2^n����ϣ�1<<n��ʾ2^n
        int n=nums.size();
        int max = 1<<n;
        vector<vector<int> >result;
        for(int i = 0;i < max;i++)
        {
            vector<int> temp;
            int idx = 0;
            int j = i;
            while(j > 0)
            {
                //�ж����һλ�Ƿ�Ϊ1����Ϊ1�򽫶�Ӧ�����뵽��ǰ�����
                if(j&1)
                {
                    temp.push_back(nums[idx]);
                }
                idx++;
                //�ж�����һλ�Ƿ�Ϊ1��Ҫ����
                j = j>>1;
            }
            //�ж�����һ����ϣ����뵽�������
            result.push_back(temp);
        }
        return result;

    }
