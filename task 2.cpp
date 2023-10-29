
#include <stdio.h>
int printArray(int arr[],int size){
    for(int j=0;j<size;j++){
        printf("%d",arr[j]);
    }
    printf("\n");
}
int main(){
    int n,element,step,newIndex;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&element);
        arr[i]=element;
    }
    scanf("%d",&step);
    for(int i=0;i<n;i++){
        if((i-step)>=n){
            newIndex=i-step-n;
        }
        else{
            newIndex=i-step;
        }
        arr2[newIndex]=arr[i];
    }
    printArray(arr2,n);
}
