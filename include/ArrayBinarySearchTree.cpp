#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

struct node
{
   int data;
   struct node* left;
   struct node* right;
};

void inorder(struct node* node)
{
    if(node){
        inorder(node->left);
        cout<< node->data<< " ";
        inorder(node->right);
    }
}