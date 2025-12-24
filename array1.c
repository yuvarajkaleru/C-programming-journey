#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int largest = arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 1; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    printf("\n %d is the largest number",largest);
}