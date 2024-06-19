#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution
{
private:
	bool issafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m)
	{
		if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
		{
			// within matrix bounds, not visited, and is a valid path cell
			return true;
		}
		else
		{
			return false;
		}
	}

	void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
	{
		// base case
		if (x == n - 1 && y == n - 1)
		{
			ans.push_back(path);
			return;
		}

		visited[x][y] = 1;

		// choices: Down, Left, Right, Up
		// Down
		int newx = x + 1;
		int newy = y;
		if (issafe(newx, newy, n, visited, m))
		{
			path.push_back('D');
			solve(m, n, ans, newx, newy, visited, path);
			path.pop_back();
		}

		// Left
		newx = x;
		newy = y - 1;
		if (issafe(newx, newy, n, visited, m))
		{
			path.push_back('L');
			solve(m, n, ans, newx, newy, visited, path);
			path.pop_back();
		}

		// Right
		newx = x;
		newy = y + 1;
		if (issafe(newx, newy, n, visited, m))
		{
			path.push_back('R');
			solve(m, n, ans, newx, newy, visited, path);
			path.pop_back();
		}

		// Up
		newx = x - 1;
		newy = y;
		if (issafe(newx, newy, n, visited, m))
		{
			path.push_back('U');
			solve(m, n, ans, newx, newy, visited, path);
			path.pop_back();
		}

		visited[x][y] = 0;
	}

public:
	vector<string> findPath(vector<vector<int>> &m, int n)
	{
		vector<string> ans;

		// if source is 0
		if (m[0][0] == 0)
		{
			return ans;
		}

		int srcx = 0;
		int srcy = 0;

		// visited vector
		vector<vector<int>> visited(n, vector<int>(n, 0));

		string path = "";
		solve(m, n, ans, srcx, srcy, visited, path);
		sort(ans.begin(), ans.end());
		return ans;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<vector<int>> m(n, vector<int>(n, 0));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> m[i][j];
			}
		}
		Solution obj;
		vector<string> result = obj.findPath(m, n);
		sort(result.begin(), result.end());
		if (result.size() == 0)
			cout << -1;
		else
			for (int i = 0; i < result.size(); i++)
			{
				cout << result[i] << " ";
				cout << endl;
			}
	}
	return 0;
}


// i/p
//  test case(n) : 2
//  no of rows and col : 4
//  input the matrix: 1 0 0 0
// 				   1 1 0 0
// 				   1 1 0 1
// 				   0 1 1 1