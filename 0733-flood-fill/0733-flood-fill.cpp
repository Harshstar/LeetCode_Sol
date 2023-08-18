class Solution {
public:

    bool valid(int i, int j, vector<vector<int>>& image, int n, int m,int newcol)
    {
        if(i>=0 && i<n && j>=0 && j<m && image[i][j]==newcol)
            return true;

        return false;
    }

    void dfs(int i, int j, int color, vector<vector<int>>& image, int n, int m,int newcol)
    {
        image[i][j]=color;
        if(valid(i+1 , j , image , n , m, newcol))
            dfs(i+1 , j , color, image, n , m, newcol );
        if(valid(i-1 , j , image , n , m, newcol))
            dfs(i-1 , j , color, image, n , m,newcol );
        if(valid(i , j+1 , image , n , m, newcol))
            dfs(i , j+1 , color, image, n , m, newcol );
        if(valid(i , j-1 , image , n , m, newcol))
            dfs(i , j-1 , color, image, n , m, newcol );
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int newcol=image[sr][sc];
        
        if(newcol==color)
            return image;

        dfs(sr, sc, color,image, n,m, newcol);
        return image;
    }
};