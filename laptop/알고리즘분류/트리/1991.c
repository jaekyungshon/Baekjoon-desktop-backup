// Ʈ�� ��ȸ
// ���� ��ȸ -> ���� ��ȸ -> ���� ��ȸ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;
typedef struct TreeNode{
    char data;
    struct TreeNode* left; // ���� �ڽ� 
    struct TreeNode* right; // ������ �ڽ�
}TreeNode;

TreeNode* create_node(){
    return (TreeNode*)malloc(sizeof(TreeNode));
}

// ������ȸ VLR
void preorder(TreeNode* root){
    if(root!=NULL){
        printf("%c",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// ������ȸ LVR
void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%c",root->data);
        inorder(root->right);
    }
}
// �Ŀܼ�ȸ LRV
void posorder(TreeNode* root){
    if(root!=NULL){
        posorder(root->left);
        posorder(root->right);
        printf("%c",root->data);
    }
}

int main(){
    int n;
    TreeNode* head;
    scanf("%d",&n);

    char data,left,right;
    scnaf("%c %c %c",&data,&left,&right);

    // Root ���� ���� �� ��� ������ �ʱ�ȭ
    TreeNode* first=create();
    first->data=data;

    TreeNode* tmp1=create();
    tmp1->data=left;
    tmp1->left=NULL;
    tmp1->right=NULL;

    TreeNode* tmp2=create();
    tmp2->data=right;
    tmp2->left=NULL;
    tmp2->right=NULL;

    first->left=tmp1;
    first->right=tmp2;
    head=first;

    for(int i=1; i<n; i++){
        scnaf("%c %c %c",&data,&left,&right);
        search(head,data,left,right);
    }
}