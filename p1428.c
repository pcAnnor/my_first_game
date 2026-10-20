#include<stdio.h>

int main(){
    int n;
    long  a[100]={0};
    long  b[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%ld",&a[i]);
    }
    for(int i =1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                b[i]+=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%ld ",b[i]);
    }
    return 0;
}