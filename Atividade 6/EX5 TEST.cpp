#include <stdio.h>
#include <string.h>
int main(){
    char x[30], y[30], z[30];
    int i,maior,j,cont=0,flag;
    
    printf ("digite string x\n");
    fgets(x, 30, stdin);
    printf ("digite string y\n");
    fgets(y, 30, stdin);
    
    for(j=0; j<strlen(x); j++){
        flag=0;
        for(i=0; i<strlen(y); i++){
            if(x[j]==y[i]){
                flag=1;
                break;
            }
        }
        if( ! flag){
            z[cont]=x[j];
            cont++;
        }
    }
    z[cont]='\0';
    printf("string nova -> %s\n\n\n",z);
    return 0;
}
