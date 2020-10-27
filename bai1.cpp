#include <stdio.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int kt=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
		kt = arr[i];
		}
		}
		if(kt!=0){
			printf("%d",kt);
		}else{
			printf("No EVEN Number");
		}	
	}		
