#include<Stdio.h>
int main(){
    int n,k;
     printf("enter the number u wqbt to find");
    scanf("%d",&k);
    printf("enter the size");
    scanf("%d",&n);
    int isfound =0;
    int arr[n];
    int *ptr = &arr[0];
    for(int i =0 ;i<n;i++){
        scanf("%d",&ptr[i]);
    }



    for(int i=0 ;i<n;i++){
      
        if(ptr[i]== k){
            isfound=1;
            break;
        }
    break;
       
    }
    if(isfound == 1){
        printf("found");
    }
    else{
        printf("not found");
    }
}