#include <stdio.h>
#include <conio.h>
void main(){
int arr[100];
int i,size,value,index;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&size);
printf("Enter %d elements:\n",size);
for(i=0;i<size;i++){
scanf("%d",&arr[i]);  }
printf("Enter the index to insert at: ");
scanf("%d",&index);
if(index<0 || index>size){
printf("Entered position doesn't exist\n");         }
else  {
printf("Enter the value to insert: ");
scanf("%d",&value);
for(i=size;i>index;i--){
arr[i]= arr[i-1]; }
arr[index]=value;
size++;
printf("Updated array:\n ");
for(i=0;i<size;i++){
printf("%d,",arr[i]);
}
printf("\n");
}
getch();
}