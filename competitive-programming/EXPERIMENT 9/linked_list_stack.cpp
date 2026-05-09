using namespace std;

class StackNode {
public:
    int data;
    StackNode* next;
};

StackNode* newNode(int data) {
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

void push(StackNode** root, int data) {
    StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
}

int pop(StackNode** root) {
    if (*root == NULL) return -1;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    delete temp;
    return popped;
}

int main() {
    StackNode* root = NULL;
    push(&root, 10);
    push(&root, 20);
    cout << pop(&root) << " popped from stack
";
    return 0;
}

