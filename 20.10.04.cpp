/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    bool isHeap(Node* tree) {
        // code here
            if (!tree) return true;

    queue<Node*> q;
    q.push(tree);
    bool nullSeen = false;

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Check left child
        if (curr->left) {
            if (nullSeen || curr->data < curr->left->data)
                return false;  // violates completeness or max property
            q.push(curr->left);
        } else {
            nullSeen = true; // mark that we saw a NULL
        }

        // Check right child
        if (curr->right) {
            if (nullSeen || curr->data < curr->right->data)
                return false;
            q.push(curr->right);
        } else {
            nullSeen = true;
        }
    }

    return true;
    }
};
