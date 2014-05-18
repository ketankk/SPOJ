#include <stdio.h>
#define MAX 100000

void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp,count=0;
  bool binMap[MAX] = {0}; /*initialize hash map as 0*/
for(i = 0; i < arr_size; i++)
      binMap[arr[i]] = 1;
  for(i = 0; i < arr_size; i++)
  {
   // binMap[arr[i]] = 1;
    temp = sum - arr[i];
    if(temp >= 0 && binMap[temp] == 1)
    {
      printf("Pair with given sum %d is (%d, %d) \n", sum, arr[i], temp);
      count++;
    }
   // binMap[arr[i]] = 1;
  }
  printf("%d\n",count);
}

int main()
{
    int n,i,j,t,x,a[100002];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&x,&n);
int count=0;
for( i=0;i<n;i++)
        scanf("%d",&a[i]);

    printPairs(a,n,x);

}
    return 0;
}
