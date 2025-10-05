// BFS, DFS, InOrder, PreOrder, PostOrder, Inserting, Secharcing

#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int id;
    int value;
    node* left;
    node* right;
    node* parent;
};

class binaryTree{
public:
    node* root;
    
    binaryTree(){
        root = NULL;
    }
    node* createNewNode(int id, int value){
        node* newNode = new node;
        newNode->id = id;
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }
    
    // Binary Tree insersion childe/node
    void insersionBinaryTree(int id, int value){
        node* newNode = createNewNode(id,value);
        if(root == NULL){
            root = newNode;
            return;
        }
        queue<node*> q ;
        q.push(root); 
        while (!q.empty()){
            node* a = q.front();
            q.pop();
            if(a->left !=NULL ){
                q.push(a->left);
            } 
            else{
                a->left = newNode;
                newNode->parent = a;
                return;
            }
            if(a->right !=NULL ){
                q.push(a->right);
            } 
             else{
                a->right = newNode;
                newNode->parent = a;
                return;
            }
        }
    }

    // Serching on Binary tree
    void searchOnTree(node* a, int value){
        if(a == NULL) return;
        if(a->value == value){ 
            cout << a->id << " ";
        }
        searchOnTree(a->left, value); 
        searchOnTree(a->right, value);
    }


    // BFS Traversing Algorithm
    void BFS(){
        if(root == NULL) return;
            
        queue<node*> q ;
        q.push(root); 
        while (!q.empty()){
            node* a = q.front();
            q.pop();
             int p = -1;
            int r = -1;
            int l = -1;
            if(a->parent !=NULL ) p = a->parent->id;
            if(a->left !=NULL ){
                l = a->left->id;
                q.push(a->left);
            } 
            if(a->right !=NULL ){
                r = a->right->id;
                q.push(a->right);
            } 
            cout << "Node = " << a->id << "\t Parent = " << p << "\t Left = " << l << "\t Right = " << r << endl;
        }
    }

    // DFS Traversal Algorithm
    void DFS(node* a){
        if(a == NULL) return;
        cout << a->id << " ";
        DFS(a->left); 
        DFS(a->right); 
    }
    // Inorder DFS Traversal Algorithm
    void inOrder(node* a){
        if(a == NULL) return;
        inOrder(a->left);
        cout << a->id << " "; 
        inOrder(a->right); 
    }
    // preorder DFS Traversal Algorithm
    void preOrder(node* a){
        if(a == NULL) return;
        cout << a->id << " "; 
        preOrder(a->left);
        preOrder(a->right); 
    }
    // postorder DFS Traversal Algorithm
    void postOrder(node* a){
        if(a == NULL) return;
        cout << a->id << " "; 
        postOrder(a->left);
        postOrder(a->right); 
    }


};



int main(){
    binaryTree bt;
    bt.insersionBinaryTree(0,5);
    bt.insersionBinaryTree(1,10);
    bt.insersionBinaryTree(2,10);
    bt.insersionBinaryTree(3,9);
    bt.insersionBinaryTree(4,8);
    bt.insersionBinaryTree(5,5);
    bt.insersionBinaryTree(6,7);
    bt.BFS();
    cout << endl;
    bt.searchOnTree(bt.root, 5);
    cout << endl;
    bt.searchOnTree(bt.root, 10);
    return 0;
}
