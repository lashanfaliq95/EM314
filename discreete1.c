#include <stdio.h>

int GCD(int a,int b);
int main(){

printf("%d",GCD(2170,48800));

	return 0;
}

int GCD(int a,int b){
if(b>a){int temp=a;
               a==b;
               b==temp;}


if(b==0){return a;}

else {
	
    int k=a%b;
	return GCD(b,k);}

}


