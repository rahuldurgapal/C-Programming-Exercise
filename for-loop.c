#include<stdio.h>
int main(){
    
    for(int i=-1;i;i++) {
        
        if(i%2==0)
         continue;
         
        printf("%d",i);
    }
}