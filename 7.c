#include<Stdio.h>
int main(){
    int r;
    int c;
    printf("enter the number:");
    scanf("%d",&r);
    printf("enter the number:");
    scanf("%d",&c);
    int arr[r][c];
    int arr1[r][c];
    int *ptr = &arr[0][0];
    int *ptr1 = &arr1[0][0];


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }

}

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }

}

  int sum;

    for(int i=0; i<r; i++){
          sum=0;
        for(int j=0; j<c; j++){
            
            printf("%d ",*(ptr1++) + *(ptr++));
        }
        printf("\n");
    }

}
