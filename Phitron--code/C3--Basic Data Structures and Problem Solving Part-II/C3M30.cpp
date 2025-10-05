#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* left;
    node* right;
};
class binarySearchTree{
public:
    node* root;
    binarySearchTree(){
        root = NULL;
    }

    node* createNewNode(int value){
        node* newNode = new node;
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    
    // BFS Traversing Algorithm
    void BFS(){
        if(root == NULL) return;
            
        queue<node*> q ;
        q.push(root); 
        while (!q.empty()){
            node* a = q.front();
            q.pop();
            int r = -1;
            int l = -1;
            if(a->left !=NULL ){
                l = a->left->value;
                q.push(a->left);
            } 
            if(a->right !=NULL ){
                r = a->right->value;
                q.push(a->right);
            } 
            cout << "Node = " << a->value << "\t Left = " << l << "\t Right = " << r << endl;
        }
    }

    void insertOnBST(int value){
        node* newNode = createNewNode(value);
        if(root == NULL){
            root = newNode;
            return;
        }
        node* current = root;
        node* priv = NULL;
        while (current != NULL){
            if(newNode->value > current->value){
                priv = current;
                current = current->right;
            }
            else{
                priv = current;
                current = current->left;
            }
        }
        if(newNode->value > priv->value){
            priv->right = newNode;
        }
        else{
            priv->left = newNode;
        }
        
    }

    // Searching on Binary Search Tree
    bool searchOnBST(int item){
        node* curent = root;
        while (curent != NULL){
            if(item < curent->value){
                curent = curent->left;
            }
           else if(item > curent->value){
                curent = curent->right;
            }
            else{
                return true;
            }
        }
        return false;
    }

    // Deletion on Binary search tree
    void deleteOnBST(int value){
        node* curent = root;
        node* priv = NULL;
        while(curent !=NULL){
            if(value < curent->value){
                priv = curent;
                curent = curent->left;
            }
           else if(value > curent->value){
                priv = curent;
                curent = curent->right;
            }
            else{
                break;
            }
        }
        if(curent == NULL){
            cout << " Value is not present oin BST \n";
            return;
        }
        // Case 1: Both Child is NULL
        if(curent->left == NULL && curent->right == NULL){
            if(priv->left != NULL && priv->left->value == curent->value){
                priv->left = NULL;
            }
            else{
                priv->right = NULL;
            }
            delete curent;
            return;
        }
        // Case 2: node has only one child
        if(curent->left == NULL && curent->right != NULL){ 
            if(priv->left != NULL && priv->left->value == curent->value){
                priv->left = curent->right;
            }
            else{
                priv->right = curent->right;
            }
            delete curent;
            return;
        }
        // Case 2: node has only one child
        if(curent->left != NULL && curent->right == NULL){ 
            if(priv->left != NULL && priv->left->value == curent->value){
                priv->left = curent->left;
            }
            else{
                priv->right = curent->left;
            }
            delete curent;
            return;
        }
        //Case 3: Node has 2 child
        node* tamp = curent->right;
        while (tamp->left != NULL){
            tamp = tamp->left;
        }
        int saved = tamp->value;
        deleteOnBST(saved);
        curent->value = saved;
    }







};

int main(){

    binarySearchTree bt;
    bt.insertOnBST(6);
    bt.insertOnBST(4);
    bt.insertOnBST(3);
    bt.insertOnBST(5);
    bt.insertOnBST(7);
    bt.insertOnBST(8);
    bt.deleteOnBST(6);
    bt.BFS();
    cout << bt.searchOnBST(4) << endl;
    cout << bt.searchOnBST(12321) << endl;
    
    return 0;
}


