#include <iostream>
#include "./include/LinkedListBST.h"
#include "./include/LinkedListBST.cpp"

int main()
{
  LinkedListBST *bst = new LinkedListBST();
  cout << "Is the tree empty? " << bst->isEmpty() << endl;
  cout << "Add to BST: " << endl;
  bst->addBST(10, 10);
  bst->addBST(5, 5);
  bst->addBST(15, 15);
  bst->addBST(3, 3);
  bst->addBST(7, 7);
  bst->addBST(12, 12);
  bst->addBST(17, 17);
  bst->addBST(1, 1);
  bst->printBST();
  cout << endl;

  cout << "Remove from BST: " << endl;
  bst->removeBST(7);
  bst->removeBST(15);
  bst->removeBST(7);
  bst->removeBST(5);
  bst->printBST();
  cout << endl;

  cout << "Search BST: " << endl;
  cout << "Does 10 exist in BST? " << bst->searchBST(10) << endl;
  cout << "Does 5 exist in BST? " << bst->searchBST(5) << endl;
  bst->printBST();
  cout << endl;

  return 0;
}