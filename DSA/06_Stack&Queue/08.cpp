//circular queue


class CircularQueue {
public:
    int* arr;       // Pointer to dynamically allocated array for queue storage
    int size;       // Maximum size of the queue
    int front, rear; // Indices to track front and rear of the queue

    // Constructor to initialize the circular queue with given size
    CircularQueue(int n) {
        size = n;              // Set the maximum size
        arr = new int[size];   // Allocate array dynamically
        front = rear = -1;     // Initially queue is empty
    }

    // Function to insert an element into the circular queue
    bool enqueue(int value) {
        // Queue is full when next position of rear is front
        if ((rear + 1) % size == front) {
            cout << "queue is full\n"; // Display message
            return false;              // Cannot insert
        }

        // If inserting the first element, set front to 0
        if (front == -1) front = 0;

        // Move rear to the next position in circular way
        rear = (rear + 1) % size;

        // Insert the value at the new rear
        arr[rear] = value;

        return true; // Insertion successful
    }

    // Function to remove and return the front element of the queue
    int dequeue() {
        // If front is -1, the queue is empty
        if (front == -1) {
            cout << "queue is empty\n"; // Display message
            return -1;                  // Return invalid value
        }

        // Store the value to return
        int ans = arr[front];

        // If there is only one element, reset front and rear
        if (front == rear) {
            front = rear = -1;
        }
        else {
            // Move front to next circular position
            front = (front + 1) % size;
        }

        return ans; // Return the dequeued value
    }
};
