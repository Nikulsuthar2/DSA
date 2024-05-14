#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> &maze, vector<vector<int>> visited){
    if((x >= 0 && x < maze.size()) && (y >= 0 && y < maze[0].size()) && visited[x][y] == 0 && maze[x][y] == 1)
        return true;
    else 
        return false;
}

void solve(vector<vector<int>> &maze, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path){
    if(x == maze.size()-1 && y == maze[0].size()-1){
        ans.push_back(path);
        return ;
    }
    visited[x][y] = 1;

    // Go Down
    int newX = x + 1;
    int newY = y; 

    if(isSafe(newX,newY,maze,visited)){
        path.push_back('D');
        solve(maze,ans,newX, newY,visited,path);
        path.pop_back();
    }

    // Go Up
    newX = x - 1;
    newY = y; 

    if(isSafe(newX,newY,maze,visited)){
        path.push_back('U');
        solve(maze,ans,newX, newY,visited,path);
        path.pop_back();
    }

    // Go Left
    newX = x;
    newY = y-1; 

    if(isSafe(newX,newY,maze,visited)){
        path.push_back('L');
        solve(maze,ans,newX, newY,visited,path);
        path.pop_back();
    }

    // Go Right
    newX = x;
    newY = y+1; 

    if(isSafe(newX,newY,maze,visited)){
        path.push_back('R');
        solve(maze,ans,newX, newY,visited,path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &maze, int srcX = 0, int srcY = 0){
    vector<string> ans;
    if(maze[0][0] == 0){
        return ans;
    }

    vector<vector<int>> visited(maze.size(),vector<int>(maze[0].size(),0));

    string path = "";
    solve(maze,ans,srcX,srcY,visited,path);
    return ans;
}

int main()
{
    vector<vector<int>> maze = {
        {1,1,1,1},
        {0,1,0,1},
        {1,1,0,1},
        {0,1,1,1}
    };

   

    /*
    up -> [x-1][y]
    down -> [x+1][y]
    left -> [x][y-1]
    right -> [x][y+1]
    */

   vector<string> paths = findPath(maze,1,3);

    for(string path : paths){
        cout<<path<<" ";
    }
}