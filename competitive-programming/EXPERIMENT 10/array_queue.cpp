using namespace std;

struct Queue {
    int front, rear, capacity;
    int* queue;
    Queue(int c) {
        front = rear = 0;
        capacity = c;
        queue = new int[capacity];
    }
    ~Queue() { delete[] queue; }
    void queueEnqueue(int data) {
        if (capacity == rear) return;
        queue[rear] = data;
        rear++;
    }
    void queueDequeue() {
        if (front == rear) return;
        for (int i = 0; i < rear - 1; i++) {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
    void queueDisplay() {
        for (int i = front; i < rear; i++) cout << queue[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q(4);
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueDisplay();
    q.queueDequeue();
    q.queueDisplay();
    return 0;
}

