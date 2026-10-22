#include<stdio.h>

int main(){
 int a[100]=0;
 for(int i=0;i<100;i++){
    scanf("%d",&a[i]);
    if (a[i]==0)
    {
        break;
    }
    
 }   
 
 return 0;
}