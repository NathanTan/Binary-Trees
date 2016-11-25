/* dynarrary.c */

#include "dynarray.h"

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct dynarray * init_dynarray(int capacity) {
   assert(capacity > 0);
   struct dynarray * dray = malloc(sizeof(struct dynarray));

   dray->data = malloc(capacity * sizeof(void*));
   dray->size = 0;
   dray->capacity = capacity;

   return dray;
}


void free_dynarray(struct dynarray* da){
   assert(da); //make sure da isn't empty
   free(da->data); //free data
   free(da); //free the struct
}

void empty_array(struct dynarray* da){
   assert(da); //make sure da isn't empty
   free(da->data); //free data

   da->data = malloc(sizeof(void*));
   da->size = 0;//all good to go
   //we will leave the capacity to be delt with next time the array gets dealt with
} 




