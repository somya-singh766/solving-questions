int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	 if (n == 0) return 0;

        int i = 0; // index of last unique element
        for (int j = 1; j < n; j++) {
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
}
