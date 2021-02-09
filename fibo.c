#include<stdio.h>
int fibo(int x);
int main(){
    int n, result;
    printf("Print the number of values you want in fibonacci series:\n");
    scanf("%d",&n);
    printf("The fibonacci series is:\n");
    for (int i=1; i<=n;i++){
        result=fibo(i);
        printf("%d ",result);
    }
    return 0;
}

int fibo(int x){
    if (x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fibo(x-1) + fibo(x-2);
    }
    
}