#include<bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	Node *left, *right;
};

int height(Node* root) {
	if(root == nullptr) {
		return 0;
	}

	return 1 + max(height(root->right), height(root->left));
}

Node* insert_bst(Node* root, int key) {
	if(root == nullptr) {
		root = new Node();
		root->data = key;
		root->left = root->right = nullptr;
		return root;
	}

	if(root->data > key) 
		root->left = insert_bst(root->left, key);
	else
		root->right = insert_bst(root->right, key);

	return root;
}

void inorder(Node* root) {
	if(root!=nullptr) {
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
}

void preorder(Node* root) {
	if(root!=nullptr) {
		cout<<root->data<<"  ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node* root) {
	if(root!=nullptr) {
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"  ";
	}
}


void printLevel(Node* root, int level) {
	if(!root)
		return;
	if(level == 0) {
		cout<<root->data<<" ";
		return ;
	}

	printLevel(root->left, level-1);
	printLevel(root->right, level-1);
	return ;
}

void levelorder(Node* root) {
	int ht = height(root);

	for(int i =0; i < ht; i++) {
		printLevel(root, i);
	}
}

Node* findMinValue(Node* root) {

	while(root->left) {
		root = root->left;
	}

	return root;
}

// Inorder Bnary Tree
Node* inorderSuccBT(Node* root, Node* n) {
	if(n->right) {
		Node* succ = findMinValue(n->right);
		return succ;
	}

	Node* succ = nullptr;

	while(root) {
		if(root->data > n->data) {
			succ = root;
			root = root->left;
		} else if(root->data < n->data) {
			root = root->right;
		} else {
			break;
		}
	}

	return succ;
}

int main() {
	int n = 9;
	int a[9] = {5,3,2,4,1,6,8,7,9};

	Node *root = nullptr;

	for(int key : a) {
		root = insert_bst(root, key);
	}

	cout<<"height of tree is "<<height(root)<<endl;
	inorder(root);
	cout<<"\n";
	preorder(root);
	cout<<"\n";
	postorder(root);
	cout<<"\n";

	Node* t1 = inorderSuccBT(root, (root->left)->right);
	Node* t2 = inorderSuccBT(root, root->right);
	Node* t3 = inorderSuccBT(root, ((root->left)->left)->left);
	
	cout<<t1->data<<" "<<t2->data<<" "<<t3->data<<endl;

	cout<<endl;
}