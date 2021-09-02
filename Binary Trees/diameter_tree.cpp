#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left,*right;
};

struct Node* newNode(int data){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;

	return node;
}

int height (struct Node* node){
 if(node==NULL)
 	return 0;

 return 1+max(height(node->left),height(node->right));
}

int diameter(struct Node* tree){

	if(tree==NULL)
		return 0;

	int lheight=height(tree->left);
	int rheight= height(tree->right);

	int ldiameter=diameter(tree->left);
	int rdiameter=diameter(tree->right);

	return max(lheight+rheight+1,max(ldiameter,rdiameter));

}

int diameterOpt(struct Node* root,int*height){
	int lh=0,rh=0;

	int ldiameter=0,rdiameter=0;
   
   if(root==NULL)
   {
   	 *height =0;
   	 return 0;
   }

	ldiameter=diameterOpt(root->left,&lh);
	rdiameter=diameterOpt(root->right,&rh);

	*height=max(lh,rh)+1;

	return max(lh+rh+1,max(ldiameter,rdiameter));
}

int main()
{

    /* Constructed binary tree is
             1
            / \
           2   3
          / \
         4   5

    */
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int height=0;

    // Function Call
    cout << "Diameter of the given binary tree is " <<
        diameterOpt(root,&height);

    return 0;
}
