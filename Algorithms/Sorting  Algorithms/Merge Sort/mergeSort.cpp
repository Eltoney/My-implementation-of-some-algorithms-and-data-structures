vector<int> mergeArr(vector<int> x, vector<int> y) {
	vector<int> v;
	int i = 0, j = 0;
	int n = x.size(), m = y.size();

	while (i < n && j < m) {
		if (x[i] < y[j]) {
			v.push_back(x[i++]);
		} else {
			v.push_back(y[j++]);
		}
	}
	for (; i < n; i++) {
		v.push_back(x[i]);
	}
	for (; j < m; j++) {
		v.push_back(y[j]);
	}
	return v;

}

vector<int> mergeSort(vector<int> v) {
	int n = v.size();
	if (n == 1)
		return v;
	vector<int> x, y;
	for (int i = 0; i < n / 2; i++)
		x.push_back(v[i]);
	for (int i = n / 2; i < n; i++)
		y.push_back(v[i]);
	return mergeArr(mergeSort(x), mergeSort(y));

}
