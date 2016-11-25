/*tree.c*/

#include "tree.h"
#include "stdio.h"
#include "stdlib.h"

//prototypes
struct node* init_tree();
struct node* create_node(TYPE);
void free_tree(struct node*);
void add_node(struct node*, TYPE);

int main(){
   struct node* bst = init_tree();

   add_node(bst, 12);



   printf("hello\n");


   free_tree(bst);


}


struct node* init_tree(){
   struct node* r = (struct node*)malloc(sizeof(struct node));
   //set left and right to null
   r->left = 0;
   r->right = 0;
   return r;
}

struct node* create_node(TYPE val){
   struct node* r = (struct node*)malloc(sizeof(struct node));
   //set left and right to null
   r->left = 0;
   r->right = 0;
   r->val = val; //set value
   return r;
}

void add_node(struct node * root, TYPE val){

   struct node * pos; //to be pointed to the last most node

   //start at the root of the tree
   pos = root;

   while(pos->left != 0){
   //walk down the tree to the left
      pos = pos->left;
   }

   //add node
   pos->left = create_node(val);
} 


   




void free_tree(struct node* root){
   if(root != 0){
      free_tree(root->left);
      free_tree(root->right);
      free(root); //free node
   }
}


