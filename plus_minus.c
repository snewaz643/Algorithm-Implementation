#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int count_1=0,count_2=0,count_3=0;
    
    /*if a number is less than zero we count it towards count_1
     if a number is greater than zero we count it towards count_2
     and if the numbers are greater than 0, we count it towards
     count_3
     */
    
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    
       if(arr[arr_i]>0){ 
       
          count_1++ ;
     
       }
       
       else if(arr[arr_i]<0){
       
          count_2++;
       	   
       }else{
       
          count_3++; 
       	   
       }
       
    }
    
    /* to express the number with precision we allow 6 significant figures and higher precision
    datatype to be employed(float in this case). 
    */
    

    printf("%.6f\n",(((float)count_1)/n));
    
    printf("%.6f\n",((float)count_2/n));
    
    printf("%.6f\n",((float)count_3/n));
    
    return 0;
}
