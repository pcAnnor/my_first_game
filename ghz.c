#include<stdio.h>

int main( ){
    int x,y,m,n;
    scanf("%d %d %d %d",&m,&n,&x,&y);
    //(x,y)是马的位置，m,n是图上坐标

    long long bs[25][25]={0};
    int blocked[25][25]={0};
    bs [0][0]=1;
    long long bx[9]={0,1,1,-1,-1,2,2,-2,-2};
    long long by[9]={0,2,-2,2,-2,1,-1,1,-1};



    for(int i=0;i<=8;i++){
        int a =x+bx[i];
        int b= y+by[i];
        if(a>=0 && b>=0 && a<=m && b<=n){
        blocked[a][b]=1;}
    }

    for(int i=1;i<=m;i++){
        if(blocked[i][0]==0){
            bs[i][0]=bs[i-1][0];
        }
        
        for(int j=1;j<=n;j++){
           if(blocked[0][j]==0){
            bs[0][j]=bs[0][j-1];
        }
            if(blocked[i][j]==1){
                continue;
            }
            bs[i][j]=bs[i-1][j]+bs[i][j-1];
        }
    }
    printf("%lld",bs[m][n]);
    return 0;
}