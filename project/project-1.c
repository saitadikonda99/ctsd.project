#include<stdio.h>
int main() {
int n,c=0;
printf("total number of stairs: ");
scanf("%d",&n);
int m,temp=0;
printf("total number of dirt stairs: ");
scanf("%d",&m);
int order[m];
 for(int i=0;i<m;i++) {
scanf("%d",&order[i]);
}
for(int u=0;u<=m;u++) {
if(order[u]==1||order[u]==n)
temp=1;
break;
}
if(temp==1) {
printf("NO\n");
}
else {
for(int k=0;k<m;k++) {
for(int s=0;s<m;s++) {
if(order[k]==order[s]+1) {
c=c+1;
}
             }

             }
if(c>=2) {
printf("NO\n");
}
else {
printf("YES\n");
}
}

return 0;
}
