/*#include<iostream>
using namespace std ;

class Node {
    public:
    int key ;
    Node * left;
    Node * right ;

    Node (int item){
        key = item;
        left = NULL;
        right =NULL;

    }

};

Node * insert(Node * node ,int key){
    if (node == NULL)
    return new Node (key);

    if (node -> key == key)
    return node ;

    if (node -> key < key )
    node-> right = insert (node->right ,key);
    else 
    node->left = insert(node -> left , key);

    return node;
}

void inorder(Node * root){
    if (root !=NULL){
        inorder(root->left);
        cout << root -> key << " ";
        inorder(root -> right);

    }
}

void preorder(Node * root){
if (root != NULL ){
    preorder(root->left);
    cout << root->key << " ";
    preorder (root -> right);

   }
}

void postorder(Node * root){
    if (root != NULL){
        postorder(root->left);
        cout << root ->key << " ";
        postorder(root-> right);

    }
}

Node* SearchNode(Node * root ,int key)
{
    if (root ==NULL || root -> key ==key)
    return root;

    if(root -> key < key)
    return SearchNode (root-> right ,key);
    return SearchNode (root -> left ,key);

}


int main(){
    Node* root = new Node(100);
    root = insert (root ,50);
    root = insert (root,150);
    root = insert(root,20);
    root = insert(root,70);
    root = insert (root,120);
    root = insert ( root,180);

    cout << " inorder traversal : ";
    inorder(root);
    cout<<endl;
     
     cout << " preorder traversal : ";
     preorder(root);
     cout <<endl;

     cout << " postorder traversal : ";
     postorder(root);
     cout<<endl;

     Node * tobefound = SearchNode(root,120);
if (tobefound != NULL) {
cout << "Node"<<" "<<tobefound->key<<" "<<"found in the BST." << endl;
}
else {
cout <<" not found in the BST." << endl;
}
return 0;
}*/

#include<iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int item) {
        key = item;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* node, int key) {
    if (node == NULL)
        return new Node(key);

    if (node->key == key)
        return node;

    if (node->key < key)
        node->right = insert(node->right, key);
    else
        node->left = insert(node->left, key);

    return node;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root != NULL) {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

Node* SearchNode(Node* root, int key) {
    if (root == NULL || root->key == key)
        return root;

    if (root->key < key)
        return SearchNode(root->right, key);
    return SearchNode(root->left, key);
}

int main() {
    Node* root = new Node(100);
    root = insert(root, 50);
    root = insert(root, 150);
    root = insert(root, 20);
    root = insert(root, 70);
    root = insert(root, 120);
    root = insert(root, 180);

    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preorder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postorder(root);
    cout << endl;

    // Perform exactly two search attempts
    int searchKeys[] = {120, 70};  // Search for 120 and 70
    for (int i = 0; i < 2; i++) {
        Node* tobefound = SearchNode(root, searchKeys[i]);
        if (tobefound != NULL) {
            cout << "Node " << tobefound->key << " found in the BST." << endl;
        } else {
            cout << "Node " << searchKeys[i] << " not found in the BST." << endl;
        }
    }

    return 0;
}
