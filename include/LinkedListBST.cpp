#include "LinkedListBST.h"
#include <iostream>

using namespace std;

LinkedListBST::LinkedListBST()
{
  root = nullptr;
}

bool LinkedListBST::isEmpty()
{
  if (root == nullptr)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void LinkedListBST::addBST(int key, int value)
{
  // create a new node
  Node *newNode = new Node;
  newNode->data.key = key;
  newNode->data.value = value;
  newNode->left = nullptr;
  newNode->right = nullptr;
  newNode->parent = nullptr;
  // if empty assign to the root
  if (isEmpty())
  {
    root = newNode;
  }
  else
  {
    // if not empty
    Node *current = root;
    Node *parent = nullptr;

    while (true)
    {
      // set parent to current on each iteration
      parent = current;
      // if key is less than current key, current = left node
      // until the current node is null
      if (key < current->data.key)
      {
        current = current->left;
        if (current == nullptr)
        {
          // parent's left node = new node
          // and newNode parent = parent
          parent->left = newNode;
          newNode->parent = parent;
          break;
        }
      }
      else
      {
        // if key is greater than current key, current = right node
        current = current->right;
        // parent's right node = new node
        // and newNode parent = parent
        if (current == nullptr)
        {
          parent->right = newNode;
          newNode->parent = parent;
          break;
        }
      }
    }
  }
}

void LinkedListBST::removeBST(int key)
{
  // if empty
  if (isEmpty())
  {
    // print empty
    cout << "The tree is currently empty.";
  }
  else
  {
    // if not empty
    Node *current = root;
    Node *parent = nullptr;
    bool isLeft = true;

    while (current->data.key != key)
    {
      parent = current;
      if (key < current->data.key)
      {
        isLeft = true;
        current = current->left;
      }
      else
      {
        isLeft = false;
        current = current->right;
      }
      if (current == nullptr)
      {
        cout << "The key " << key << " is not in the tree." << endl;
        return;
      }
    }
    // if no child
    if (current->left == nullptr && current->right == nullptr)
    {
      if (current == root)
      {
        root = nullptr;
      }
      else if (isLeft)
      {
        parent->left = nullptr;
      }
      else
      {
        parent->right = nullptr;
      }
    }
    // if one child
    else if (current->right == nullptr)
    {
      if (current == root)
      {
        root = current->left;
      }
      else if (isLeft)
      {
        parent->left = current->left;
      }
      else
      {
        parent->right = current->left;
      }
    }
    else if (current->left == nullptr)
    {
      if (current == root)
      {
        root = current->right;
      }
      else if (isLeft)
      {
        parent->left = current->right;
      }
      else
      {
        parent->right = current->right;
      }
    }
    // if two children
    else
    {
      Node *successor = current->right;
      Node *successorParent = current;

      while (successor->left != nullptr)
      {
        successorParent = successor;
        successor = successor->left;
      }
      if (current == root)
      {
        root = successor;
      }
      else if (isLeft)
      {
        parent->left = successor;
      }
      else
      {
        parent->right = successor;
      }
      successorParent->left = successor->right;
      successor->left = current->left;
      successor = current->right;
    }
  }
}

void LinkedListBST::printBST()
{
  if (isEmpty())
  {
    cout << "The tree is currently empty.";
  }
  else
  {
    Node *current = root;
    Node *parent = nullptr;
    Node *successor = nullptr;
    Node *successorParent = nullptr;

    while (current != nullptr)
    {
      if (current->left == nullptr)
      {
        cout << current->data.key << " ";
        current = current->right;
      }
      else
      {
        successor = current->left;
        successorParent = current;

        while (successor->right != nullptr && successor->right != current)
        {
          successorParent = successor;
          successor = successor->right;
        }
        if (successor->right == nullptr)
        {
          successor->right = current;
          current = current->left;
        }
        else
        {
          successor->right = nullptr;
          cout << current->data.key << " ";
          current = current->right;
        }
      }
    }
  }
}

bool LinkedListBST::searchBST(int key)
{
  // if BST is empty,
  // return false
  if (isEmpty())
  {
    return false;
  }
  else
  {
    Node *current = root;
    Node *parent = nullptr;
    bool isLeft = true;

    while (current->data.key != key)
    {
      parent = current;
      if (key < current->data.key)
      {
        isLeft = true;
        current = current->left;
      }
      else
      {
        isLeft = false;
        current = current->right;
      }
      if (current == nullptr)
      {
        return false;
      }
    }
    return true;
  }
}
