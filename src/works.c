#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m) {
int w=0;
int T=1;
for ( int i=0; i<n; i++) {
    if (A[i]>m) return 0;
    w=w+A[i];
    if (w>m) {
        w=A[i];
        T=T+1;
    }}
    return k>=T;
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
