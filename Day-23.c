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




// Linear search in Array 
int a[100],n;
printf("How many numbers : ");
scanf("%d",&n); 
printf("Enter the numbers of Array : ");
for(int i = 0;i<n;i++){
    scanf("%d",&a[i]);
}

int pos= -1,num;
printf("Enter the number that you want to find : ");
scanf("%d",&num);
for(int i = 0;i<n;i++){

    if(a[i]==num){
        pos = i+1;
        break;
    }

}

if(pos==-1){
    printf("Value is not find");

}
else{
    printf("Value is found at position %d ", pos);
}


    


    return 0;

}
