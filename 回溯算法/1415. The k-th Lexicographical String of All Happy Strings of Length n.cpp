class Solution {
public:
	vector<string> res;
	string path;
    int c = 0;
	string getHappyString(int n, int k) {
		dfs(n, k);
		if (k == res.size())
			return res[k - 1];
		return "";
	}

	void dfs(int n, int k) {
        if(c==k)
            return;
		if (n == 0) {
            c++;
			res.push_back(path);
			return;
		}

		for (char j = 'a'; j <= 'c';j++) {
			if (path.size() && j == path.back())
				continue;

			path += j;
			dfs(n - 1, k);
			path = path.substr(0, path.length() - 1);
		}
	}
};