#include <queue>

using namespace std;

int getQueueSize(queue<int> q) {
    int count = 0;
    while (!q.empty()) {
        q.pop();
        count++;
    }
    return count;
}

int main() {
    queue<int> q;
    for (int i=0; i<5; i++) q.push(i);
    cout << "Queue size: " << getQueueSize(q) << endl;
    return 0;
}

