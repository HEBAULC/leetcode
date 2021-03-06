vector<vector<int>> subsets(vector<int>& nums) {
        //n个数有0~max-1即2^n中组合，1<<n表示2^n
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
                //判断最后一位是否为1，若为1则将对应数加入到当前组合中
                if(j&1)
                {
                    temp.push_back(nums[idx]);
                }
                idx++;
                //判断了这一位是否为1后要右移
                j = j>>1;
            }
            //判断完了一种组合，加入到结果集中
            result.push_back(temp);
        }
        return result;

    }
