// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// private:
// 	void solve(vector<int> nums, vector<vector<int>> &ans, int index)
// 	{
// 		// base case (i sring ke bahar)
// 		if (index >= nums.size())
// 		{
// 			ans.push_back(nums);
// 			return;
// 		}
// 		for (int j = index; j < nums.size(); j++)
// 		{
// 			swap(nums[index], nums[j]);
// 			solve(nums, ans, index + 1);
// 			// backtrack
// 			swap(nums[index], nums[j]);
// 		}
// 	}

// public:
// 	vector<vector<int>> permute(vector<int> &nums)
// 	{
// 		vector<vector<int>> ans;
// 		int index = 0;
// 		solve(nums, ans, index);
// 		return ans;
// 	}
// };

// int main()
// {
// 	Solution solution;	
// 	vector<int> nums = {1, 2, 3}; 
// 	vector<vector<int>> permutations = solution.permute(nums);

// 	for (const auto &permutation : permutations)
// 	{
// 		for (int num : permutation)
// 		{
// 			cout << num << " ";
// 		}
// 		cout << endl;
// 	}
// }

// STRING PREMUTATION
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
    private:
        void solve(string str, vector<string>& ans, int index) {
            // base case (when index is out of range)
            if (index >= str.size()) {
                ans.push_back(str);
                return;
            }
            for (int j = index; j < str.size(); j++) {
                swap(str[index], str[j]);
                solve(str, ans, index + 1);
                // backtrack
                swap(str[index], str[j]);
            }
        }
    public:
        vector<string> permute(string str) {
            vector<string> ans;
            int index = 0;
            solve(str, ans, index);
            return ans;
        }
};

int main() {
    Solution solution;
    string str = "abc";
    vector<string> permutations = solution.permute(str);
    
    for (const auto& permutation : permutations) {
        cout << permutation << endl;
    }

    return 0;
}
