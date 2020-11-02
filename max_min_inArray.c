#include<stdio.h>

int find_max(int [],int);
int find_min(int [],int);

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("\nMaximum element in the array is: %d", find_max(arr,size));
    printf("\nMinimum element in the array is: %d", find_min(arr,size));
    return 0;
}

int find_max(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
int find_min(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i])
            min=arr[i];
    }
    return min;
}
