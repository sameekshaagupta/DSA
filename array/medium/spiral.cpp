class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int buttom=n-1;
        int left=0;
        int right=m-1;
        vector<int> ans;
        
        while(top<=buttom && left<=right){
            for(int i=left; i<=right; i++){
                ans.emplace_back(matrix[top][i]);
            }
            top++;
            
            for(int i=top; i<=buttom; i++){
                ans.emplace_back(matrix[i][right]);
            }
            right--;

            if(top<=buttom){
                for(int i=right; i>=left; i--){
                    ans.emplace_back(matrix[buttom][i]);
                }
                buttom--;
            }

            if(left<=right){
                for(int i=buttom; i>=top; i--){
                    ans.emplace_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return ans;
    
    }
};