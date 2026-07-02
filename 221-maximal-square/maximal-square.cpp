class Solution {
    int dp[301][301];
    int rec(int i ,int j,vector<vector<char>>& matrix){


        if(i>=matrix.size()||j>=matrix[0].size() ){
            return 0;

        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int ans=0;
        if(matrix[i][j]=='1'){
            ans=max(ans,1+min(rec(i+1,j,matrix),min(rec(i,j+1,matrix),rec(i+1,j+1,matrix))));
        }
        return dp[i][j]=ans;
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int maxi=0;
      for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            maxi=max(maxi,rec(i,j,matrix));
        }
      }

        return maxi*maxi;

        
    }
};