class Solution {
public:
    int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
        sort(begin(hCuts),end(hCuts));
        sort(begin(vCuts),end(vCuts));
        auto max_h=max(hCuts[0],h-hCuts.back());
        auto max_v=max(vCuts[0],w-vCuts.back());
        
        for(auto m=0;m<hCuts.size()-1;m++){
            max_h=max(max_h,hCuts[m+1]-hCuts[m]);
        }
        
        for(auto m=0;m<vCuts.size()-1;m++){
            max_v=max(max_v,vCuts[m+1]-vCuts[m]);
        }
        
        return (long)max_h * max_v %1000000007;
    }
    
};
