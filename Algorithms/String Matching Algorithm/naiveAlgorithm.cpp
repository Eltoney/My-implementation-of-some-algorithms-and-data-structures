int stringSearch(string text, string word) {
	int n = text.size(), m = word.size();
	int pos = 0;
	while (pos < n - m + 1) {
		int j = m;
		while (j > 0 && word[j] == text[pos + j - 1]) {
			j--;
		}
		if (j == 0) {
			return pos;
			/** 
			 * here we could print pos instead of 
			 * returning it then we will return 
			 * all the occurence of the words
			 **/
		}
		pos++;
	}

	return -1;
	//-1 indicate the word is not found
}
