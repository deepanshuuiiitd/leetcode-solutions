/*
 * Problem: Search a 2D Matrix II
 * Problem ID: 240
 * Difficulty: Medium
 * Language: C++
 * Runtime: 53 ms
 * Memory: 18.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-03
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0;
        int col = n - 1;

        while (row < m && col >= 0)
        {
            if (matrix[row][col] == target)
                return true;

            else if (matrix[row][col] > target)
                col--;

            else
                row++;
        }

        return false;
    }
};