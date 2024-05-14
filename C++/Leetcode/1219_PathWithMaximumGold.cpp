#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<vector<int>>& grid,int r, int c,int x, int y){
    if(x<0 || x>=r || y<0 || y>=c || grid[x][y] == 0){
        return 0;
    }

    int currG = grid[x][y];
    grid[x][y] = 0;
    int tMax = findMax(grid,r,c,x-1,y);
    int lMax = findMax(grid,r,c,x,y-1);
    int rMax = findMax(grid,r,c,x,y+1);
    int dMax = findMax(grid,r,c,x+1,y);
    grid[x][y] = currG;
    int MaxG = max(tMax,max(lMax,max(rMax,dMax)));

    return MaxG+grid[x][y];
}
int getMaximumGold(vector<vector<int>>& grid) {
    int r = grid.size();
    int c = grid[0].size();
    int maxGold = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(grid[i][j] != 0){
                maxGold = max(maxGold, findMax(grid,r,c,i,j));
            }
        }
    }
    return maxGold;
}

int main(){
    vector<vector<int>> grid = {{0,6,0},{5,8,7},{0,9,0}};
    cout<<"maxGold: "<<getMaximumGold(grid);
    //getMaximumGold(grid);
}