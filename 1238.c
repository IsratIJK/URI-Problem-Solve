#include<stdio.h>
int main(){
    char W1[50],W2[50];
    int t,a,b,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){

    scanf("%s",&W1);
    scanf("%s",&W2);
    for(a=0,b=0,j=0;j<50;j++){
        if(W1[j]=='\0'){
            a=1;
        }
        if (W2[j]=='\0'){
                b=1;
            }
        if (a==1 && b==1){
                break;
            }
        if (a==0){
                printf("%c", W1[j]);
            }
        if (b==0){

                printf("%c", W2[j]);
            }
    }
    printf("%c",W2[j]);
}

}
