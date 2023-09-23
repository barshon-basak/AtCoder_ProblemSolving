#include <stdio.h>

int main() {
   long n, m, p;
   long long sum = 0;  
   scanf("%ld %ld %ld", &n, &m, &p);
   long arr[n];
   long arr2[m];

   for (int i = 0; i < n; i++) {
       scanf("%ld", &arr[i]);
   }
   for (int i = 0; i < m; i++) {
       scanf("%ld", &arr2[i]);
   }
   
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
            long long var = arr[i] + arr2[j];
            if (var < p) {
                sum += var;
            }
            else sum += p;
       }
   }
   printf("%lld", sum); 
   return 0;
}
