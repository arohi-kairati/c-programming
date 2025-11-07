#include<stdio.h>

int sum_n(int n, int sum);

int main(){
    int n = 10, sum = 0;
    printf("%d\n", sum_n(n, sum));
}


int sum_n(int n, int sum){
    if(n == 0){
        return sum;
    }
    else
    {
        sum = sum + n;
        return sum_n(n - 1, sum);
    }
}