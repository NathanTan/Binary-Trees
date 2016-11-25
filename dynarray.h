/* dynarray.h */

//defining struct
struct dynarray{
   void* data;
   int size;
   int capacity;
};

struct dynarray * init_dynamic_array(int);

void free_dynarray(struct dynarray *);

void empty_dynarray(struct dynarray *);
