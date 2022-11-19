#include<iostream>

using namespace std;

int tree [10];
int leftNode = 0;
int rightNode = 0;
int set_right(int key, int parent);
int root(int key)
{
    if (tree[0] != '\0')
    {
        cout << "Tree already had root.";
        /* code */
    }
    else
        tree[0] = key;
    return 0; 
}

void isEmpty()
{
    if(tree[0] == '\0')
    {
        cout<<"The tree is currently Empty.";
    }
}
// My code
int new_Node(int key, int parent){
    if (key >=parent)
    {
        /* code */
    }
    return 0;
}

int set_left(int key, int parent) {
  if (tree[parent] == '\0')
    cout << "\nCan't set child at "<< (parent * 2) + 1<< " , no parent found";
    
  else
    tree[(parent * 2) + 1] = key;

  return 0;
}
 
int set_right(int key, int parent) {
  if (tree[parent] == '\0')
    cout << "\nCan't set child at "<< (parent * 2) + 2<< " , no parent found";
  else
    tree[(parent * 2) + 2] = key;
  return 0;
}
 
int print_tree() {
  cout << "\n";
  for (int i = 0; i < 10; i++) {
    if (tree[i] != '\0')
      cout << tree[i];
    else
      cout << "-";
  }
  return 0;
}
void removeBST(int key)
{
  int replacementKey = key;
  for (int i = 0; i < 10; i++)
  {
    if (tree[i] == key)
    {

      tree[i] = NULL;
      break;
    }
    else if(i==9)
    {
      cout<<"The given key doesn't exist in Tree";
    }
  }  
}
void searchBST()
{
  int searchKey;
  cout<<"Enter a key to search: ";
  cin>>searchKey;
  for (int i = 0; i < 10; i++)
  {
    if (tree[i] == searchKey)
    {
      cout<<"The key exists at the node :"<< i;
      break;
    }
    else if(i==9) {
      cout<<"The key doesn't exists in the tree";
      break;
    }
  }  
}
// Driver Code
int main() 
{
    int count;
    int arr[10];
    int deleteKey;
    isEmpty();
    cout<<"\nHow many nodes of the tree?";
    cin>>count;    
    for (int r = 0; r < count; r++)
    {
        cout<<"Enter Element "<<r<<":";
        cin>> arr[r];
    }

    root(arr[0]);
    int pp= 0;
    for (int i = 1; i < count; i++)
    {
      // if (i>2)
      //   {
      //     pp++;
      //   }
      if (arr[i]<arr[pp])
        {
          if (tree[1]!='\0' && arr[i]<tree[1])
          {
            set_left(arr[i],1);  
          }
          else if (tree[1]!='\0' && arr[i]>tree[1])
          {
            set_right(arr[i],1);  
          }
          else
            set_left(arr[i],0);
        }
      else
        {
          if (tree[2]!='\0' && arr[i]>tree[2])
          {
            set_right(arr[i],2);            
          }
          else if (tree[2]!='\0' && arr[i]<tree[2])
          {
            set_left(arr[i],2);  
          }
          else
          set_right(arr[i],0);
        }   
    }

  print_tree();
  searchBST();
  cout<<"\nKey to delete: ";
  cin>>deleteKey;
  removeBST(deleteKey);
  print_tree();
  return 0;
}