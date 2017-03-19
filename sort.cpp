#include<stdio.h>
int main(){
	int ip[20];
	int count,i, j,temp,n,l;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&ip[i]);
	}
	j=n;
	if(n%2==0){
		l=n/2;
	}
	else
	l=n/2+1;
	while(l--){
		for(i=0;i<n;i++){
			if(i>=j-1){
				break;
			}
			else
				if(ip[i]%2==0){
					temp=ip[i];
					ip[i]=ip[j-1];
					ip[j-1]=temp;
					j--;
		}
	}
	}
	count=0;
	for(i=0;i<n;i++){
		if(ip[i]%2!=0){
			count++;
		}
		else
		break;
	}
	for(i=0;i<count;i++){
		for(j=i;j<count;j++){
			if(ip[i]>ip[j]){
				temp=ip[i];
				ip[i]=ip[j];
				ip[j]=temp;
			}
		}
	}
	for(i=count;i<n;i++){
		for(j=i;j<n;j++){
			if(ip[i]<ip[j]){
				temp=ip[i];
				ip[i]=ip[j];
				ip[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf(" %d  ",ip[i]);
	}
	return 0;
}
