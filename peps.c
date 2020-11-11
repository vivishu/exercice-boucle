#include <stdio.h>
#include "art.h"
int main(){
    int x,y,c;
    
    do{printf("saisir x et y");
    scanf("%d %d",&x,&y);
    }
    while(x==y || x<0 ||y<0);

c=MAX(x,y);
printf("afficher c %d\n",c);
return 0;
}

