#include<stdio.h>
#include<stdlib.h>
int main(){
	int test, n, arr[100], sum=0, i=0,j,k,check = 0;
	scanf("%d",&test);
	while(test>=1){
		test--;
		scanf("%d",&n);
		//input
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		//algorithm
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				sum = arr[i]+arr[j];
				for(k=j+1;arr[k]<=sum;k++){
					if(sum == arr[k]){
						printf("%d, %d, %d\n",i+1,j+1,k+1);
						check = 1;
						continue;
					}
				}
			}
		}
		if(check == 0)
		printf("No Sequence Found\n");
	}
	return 0;
}
