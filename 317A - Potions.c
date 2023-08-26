#include <stdio.h>

int main() {
    int n,h,x;
    scanf("%d %d %d",&n,&h,&x);
    
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        if((x-h)<= arr[i]){
            printf("%d",i+1);
            break;      
    }}

    return 0;
}
