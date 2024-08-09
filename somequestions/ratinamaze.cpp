// #include <bits/stdc++.h> 
// void solve(string path,vector<string>&answer,int x,int y,vector<vector<int>>arr,int n,vector<vector<int>>visited){
// if(x==n-1&&y==n-1){
// answer.push_back(path);
// return;
// }
// visited[x][y] = 1;
//     // cout<<str;
// //down
// // x>=0&&x<=n-1&&y<=n-1&&y>=0
// if(x+1<=n-1&&x+1>=0&&y<=n-1&&y>=0&&arr[x+1][y]==1&&visited[x+1][y]==0){
//     path.push_back('D');
//     solve(path,answer,x+1,y,arr,n,visited);
//     path.pop_back();
// }
// //left
// if(y-1>=0&&y-1<=n-1&&x>=0&&x<=n-1&&arr[x][y-1]==1&&visited[x][y-1]==0){
//     path.push_back('L');
//     solve(path, answer, x, y-1, arr, n,visited);
//     path.pop_back();
// }
// //right
// if(x<=n-1&&x>=0&&y+1>=0&&y+1<=n-1&&arr[x][y+1]==1&&visited[x][y+1]==0){
//     path.push_back('R');
//     solve(path,answer,x,y+1,arr,n,visited);
//     path.pop_back();
// // cout<<path<<endl;
// }
// //up
// if (x-1<=n-1&&x - 1 >= 0&&y<=n-1&&y>=0&& arr[x -1][y] == 1&&visited[x-1][y]==0) {
//     path.push_back('U');
//     solve(path,answer,x-1,y,arr,n,visited);
//     path.pop_back();
// }
// visited[x][y] = 0;
// // return;
// }
// vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//     int x = 0;
//     int y= 0;
//     string path;
//     vector <string> answer;
//     if(arr[n-1][n-1]==0){
//         return answer;
//     }
//     if(arr[n-2][n-1]==0&&arr[n-1][n-2]==0){
//         return answer;
//     }
//     vector <vector<int>> visited = arr;
//     for(int i =0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             visited[i][j] = 0;
//         }
//     }
//     solve(path,answer, x, y, arr,  n, visited);
//     sort(answer.begin(),answer.end());
//     // vector <string> s;
//     return answer;
// }   