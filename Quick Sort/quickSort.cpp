void numSwap(vector<int> &v, int i, int j) {
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void quickSort(vector<int> &v, int al, int ar) {
	if (al < ar) {
		int pivot = v[al];
		int i = al, j = ar + 1;
		while (true) {
			while (v[++i] < pivot && i < ar)
				;
			while (v[--j] > pivot && j > al)
				;
			if (i < j) {
				numSwap(v, i, j);
			} else {
				break;
			}
		}
		numSwap(v, j, al);
		quickSort(v, al, j - 1);
		quickSort(v, j + 1, ar);
	}
}
