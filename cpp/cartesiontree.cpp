#include <iostream>
#include <stack>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
Node* buildCartesianTree(int arr[], int n) {
    stack<Node*> st;
    Node* root = NULL;
    for (int i = 0; i < n; i++) {
        Node* current = new Node(arr[i]);
        Node* lastPopped = NULL;
        while (!st.empty() && st.top()->data > arr[i]) {
            lastPopped = st.top();
            st.pop();
        }

        if (!st.empty()) {
            st.top()->right = current;
        } else {
            root = current;
        }

        current->left = lastPopped;
        st.push(current);
    }
    return root;
}
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {
    int arr[] = {5, 10, 40, 30, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = buildCartesianTree(arr, n);
    cout << "In-order traversal of Min Cartesian Tree:\n";
    inorder(root);
    return 0;
}