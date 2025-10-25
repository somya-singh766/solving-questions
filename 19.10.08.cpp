#include <bits/stdc++.h> 
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // assume root is largest
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // recursively heapify affected subtree
    }
}

vector<int> buildHeap(vector<int> arr, int n)
{	
	for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    return arr;
	
}
