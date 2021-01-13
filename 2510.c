#include <stdio.h>
#include<string.h>
int main(){
    char a[50];
    int i,T,length;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s",&a);
        length= strlen(a);
        if(length>=0 && length<=25){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

}