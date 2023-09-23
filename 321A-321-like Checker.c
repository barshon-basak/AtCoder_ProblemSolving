// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int n,var,var2,count=0;
   scanf("%d",&n);
   int num=n;
   while (num != 0) {
        num /= 10;
        count++;
    }
   int flag=1;
   var= n%10;
   for(int i=1; i<count; i++){
       
      
       var2= (n/10)%10;
       n=n/10;
        //printf("****%d %d\n",var,var2);
       if(var>=var2){
           flag=0;
           break;
       }
       else
       var=n%10;
   }
if(flag==1){
    printf("Yes");
}
else printf("No");
    return 0;
}
