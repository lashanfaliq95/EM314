#include <stdio.h>

int main(){
int columns,rows,n,i,count,sum=0;
printf("What is the order of the adjacency matrix ? \n");
scanf("%d %d",&rows,&columns);
int array[rows][columns];
printf("Input the matrix ");
for(n=0;n<rows;n++){
   for(i=0;i<columns;i++){
   	scanf("%d",&array[n][i]);
   }

}
for(n=0;n<rows;n++){
	  count=0;
   for(i=0;i<columns;i++){
   	if(array[n][i]==1){count++;}
   }
if(count%2==0){sum++;}
}
if(sum==rows){printf("The graph is eulerin \n");}
else{printf("The graph is not eulerin  \n");}
	return 0;
}

