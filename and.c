#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a & 1) {
        printf("%d is odd\n",a);
    }
    else{
        printf("%d is even\n",a);
    }
    return 0;
}