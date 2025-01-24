#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the size of a :");
    scanf("%d",&a);
    printf("enter the size of a :");
    scanf("%d",&b);
    int arr[a];
    int arr1[b];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<b;i++){
        scanf("%d",&arr1[i]);
    }
    c=a+b;
    int merge[c];
    for (int i = 0; i < a; i++)
    {
       merge[i] = arr[i];
    }

        for (int i = 0; i < b; i++)
    {
       merge[a+i] = arr1[i];
    }
    for(int i=0;i<c;i++){
        printf("%d",merge[i]);
    }
    
}