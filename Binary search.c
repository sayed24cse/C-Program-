#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[30],i, mid, left, right, x, n, flag;

    printf("Enter the size of the array: \n");
    scanf("%d",&n);

    printf("Please enter the array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        }
    printf("Here is your array: \n");

    for(i=0; i<n; i++){
        printf("%d ",a[i]);
        }

    printf("\nPlease enter the number you want to search in the array: \n");
    scanf("%d",&x);

    left = 0;
    right = n-1;
    flag = 0;

    while(left <= right){
        mid = (left + right)/2;

        if(a[mid] == x){
        flag = 1;
        break;
        }
        else if(x < a[mid]){
        right = mid - 1;
        }
        else{
        left = mid + 1;
            }
        }

        if(flag ==1){
        printf("Your desired number is present at position: %d",mid+1);
        }
        else{
        printf("Your desired number does not exist!");
        }
}