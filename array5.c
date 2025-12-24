#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int second = -1;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
    }
    printf("\n %d is the largest number",largest);
    printf("\n %d is the second largest number",second);
}
