#include<vector>
#include<iostream>
using namespace std;
template <typename T>

class TreeNode{

public:

T data;
vector<TreeNode<T>*> children;

TreeNode(T data){
this->data=data;
}

};

TreeNode<int>* takeInput(){

int rootData;
cout<<"enter the root data";
cin>>rootData;
TreeNode<int>* root=new TreeNode<int>(rootData);
int n;
cout<<"enter the no. of child";
cin>>n;

for(int i=0;i<n;i++){
TreeNode* child=takeInput();
root->children.push_back(child);
} 

return root;
}

void print(TreeNode<int>* root){

if(root==NULL){
return;
}

cout<<root->data<<" : ";
for(int i=0;i<root->children.size();i++){
cout<<root->children[i]->data<<",";
}
cout<<endl;

for(int i=0;i<root->children.size();i++){
print(root->children[i]);
}

}

int main(){

/*TreeNode<int>* root=new TreeNode<int>(1);
TreeNode<int>* node1=new TreeNode<int>(2);
TreeNode<int>* node2=new TreeNode<int>(3);
root->children.push_back(node1);
root->children.push_back(node2);
*/

TreeNode<int>* root=takeInput();
print(root);

return 0;
}
