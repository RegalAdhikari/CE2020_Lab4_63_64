// creating a binary tree header file

// Path: include/LLBST.h

#ifndef LinkedListBST_h
#define LinkedListBST_h

struct Data
{
  int key;
  int value;
};

struct Node
{
  Data data;
  Node *left;
  Node *right;
  Node *parent;
};

class LinkedListBST
{

public:
  Node *root;

  LinkedListBST();

  bool isEmpty();
  void addBST(int key, int value);
  void removeBST(int key);
  void printBST();
  bool searchBST(int key);
};

#endif