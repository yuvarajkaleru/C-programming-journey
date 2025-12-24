#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int largest = arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Which element to search");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        if(arr[i] == n){
            printf("Element found at index %d",i);
            return 0;
        }
    }
    printf("Element not found");
}