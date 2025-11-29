#include<stdio.h>
int main(){
    int n,fact=0;
    printf("enter factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact *=i;
    }
        printf("factorial=%d",fact);
    return 0;
}