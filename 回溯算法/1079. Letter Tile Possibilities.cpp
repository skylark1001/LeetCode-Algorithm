class Solution {
public:
	int ans = 0;
	int numTilePossibilities(string tiles) {
		map<char, int> mp;
		for (char c : tiles)
			mp[c]++;
		dfs(mp);
		return ans;
	}

	void dfs(map<char,int> mp) {
		for (map<char, int >::iterator it = mp.begin(); it != mp.end();it++) {
			if (it->second) {
				ans++;
				it->second--;
				dfs(mp);
				it->second++;
			}
		}
	}
};