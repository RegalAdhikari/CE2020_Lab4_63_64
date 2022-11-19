#include<iostream>

using namespace std;

int tree [10];
int leftNode = 0;
int rightNode = 0;
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
        /* code */  //I give up :(
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

// Driver Code
int main() 
{
    int count;
    int arr[10];
    isEmpty();
    cout<<"\nHow many nodes of the tree?";
    cin>>count;    
    for (int r = 0; r < count; r++)
    {
        cout<<"Enter Element "<<r<<":";
        cin>> arr[r];
    }
    //sorting kaam nai lagena
    // for (int i = 0; i < count; i++)
    // {
    //     int k = arr[i];
    //     int j = i;
    //     while (j>0 && arr[j-1]>k)
    //     {
    //         arr[j] = arr[j-1];
    //         j=j-1;
    //     }
    //     arr[j] = k;
        
    // }
    // cout<<"\nSorted array:";
    // for (int r = 0; r < count; r++)
    // {
    //     cout<<arr[r]<<",";
    // }
    root(arr[0]);
    int pp= 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i]<arr[pp])
        {
            set_left(arr[i],pp);
        }
        else
        {
            set_right(arr[i], pp);
        }
        
    }
    
    

    // set_left(1,0);
  print_tree();
  return 0;
}