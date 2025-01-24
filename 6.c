#include<stdio.h>
int main(){
    int r,c,a=1;
    printf("enter the row");
    scanf("%d",&r);

    printf("enter the colum");
    scanf("%d",&c);

    int *ptr = &r;
    int *ptr1 = &c;
    int *ptr3 =&a;

    for(int i=0;i<*ptr;i++){
        for (int  j = 0; j < *ptr1; j++)
        {
            printf("%d",*ptr3);
            *ptr3+=1;
        }
        printf("\n");
        
    }

}