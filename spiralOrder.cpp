// Given an integer A, generate a square matrix filled with elements from 1 to A*A in spiral order. The spiral order will be clockwise in nature starting from (0,0)
vector<vector<int > > spiralMatrixII(int n){
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = n-1;

    vector<vector<int>> ans(n,vector<int>(n,0));
    int val = 1;
    while(val <= n*n){
        for(int i = left; i<=right; i++){
            ans[top][i]=val++;
        }
        top++;
        for(int i=top; i<=bottom; i++){
            ans[i][right]=val++;
        }
        right--;
        for(int i=right; i>=left;i--){
            ans[bottom][i]=val++;
        }
        bottom--;
        for(int i=bottom; i>=top; i--){
            ans[i][left]=val++;
        }
        left++;
    }
    return ans;


}


int main(){
    int n;
    cin>>n;
    vector<vector<int> > result = spiralMatrixII(n);
    for(auto &row: result){
        for(auto &element: row){
            cout<<element<<" ";
        }
        cout<<"\n";
    } 
}