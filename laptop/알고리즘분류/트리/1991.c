// 트리 순회
// 전위 순회 -> 중위 순회 -> 후위 순회

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;
typedef struct TreeNode{
    char data;
    struct TreeNode* left; // 왼쪽 자식 
    struct TreeNode* right; // 오른쪽 자식
}TreeNode;

TreeNode* create_node(){
    return (TreeNode*)malloc(sizeof(TreeNode));
}

// 전위순회 VLR
void preorder(TreeNode* root){
    if(root!=NULL){
        printf("%c",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// 중위순회 LVR
void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%c",root->data);
        inorder(root->right);
    }
}
// 후외순회 LRV
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

    // Root ㄴ드 생성 및 헤드 포인터 초기화
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