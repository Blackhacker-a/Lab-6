#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao cac phan tu cua mang \t");
		scanf("%d",&arr[i]);
	}
	int count;
	int x;
	printf("Nhap vao so ma ban muon kiem tra ");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			count=1;
			break;
			}
		else{
			count=0;
			break;
		}
	}	
	if(count==0){
		printf("So %d khong nam trong mang ",x);
		}
	if(count==1){
		printf("So %d co nam trong mang ",x);
		}
	}	
		
