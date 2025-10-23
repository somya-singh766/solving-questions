class myQueue {
vector<int> arr;
    int frontIndex;
    int rearIndex;
    int size;
    int capacity;
  public:
    myQueue(int n) {
        // Define Data Structures
        arr.resize(n);
        capacity = n;
        size = 0;
        frontIndex = 0;
        rearIndex = -1;
    }

    bool isEmpty() {
        // check if the queue is empty
        return size == 0;
    }

    bool isFull() {
        // check if the queue is full
         return size == capacity;
        
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
         if (isFull()) return;  // queue full
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = x;
        size++;
    }

    void dequeue() {
        // Removes the front element of the queue.
         if (isEmpty()) return;  // queue empty
        frontIndex = (frontIndex + 1) % capacity;
        size--;
    }

    int getFront() {
        // Returns the front element of the queue.
         if (isEmpty()) return -1;
        return arr[frontIndex];
    }

    int getRear() {
        // Return the last element of queue
        if (isEmpty()) return -1;
        return arr[rearIndex];
    }
};
