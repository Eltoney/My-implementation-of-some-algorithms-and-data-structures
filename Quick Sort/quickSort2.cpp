void merge(vector<int> &x, int al, int ar, vector<int> &y, int bl, int br,
		vector<int> &z) {

	int i = al, j = bl;
	for (int k = 0; k <= ar - al + br - bl + 1; k++) {
		if (i > ar) {
			z.push_back(y[j++]);
		} else if (j > br) {
			z.push_back(x[i++]);
		} else {
			if (x[i] < y[j]) {
				z.push_back(x[i++]);
			} else {
				z.push_back(y[j++]);
			}
		}
	}
}

void mergeSort(vector<int> &v, int al, int ar) {
	if (ar > al) {
		int mid = (ar + al) / 2;
		mergeSort(v, al, mid);
		mergeSort(v, mid + 1, ar);

		vector<int> res;
		merge(v, al, mid, v, mid + 1, ar, res);

		for (int i = 0; i < ar - al + 1; i++) {
			v[al + i] = res[i];
		}
	}
}

