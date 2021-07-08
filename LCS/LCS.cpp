int LCS(int i , int j , vector<int>& nums1  , vector<int>& nums2){
        if(i == nums1.size()){
            return 0;
        }
        if(j == nums2.size()){
            return 0;
        }
        
        int &ret = mem[i][j];
        if(ret != -1){
            return ret;
        }
        if(nums1[i] == nums2[j]){
            ret = dp(i + 1 , j + 1 , nums1 , nums2) + 1;
        }else{
            int a = 0 , b = 0 , c = 0;
            a = dp(i     , j + 1 , nums1 , nums2);
            b = dp(i + 1 , j     , nums1 , nums2);
            c = dp(i + 1 , j + 1 , nums1 , nums2);
            ret = max(a , max(b , c));
        }
        return ret;
        
    }
    
