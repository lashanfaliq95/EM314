#include <stdio.h>
//#include <math.h>
int russian_peasant(int a,int b);

int main(){
printf("%d ",russian_peasant(620,330));

	return 0;
}


int russian_peasant(int a,int b){
int sum=0;
a=a*2;
float c=b/2.0;
while(a!=1){
    a=a/2;
    c=c*2;
    if(a%2==0){continue;}
    else{ sum=sum+c; }


}
return sum;
}