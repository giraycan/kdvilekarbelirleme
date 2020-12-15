#include<stdio.h>



int main(){
	int a[5][4];
	int i,j;
	for(i=0;i<5;i++){
		for(j=1;j<4;j++){
			if(j==3){
				a[i][j]=a[i][1]+a[i][1]*a[i][2]/100;
			}
			else{
	printf("%d önce[alýs] sonra[kdv+kar yuzdesi]",i+1);
	scanf("%d",&a[i][j]);
}
}

}

for(i=0;i<5;i++){
	printf("%d\t",i+1);
	for(j=1;j<4;j++){
	printf("%d\t",a[i][j]);
}
printf("\n");
	
}
	
	
	return 0;
}
