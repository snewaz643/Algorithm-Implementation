/*Implementation of Quicksort Algorithm*/

#include<stdio.h>

int partition(int A[],int start,int end);

void quick_sort(int A[],int start,int end);

void swap(int *A,int *B);

int 
main(int argc,char*argv[]){

   int A[] = {5,4,2,3,1,8,9,0,7,6};

   int i;
   
   quick_sort(A,0,9);
   
   for(i =0;i<10;i++){
   
   	  printf("%d ",A[i]);
   	  
   }	  

   return 0;

}

void
quick_sort(int A[],int start,int end){
  int partitionIndex;

  if(start<end){
   
  /* I tried to use partition to quicksort making sure we reach
  base case of atleast single element that can not be further broken 
    and sorted
  */  
  partitionIndex  = partition(A,start,end);
 
  /*recursively sort left to be less than partitionIndex and recursively
  sort right part to be greater than partitionIndex
  */
 
  quick_sort(A,start,partitionIndex-1);
 
  quick_sort(A,partitionIndex+1,end);
   
  }
  
}

int
partition(int A[],int start,int end){

  int pivot = A[end];

  int i;
  
  int pIndex = start;
  
  /*loop through the elements searching elements less
  than pivot and put the greater elements away
  */
  
  for(i=start;i<end;i++){
      
   if(A[i]<= pivot && start<end){
   
     swap(&A[i],&A[pIndex]);
     
     pIndex++;
     
     /* move pIndex to next element*/
   }
  
  } 
  
  swap(&A[pIndex],&A[end]);
  
  /* swap last element with the pIndex ed element to make swap*/
  
  return pIndex;
  
}

void swap(int *A,int *B){

   /* the addresses need to be changed and thereby the entire array is passed
   to be swapped to make the changes.
   */	
	
   int tmp;
   
   /*initially place value to a temporary variable and then return to the value
   in the temporary variable to the other variable's place.
   */
   
   tmp = *A;
   
   *A = *B;
   
   *B = tmp;

}