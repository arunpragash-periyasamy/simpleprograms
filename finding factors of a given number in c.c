#include<stdio.h>
#define Max 1000
int main(){
    int num;
    int i,j=0,h,n=0;
    int arr[Max];
    scanf("%d",&num);
    printf("The factors of %d are\n",num);
    for(i = 1,j=0;i <= num; i++)     //finding the factors using for loop
    {
        if(num % i == 0)
        {
            arr[j]=i;
            printf("%d\t",arr[j]);          //printing prime factors of a given number
            j++;
            //getting the factors and store it in the array(arr);
           //and counting the no of factors using n increment;
        }
       
    }
    printf("\n");
    printf("Total number of factors for %d is %d",num,n);    //printing number of factors
    return 0;
}