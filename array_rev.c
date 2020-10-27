#include<stdio.h>
void arrayReverse(int [],int);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    arrayReverse(arr,size);
    return 0;
}
void arrayReverse(int arr[],int size){
    printf("\nThe original array is: ");
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    int temp,j=size-1;
    
    for(int i=0;i<size/2;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
   
    printf("\nThe array after reversing is: ");
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
}