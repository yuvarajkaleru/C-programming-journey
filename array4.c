#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
}