//
//  BinTree.cpp
//  Sets and maps
//
//  Created by Filip Juristovski on 12/22/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "BinTree.hpp"

BinarySearchTree::BinarySearchTree(){
    root = NULL;
}

void BinarySearchTree::print() const{

    if (root != NULL) {
        root->print_nodes();
    }
    
}

void BinarySearchTree::insert(string value){
    
    TreeNode * node = new TreeNode;
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    
    if (root == NULL) {
        root = node;
    }else{
        root->insert_node(node);
    }
}

void TreeNode::insert_node(TreeNode * node){

    if (node->data < data) {
        if (left == NULL) {
            left = node;
        } else{
            left->insert_node(node);
        }
    } else if(node->data > data){
        if (right == NULL) {
            right = node;
        } else {
            right->insert_node(node);
        }
    }
}

int BinarySearchTree::count(string data) const{

    if (root == NULL) {
        return 0;
    } else if(root->find(data))
        return 1;
    else
        return 0;
    
}

void BinarySearchTree::erase(string data) {

    //find node to be removed

    TreeNode * to_be_removed = root;
    TreeNode * parent = NULL;
    bool found = false;
    
    while (!found && to_be_removed != NULL) {
        
        if (data < to_be_removed->data) {
            parent = to_be_removed;
            to_be_removed = to_be_removed->left;
        }else if( data > to_be_removed->data) {
            parent = to_be_removed;
            to_be_removed = to_be_removed->right;
        } else {
            found = true;
        }
    }

    if (!found) {
        return;
    }
    
    //to_be_removed contains data
    
    //either has 0 childs
    //has 1 child in left or right
    //has 2 children
    
    if (to_be_removed->left == NULL || to_be_removed->right == NULL) {
        
        //get child node
        TreeNode * child;
        if (to_be_removed-> left == NULL) {
            child = to_be_removed->right;
        } else {
            child = to_be_removed->left;
        }
        
        
        //connect parent to child
        
        if (parent == NULL) { //found in root
            child = to_be_removed;
        }
        else if (parent-> left == to_be_removed) {
            parent->left = child;
        } else {
            parent->right = child;
        }
        return;
    }
    
    //neither subtree is empty
    //find smallest element of right subtree
    
    TreeNode* smallest_parent = to_be_removed;
    TreeNode* smallest = to_be_removed->right;
    
    while (smallest-> left != NULL) {
        smallest_parent = smallest;
        smallest = smallest->left;
    }
    
    //smallest containts smallest value in right subtree
    
    //move contents, link up children
    
    to_be_removed->data = smallest ->data;
    
    if (smallest_parent == to_be_removed) {
        to_be_removed->right = smallest->right;
    } else {
        smallest_parent->left = smallest->right;
    }
}

bool TreeNode::find(string value) const {

    //if doing this must always have a return at the end for recursive
    if (value < data) {
        if (left == NULL) return false;
        else return left->find(data);
    } else if ( value > data){
        if (right == NULL) return false;
        else return right ->find(data);
    } else
        return true;
}

void TreeNode::print_nodes() const {

    if (left != NULL)
        left->print_nodes();
    
    cout << data << "\n";
    
    if(right != NULL)
        right->print_nodes();
    
}