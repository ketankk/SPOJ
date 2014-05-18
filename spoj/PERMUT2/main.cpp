#include <iostream>

using namespace std;

int main()
{
   while (1)
	{
		long int n;
        cin>>n;
		if (n == 0)
		  break;
		int perm[n + 1];
		int flag=0;
		for (int i=1;i<=n;i++)
		  cin>>perm[i];

		for (int i=1;i<=n;i++)
		{
			if (perm[perm[i]]!=i)
			{
				flag = 1;
				break;
			}
		}

		if (flag)
		  cout<<"not ambiguous\n";
		else
		  cout<<"ambiguous\n";
	}
    return 0;
}
