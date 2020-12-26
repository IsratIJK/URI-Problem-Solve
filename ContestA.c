#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=b/2;
    

    if(a>=c){
         printf("Amelia tem todas bolinhas!\n");
    }
   
    else{
        
        printf("Faltam %d bolinha(s)\n",c-a);
    }
    return 0;
}