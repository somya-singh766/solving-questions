Operations on PriorityQueue
Difficulty: EasyAccuracy: 76.96%Submissions: 13K+Points: 2
Given an integer array a[], your task is to add these elements to the PriorityQueue. Also, given an array b[], the task is to check if the given element is present in the PriorityQueue or not.
If the element is present, then 1 is printed by the driver code, after that the max element of priority queue is printed. Then the driver code deletes the max element.
Note: Here the driver code has implemented the PriorityQueue as a max-heap.

Example:

Input: a[] = [1, 2, 3, 4, 5, 2, 3, 1], b[] = [1, 3, 2, 9, 10]
Output: 1 5 1 4 1 3 -1 -1
Explanation: After inserting elements present in A, when we find B[0]=1, which is present, so 1 gets printed, and then the top element of the PriorityQueue which is 5 gets printed, and then it gets deleted. Similarly, when element is not present, just -1 is printed.
Input: a[] = [1, 2, 3, 4], b[] = [1, 10]
Output: 1 4 -1
Explanation: After inserting elements present in A, when we find B[0]=1, which is present, so 1 gets printed, and then the top element of the PriorityQueue which is 4 gets printed, and then it gets deleted. Similarly, when element is not present, just -1 is printed.
Constraints:
1 <= a.size() <= 103
1 <= b.size() <= 103
