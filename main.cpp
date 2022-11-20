#include <iostream>
#include "./include/LinkedListBST.h"
#include "./include/LinkedListBST.cpp"

int main()
{
  LinkedListBST *bst = new LinkedListBST();
  cout << "*** Check Empty ***" << endl;
  cout << "Is the tree empty? " << bst->isEmpty() << endl;

  cout << endl
       << "*** Add to BST ***" << endl;
  cout << "Adding 10" << endl;
  bst->addBST(10, 10);
  cout << "Adding 5" << endl;
  bst->addBST(5, 5);
  cout << "Adding 15" << endl;
  bst->addBST(15, 15);
  cout << "Adding 3" << endl;
  bst->addBST(3, 3);
  cout << "Current tree: " << endl;
  bst->printBST();
  cout << endl
       << "Adding 7" << endl;
  bst->addBST(7, 7);
  cout << "Adding 12" << endl;
  bst->addBST(12, 12);
  cout << "Adding 17" << endl;
  bst->addBST(17, 17);
  cout << "Adding 1" << endl;
  bst->addBST(1, 1);
  bst->printBST();
  cout << endl;

  cout << endl
       << "*** Remove from BST ***" << endl;
  cout << "Current tree: " << endl;
  bst->printBST();
  cout << endl
       << "Removing 7" << endl;
  bst->removeBST(7);
  cout << "Removing 15" << endl;
  bst->removeBST(15);
  cout << "Removing 7 again" << endl;
  bst->removeBST(7); // should print The key 7 is not in the tree.
  cout << "Removing 5" << endl;
  bst->removeBST(5);
  cout << "Current tree: " << endl;
  bst->printBST();
  cout << endl;

  cout << endl
       << "*** Searching in BST ***" << endl;
  cout << "Search BST: " << endl;
  cout << "Does 10 exist in BST? " << bst->searchBST(10) << endl;
  cout << "Does 5 exist in BST? " << bst->searchBST(5) << endl;
  cout << "Current tree: " << endl;
  bst->printBST();
  cout << endl;

  return 0;
}