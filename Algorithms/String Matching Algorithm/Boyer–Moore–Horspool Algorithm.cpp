map<char, int> buildTable(string word) {
	map<char, int> mp;

	for (int i = 0; i < word.size() - 1; i++) {
		mp[word[i]] = word.size() - i - 1;
	}
	return mp;
}

int stringSearch(string text, string word) {
	int n = text.size(), m = word.size();
	int pos = 1;
	map<char, int> table = buildTable(word);
	while (pos <= n - m + 1) {
		int j = m;
		while (j >= 0) {
			if (word[j] == text[pos + j - 1]) {
				j--;
			} else {
				break;
			}
		}
		if (j == 0) {
			return pos;
		}
		int curVal = m;
		char curLet = text[pos + m - 1];
		if (table.find(curLet) != table.end()) {
			curVal = table[curLet];
		}
		pos += curVal;
	}
	return -1;
}
