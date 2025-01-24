#include<stdio.h>
int main(){
    char str [100];
    fgets(str,100,stdin);
    int j=0;
    while (str[j])
    {
        if(str[j]=='\n'){
            str[j]='\0';
            break;
        }
        j++;
    }


    char str1 [100];
    fgets(str1,100,stdin);
    int k=0;
    while (str1[k])
    {
        if(str1[k]=='\n'){
            str1[k]='\0';
            break;
        }
        k++;
    }
int l =j+k;
char merge[l+1];
for(int i=0;i<j;i++){
    merge[i]=str[i];
}

for(int i=0;i<k;i++){
    merge[j+i]=str1[i];
}
merge[l]='\0';
printf("%s\n",merge);



    
    
}