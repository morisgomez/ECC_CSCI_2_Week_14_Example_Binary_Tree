/*
 Program Name: main.cpp
 Programmer: Moris Gomez
 Date: Tuesday 05/19/2024
 Version Control: 10.0
 About: Week 14, CSCI 2, Example.
 Description:
 
 Tinkering with the fundamentals/basics of Binary Trees.
 1. Created a binary tree without algorithm.
 2. Displayed full binary tree without alogirthm.
 3. Attached is a visual I used as notes/guidance.
 */
#include <iostream>
using namespace std;

//creating tree nodes via struct below:
struct TreeNode //Node template.
{
    int data = 0; //for each Node.
    TreeNode* right = NULL; //pointer to address of Node.
    TreeNode* left = NULL; //pointer to address of Node.
};

//creating tree nodes via class below:
class treeNode {
public:
    int data;
    treeNode* Left;
    treeNode* Right;
};

int main()
{
//A. CREATING BINARY TREE:
//1. Create Root Node:
    //create pointer for root Node.
    TreeNode* root;
    
    //make root point to a Node.
    root = new TreeNode;
    //root holds address of the new Node.
    
    //initialize root's data.
    root->data = 3;
    
//2. Create left node for root:
    //make new Node & make n point to it.
    TreeNode* n = new TreeNode;
    n->data = 2;
    
    //make root's left ptr point to new Node.
    root->left = n;
    
    //make n point to NULL for Right Node assignment.
    n = NULL;
    
//3. Create right node for root:
    //make new Node & make n point to it.
    n = new TreeNode;
    n->data = 7;
    
    //make root's right ptr point to new Node.
    root->right = n;
    
    //make n point to NULL for future usage.
    n = NULL;

//4. Create left leaf node for left child of Root:
    //make new Node & make n point to it.
    n = new TreeNode;
    n->data = 6;
    
    //assign root's left child's left pointer to n address.
    root->left->left = n;
    
    //make n point to NULL for future usage.
    n = NULL;
    
//5. Create right leaf node for left child of Root:
    //make new Node & make n point to it.
    n = new TreeNode;
    n->data = 5;
    
    //assign root's left child's right pointer to n address.
    root->left->right = n;
    
    //make n point to NULL for future usage.
    n = NULL;
    
//6. Create left leaf node for right child of Root:
    //make new Node & make n point to it.
    n = new TreeNode;
    n->data = 8;
    
    //assign root's right child's left pointer to n address.
    root->right->left = n;
    
    //make n point to NULL for future usage.
    n = NULL;
//7. Create right leaf node for right child of Root:
    //make new Node & make n point to it.
    n = new TreeNode;
    n->data = 1;
    
    //assign root's right child's right pointer to n address.
    root->right->right = n;
    
    //make n point to NULL for future usage.
    n = NULL;
    
/*/////////////////////SPACE///////////////////////////*/
/*/////////////////////SPACE///////////////////////////*/
/*/////////////////////SPACE///////////////////////////*/
/*/////////////////////SPACE///////////////////////////*/

//B. DISPLAYING EACH NODE AND ITS DATA, LEFT AND RIGHT:
//ENTIRE LEFT SIDE OF BINARY TREE:
//1. Node w/ data 3 //root.
    cout << "++ENTIRE LEFT SIDE OF BINARY TREE:" << endl;
    cout << "root node w/ address: " << root << endl;
    cout << "data: " << root->data << endl;
    cout << "left ptr: " << root->left << endl;
    cout << "right ptr: " << root->right << endl;
    cout << "------------" << endl;
//2. Node w/ data 2.
    cout << "left child node w/ address: " << root->left << endl;
    cout << "data: " << root->left->data << endl;
    cout << "left ptr: " << root->left->left << endl;
    cout << "right ptr: " << root->left->right << endl;
    cout << "------------" << endl;
//3. Node w/ data 6 //leaf.
    cout << "left leaf node w/ address: " << root->left->left << endl;
    cout << "data: " << root->left->left->data << endl;
    cout << "left ptr: " << root->left->left->left << endl; //null
    cout << "right ptr: " << root->left->left->right << endl; //null
    cout << "------------" << endl;
//4. Node w/ data 5. //leaf.
    cout << "right leaf node w/ address: " << root->left->right << endl;
    cout << "data: " << root->left->right->data << endl;
    cout << "left ptr: " << root->left->right->left << endl; //null
    cout << "right ptr: " << root->left->right->right << endl; //null
    cout << "------------" << endl;

//ENTIRE RIGHT SIDE OF BINARY TREE:
    cout << endl << "[=============================]" << endl << endl;
    cout << "++ENTIRE RIGHT SIDE OF BINARY TREE:" << endl;
//1. Node w/ data 3 //root.
    cout << "root node w/ address: " << root << endl;
    cout << "data: " << root->data << endl;
    cout << "left ptr: " << root->left << endl;
    cout << "right ptr: " << root->right << endl;
    cout << "------------" << endl;
//2. Node w/ data 7.
    cout << "right child node w/ address: " << root->right << endl;
    cout << "data: " << root->right->data << endl;
    cout << "left ptr: " << root->right->left << endl;
    cout << "right ptr: " << root->right->right << endl;
    cout << "------------" << endl;
//3. Node w/ data 8 //leaf.
    cout << "left leaf node w/ address: " << root->right->left << endl;
    cout << "data: " << root->right->left->data << endl;
    cout << "left ptr: " << root->right->left->left << endl; //null
    cout << "right ptr: " << root->right->left->right << endl; //null
    cout << "------------" << endl;
//4. Node w/ data 1. //leaf.
    cout << "right leaf node w/ address: " << root->right->right << endl;
    cout << "data: " << root->right->right->data << endl;
    cout << "left ptr: " << root->right->right->left << endl; //null
    cout << "right ptr: " << root->right->right->right << endl; //null
    return 0;
}
