#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
class Node{
    
    
    public:
    int data;
    Node* left; 
    Node* right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;

    }
};


    void preorder(Node* node){
        if(node==nullptr) return;
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);

    }
    void inorder(Node* node){
        if(node==nullptr) return;
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
    }
    void postorder(Node* node){
        if(node==nullptr) return;
        postorder(node->left);
        postorder(node->right);
        cout<<node->data<<" ";
    }

    Node* insert(Node* node, int data){
        if(node==nullptr){
            return new Node(data);
        }
        if(data<node->data){
            node->left=insert(node->left,data);
        }
        else{
            node->right=insert(node->right,data);
        }
        return node;
    }


int main(){
    Node* root=nullptr;
    root=insert(root,10);
    insert(root,5);
    insert(root,3);
    insert(root,7);
    insert(root,15);
    insert(root,12);
    insert(root,18);
    cout<<"Preorder traversal: "<<"\n";
    preorder(root);
    cout<<"\nInorder traversal: "<<"\n";
    inorder(root);
    cout<<"\nPostorder traversal: "<<"\n";
    postorder(root);

    return 0;
}