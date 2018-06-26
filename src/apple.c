#include <stdio.h>

int n;
int k;
int A[100000];

int p (int m) {
    int t=0;
    for (int i=0; i<n; i++) t=t+1+(A[i]-1)/m;
    return k>=t;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

 lb=0;
  ub=1000000000;
  while (ub-lb>1) {
  	int m = (lb+ub)/2;
  	if (p(m)) ub=m;
  	else lb=m;
  }

  printf("%d\n",ub); 
   return 0;
}
