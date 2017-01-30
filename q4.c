#include <stdio.h>

int main(){
int size,n,i;
printf("How many elements are there in the data set ? \n");
scanf("%d",&size);
int dataset[size];
printf("Input the data set :");
for(n=0;n<size;n++){
	scanf("%d",&dataset[n]);
}

for(i=0;i<size;i++){
   int min=1000;
    for(n=0;n<size;n++){
	if(dataset[n]<min){min=dataset[n];}
}   

    for(n=0;n<size;n++){
	if(dataset[n]==min){dataset[n]=10000; break;}
}
printf("%d ",min);
}


return 0;
}

