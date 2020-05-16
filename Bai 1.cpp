#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao cac phan tu cua mang \t");
		scanf("%d",&arr[i]);
	}
	int sum=0;
	float tbc;
    for(int i=0;i<n;i++){
    	if(arr[i]%2!=0){
    		sum+=arr[i];
    		tbc=(float)sum/n;
    	}
    }
    printf("Trung binh cac so le trong mang la %f",tbc);
}	
