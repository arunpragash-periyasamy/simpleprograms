#include<stdio.h>
int main(){
    int n,m,arr[50][50];
    scanf("%d",&n);
    m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}