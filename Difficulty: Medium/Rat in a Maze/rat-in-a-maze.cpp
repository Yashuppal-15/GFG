class Solution {
public:

    // isSafe() Function that will handle all the below mentioned possibilities:
    // Condition 1: Out of bound
    // Condition 2: Path Closed
    // Condition 3: Check if position is already visited
    bool isSafe(int newx, int newy, vector<vector<int>>& maze,
                int row, int col, vector<vector<bool> > &visited) {
        if (
            (newx >= 0 && newx < row) &&
            (newy >= 0 && newy < col) &&
            maze[newx][newy] == 1 &&
            visited[newx][newy] == false
        ) {
            return true;
        }
        else {
            return false;
        }
    }

    void printAllPath(vector<vector<int>>& maze, int row, int col,
                      int srcx, int srcy, string &output,
                      vector<vector<bool> > &visited,
                      vector<string> &ans) {

        // Base Case -> Destination Coordinates are [row-1] and [col-1]
        if (srcx == row - 1 && srcy == col - 1) {
            ans.push_back(output);
            return;
        }

        int newx, newy;

        // ✅ DOWN
        newx = srcx + 1;
        newy = srcy;
        if (isSafe(newx, newy, maze, row, col, visited)) {
            visited[newx][newy] = true;
            output.push_back('D');
            printAllPath(maze, row, col, newx, newy, output, visited, ans);
            output.pop_back();
            visited[newx][newy] = false;
        }

        // ✅ LEFT
        newx = srcx;
        newy = srcy - 1;
        if (isSafe(newx, newy, maze, row, col, visited)) {
            visited[newx][newy] = true;
            output.push_back('L');
            printAllPath(maze, row, col, newx, newy, output, visited, ans);
            output.pop_back();
            visited[newx][newy] = false;
        }

        // ✅ RIGHT
        newx = srcx;
        newy = srcy + 1;
        if (isSafe(newx, newy, maze, row, col, visited)) {
            visited[newx][newy] = true;
            output.push_back('R');
            printAllPath(maze, row, col, newx, newy, output, visited, ans);
            output.pop_back();
            visited[newx][newy] = false;
        }

        // ✅ UP
        newx = srcx - 1;
        newy = srcy;
        if (isSafe(newx, newy, maze, row, col, visited)) {
            visited[newx][newy] = true;
            output.push_back('U');
            printAllPath(maze, row, col, newx, newy, output, visited, ans);
            output.pop_back();
            visited[newx][newy] = false;
        }
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;

        int row = maze.size();
        int col = maze[0].size();

        if (maze[0][0] == 0) {
            return ans;
        }

        vector<vector<bool> > visited(row, vector<bool>(col, false));
        string output = "";

        visited[0][0] = true;
        printAllPath(maze, row, col, 0, 0, output, visited, ans);

        return ans;
    }
};
