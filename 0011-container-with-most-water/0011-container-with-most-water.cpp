class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j;
        int width, heigt, max_vol = 0;
        int n = height.size();
        j=n-1;
        while(i<j){
            width = j-i;
            heigt = min(height[i], height[j]);
            int vol = width*heigt;
            max_vol = max(max_vol, vol);
            
            if(height[i]>height[j]){
                j--;
                
            }
            else if(height[i]<height[j]){
                i++;
            }
            else{
                i++;
                j--;
            }
            
        }
        return max_vol;
        
    }
};