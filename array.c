#include<stdio.h>
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 5;
    for(int i = n;i>=0;i--){
        printf("%d ", arr[i]);
    }
}