#include<stdio.h>
#include<string.h>

int find_max_now(int light[],int visit[],int n,int k);
int main()
{    int n,k;
	int light [1005],visit [1005];

    printf("enter the values of n And k:");
    scanf ("%d%d",&n, &k);
    memset(visit,0,sizeof(visit));
    for (int i=0;i<n;i++)
        scanf ("%d", &light [i]);
    int low;
    for(int i=0;i<k;i++)
    {
        low=find_max_now(light,visit,n,k);
    } 
    printf("%d\n",low);
    for(int i=0;i<n;i++){
        if(visit[i]==1)
            printf("%d", i+1);
        printf("\n");
    }
}
int find_max_now(int light[],int visit[] , int n ,int k)
{
    int maxn_now=-1, pos=-1;
    for(int i=0;i<n;i++)
        if(light [i]>maxn_now && visit[i]==0)
        {
            maxn_now=light[i];
            pos=i;
        }
        visit[pos]=1;
    return maxn_now;
}
