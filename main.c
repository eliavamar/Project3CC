#include <stdio.h>
#define SIZE 50

int shift_element(int* arr, int i){
	int j;
	for(j=0;j<i;j++){
		*(arr+i-j)=*(arr+i-j-1);
	}
	return 0;
}
void insertion_sort(int* arr , int len){
	int i,j,c;
for(i=1;i<len;i++){
j=i;
c=0;
if(*(arr+j)<*(arr+j-1)){
int temp=*(arr+j);
while(temp<*(arr+j-1)&&j!=0){
j--;
c++;
}
shift_element((arr+i-c),c);
*(arr+j)=temp;
  }

}
}

int main()
{
	int arr[SIZE];
	int i=0;
while(i<50){
	int a;
	scanf("%d",&a);
	arr[i]=a;
	i++;
}
insertion_sort(arr,50);
for(i=0;i<50;i++){
if(i!=0)
 printf(",%d",*(arr+i));
else{
 printf("%d",*(arr+i));
}
}

 return 0;
}
