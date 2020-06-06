class Solution {
public:
for(int m=0;m<nums.size();m++){

            if(nums[m]==val)
            {
              nums.erase(nums.begin()+m);
                m--;
            }
        }    
    return nums.size();    
    }
    
    }
