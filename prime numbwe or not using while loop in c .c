#include<stdio.h>
int main(){
    int n,flag=0,i=2;
    scanf("%d",&n);
    if(n==0||n==1)
    flag=1;
    while(i<=n/2){
        if(n%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}