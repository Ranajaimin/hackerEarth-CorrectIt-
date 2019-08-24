#include <stdio.h>

void main(){
	int n;
	long long int num;
	scanf("%d", &n);
	while(n-->0){
        scanf("%d", &num);
        while(num!=1 && num>0){
            if(num%2==0)
                num/=2;
            else
                num=(num*3)+1;
        }
        if(num==1)
            printf("\nYES");
        else
            printf("\nNO");
    }
}
