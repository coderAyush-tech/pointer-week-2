#include<Stdio.h>
int main(){
    int r,c;
    printf("enter row and column:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int *ptr = &arr[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",(ptr+i*c+j));
        }
        
    }

        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d",*(ptr+i*c+j));
        }
        printf("\n");
    }
    
}