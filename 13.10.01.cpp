// Problem:Reversing the array
// Link : https://www.naukri.com/code360/problems/reverse-the-array_1262298


void reverseArray(vector<int> &arr , int m) {
    
    int start = m + 1;
    int end = arr.size() - 1;

   
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }    	
}
