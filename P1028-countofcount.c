#include<stdio.h>
int count = 1;
void lgl(int n){
    for(int i = n/2; i>=1; i--){
        if(i==1){
            count++;
            return;
        }
        count++;
        lgl(i);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    lgl(n);
    printf("%d", count);
    return 0;
}
