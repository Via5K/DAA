#include<stdio.h>
#include<math.h>
int main(){
	int test, n, arr[100], key, sub=0, i,j;
	scanf("%d",&test);
	while(test>=1){
		test--;
		int count = 0;
		scanf("%d",&n);
		//input		
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		//key
		scanf("%d",&key);
		//algorithm
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				sub = fabs(arr[i]-arr[j]);
				if(sub == key){
					count++;
				}
			}
		}
	printf("%d\n",count);
	}
	return 0;
}
