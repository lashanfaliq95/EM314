#include <stdio.h>

int GCD(int a,int b);
int main(){

printf("%d",GCD(2170,48800));

	return 0;
}

int GCD(int a,int b){
int temp,k;
if(b>a){temp=b;
         b=a;
         a=temp;     }
while(1){
k=a%b;
if(k==0){return b;}
a=b;
b=k;

}

}