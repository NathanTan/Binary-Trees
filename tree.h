/*trees.h*/

//define data type to provide quick changing of data type
#ifndef TYPE
#define TYPE int
#endif

struct node{
TYPE val;
struct node *left;
struct node *right;
};

