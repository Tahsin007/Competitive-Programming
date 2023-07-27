class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    int x=i;
                    int y=j;
                    for(int k=0;k<row;k++){
                        if(matrix[x][k]!=0){
                            matrix[x][k]=-1;
                        }
                    }
                    for(int l=0;l<col;l++){
                        if(matrix[l][y]!=0){
                            matrix[l][y]=-1;
                        }
                        matrix[l][y]=0;
                    }
                }
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j];
            }
        }
    }
};
