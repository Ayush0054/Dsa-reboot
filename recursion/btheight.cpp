#include<bits/stdc++.h>
    using namespace std;
    class treeNode {
       public:
       int data;
       treeNode* left;
       treeNode* right;
       treeNode(int data){
        this-> data= data;
        this-> left=NULL;
        this-> right=NULL;
       }
    };

    treeNode* buildtree(treeNode* root){
        cout<<"enter the data"<<endl;
        int data;
        cin>>data;
        root = new treeNode(data);
        if(data==-1){
            return NULL;
        }
        cout<<"enter data for inserting in left "<<data <<endl;
        root->left = buildtree(root->left);
        cout<<"enter data for inserting in right "<<data<<endl;
        root->right = buildtree(root->right);
        return root;
    }
         void inorder(treeNode* root){              //lnr
        //base case
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
     }
    int height(treeNode* root){
        if(root== NULL){
            return 0;
        }
        int lefth= height(root->left);
        int righth= height(root->right);
        return 1+ max(lefth, righth);
    }
    int main(){
     treeNode* root =NULL;
      root = buildtree(root);
        cout<<"inorder: "<<endl;
     inorder(root);
     cout<<"height"<<endl;
     cout<<height(root)<<endl;
return 0;
}

