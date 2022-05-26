#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *left;
  Node *right;

  Node(){
    data = 0;
    left = NULL;
    right = NULL;
  }

  Node(int d){
    data = d;
    left = NULL;
    right = NULL;
  }
};

class tree{
  public:
  void postorder(Node *root){
    if(root == NULL){
      return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
  }

};

int main(){
  Node *root = new Node(1);
  Node *p1 = new Node(2);
  Node *p2 = new Node(3);
  Node *p3 = new Node(4);
  Node *p4 = new Node(5);
  Node *p5 = new Node(6);
  Node *p6 = new Node(7);
  Node *p7 = new Node(8);

  root->left = p1;
  root->right = p2;
  p1->left = p3; 
  p1->right = p4;
  p2->left = p5;
  p2->right = p6;

  tree t;
  t.postorder(root);

  int parent_a = -1;
  int parent_b = -1;

  int a, b;
  cout << "enter two numbers: ";
  cin >> a >> b;
  t.cousincheck(root, a, parent_a);
  t.cousincheck(root, b, parent_b);

  cout << parent_a << " " << parent_b << endl;


  int l1 = -1;
  int l2 = -1;
  t.level(root, a, 0, l1);
  cout << l1 << endl;
  t.level(root, b, 0, l2);
  cout << l2 << endl;

  if(parent_a == parent_b){
    cout << "not cousins" << endl;
  }
  else{
    if(l1 == l2){
      cout << "cousins" << endl;
    }
    else{
      cout << "not cousins" << endl;
    }
  }

  return 0;
}