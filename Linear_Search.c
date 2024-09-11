#include<stdio.h>

    int Linear_Search(int A[] ,int n , int x){
    int i;
    for(i=0;i<n;i++){
        if(A[i]==x){
            return i;
        }
    }

    return -1;

    }

int main() {

    int arr[]={10,20,30,40,50,60,1,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;

     printf("Enter the element you want to search for: ");
    scanf("%d",&target);

    int result = Linear_Search(arr,size,target);

        if (result != -1){
            printf("Element %d found at index %d\n",target,result);
        }
        else{
            printf("Element %d not found in the array\n",target);
        }
   return 0;
}
