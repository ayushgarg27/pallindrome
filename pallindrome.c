#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int t = n;
    int ans = 0;
    if(n<0){
        printf("Number is not pallindrome");
        return 0;
    }else{
        while(t!=0){
            int r = t % 10;
            t = t /10;
            ans = (ans* 10) + r;
        }
    }
    if(ans==n){
        printf("Number is pallindrome");
    }else{
        printf("Number is not pallindrome");
    }
}