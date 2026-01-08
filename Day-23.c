#include<stdio.h>
int main(){


// maximum and minimum in array 
int n,a[300];
printf("How many numbers : ");
scanf("%d",&n);
printf("Enter the number : ");
for(int i = 0;i<n;i++){
    scanf("%d",&a[i]);
}
int max = a[0];
int min = a[0];

for(int i = 1;i<n;i++){
    if(max<a[i]){
        max = a[i];
    }
    if(min>a[i]){
        min = a[i];
    }
}
printf("Maximum is %d\n", max);
printf("Minimum is %d\n", min);





    return 0;
}