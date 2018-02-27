   //****Bubble Sorting of 1D Array Using One For Loop And Recursion****//
  //**Author :Muhabmost**//
 //**Email:Muhabmost@gmail.com**//


#include<stdio.h>
#include"bubblesort.h"
  int Vals = 0;
  int length=0;
  int number,arr[20000];
  int i=0;
void GetArray(){

  printf("Enter Size Of Array:");
  scanf("%d",&number);
  while(i<number){
  printf("Enter Each Number:");
  scanf("%d",&arr[i++]);}
  length=number;
}
void SortDsn(){
for(int i = 1; i <= length; i++)
  {
    if(i == length)
    {
        if(!Vals) break;

        Vals = 0;
        i = 1;
    }
    if(arr[i - 1] < arr[i])
    {
        int t = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = t;
        Vals = 1;
    }
    }
}

void SortAsn(){
for(int i = 1; i <= length; i++)
  {
    if(i == length)
    {
        if(!Vals) break;

        Vals = 0;
        i = 1;
    }
    if(arr[i - 1] > arr[i])
    {
        int t = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = t;
        Vals = 1;
    }
    }
}
void print(){
printf("Sorted Array=");
    printf("[");
for(int i = 0; i < length; i++) {
    
    printf("%d", arr[i]);
    printf("\t");
   
} printf("]");}

