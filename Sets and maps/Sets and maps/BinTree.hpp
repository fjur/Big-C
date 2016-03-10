//
//  BinTree.hpp
//  Sets and maps
//
//  Created by Filip Juristovski on 12/22/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef BinTree_hpp
#define BinTree_hpp

#include <stdio.h>


#include <iostream>
#include <string>

using namespace std;

class TreeNode
{
public:
    void insert_node(TreeNode* node);
    void print_nodes() const;
    bool find(string value) const;
private:
string data;
TreeNode* left;
TreeNode* right;
friend class BinarySearchTree;
    
};

class BinarySearchTree {
public:
    BinarySearchTree();
    void insert(string data);
    void erase(string data);
    int count(string data) const;
    void print() const;
private:
    TreeNode * root;

};


#endif /* BinTree_hpp */
