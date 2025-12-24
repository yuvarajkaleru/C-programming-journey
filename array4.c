#include<stdio.h>
int main() {
int arr[100];
int n = 5;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int position = 2;
for (int i =n; i>position -1;i--){
    arr[i] = arr[i-1];
}
arr[position -1] = 10;
printf("The updated array is: ");
for(int i = 0;i<n;i++)
printf("%d, ",arr[i]);
}