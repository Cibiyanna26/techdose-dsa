class Solution
{
public:
    vector<int> generateRow(int rowNum)
    {
        vector<int> row = {1};
        int res = 1;
        for (int i = 1; i < rowNum; i++)
        {
            res = res * (rowNum - i);
            res = res / i;
            row.push_back(res);
        }
        return row;
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        for (int i = 1; i <= numRows; i++)
        {
            res.push_back(generateRow(i));
        }
        return res;
    }
};