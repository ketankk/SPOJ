
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100],s2[100];
	int l1 = 0;
	int a1[20];
	cout << "\n Enter String(without space) : ";
	cin >> s1;
	l1 = strlen(s1);
	s1[l1 + 1] = '\0';
	int n;
	cout<<"\nEnter the no. of key characters:";
	cin>>n;
	cout << "\n Enter key: ";

	for(int i=0;i<n;i++)
    cin>>a1[i];

    int iLen = n;
    int cnt = 0;

// Encryption
	for (int z = 0; z < iLen; z++)
	{
		for (int x = 0; x <= (l1/2)-1; x++)
		{
			if ((a1[z] + iLen * x) <= l1)
			{
				s2[cnt++] = s1[(a1[z] + iLen * x) - 1];
			}
		}
	}
	s2[l1] = '\0';
	int nl = 1;
	for (int i = 0; i < iLen; i++)
		cout << a1[i] << " ";
	cout << "\n-------------------------------";
	cout << "\n";


	for (int i = 0; i < l1; i++)
	{
		if (i == iLen * nl)
		{
			cout << "\n" << s1[i] << " ";
			nl++;
		}
		else
			cout << s1[i] << " ";
	}
	cout<<"\nEncrypted String : " << s2;

/*Decryption
	cout << "\n";
	char strtmp[100];
	cnt = 0;
	for (int z = 0; z < iLen; z++)
	{
		for (int x = 0; x <= (l1/2)-1; x++)
		{
			if ((a1[z] + iLen * x) <= (l1))
				strtmp[a1[z] + (iLen * x) - 1] = s2[cnt++];
		}
	}
	strtmp[l1] = '\0';
	cout << "Decrypted String : " << strtmp << "\n\n";
	getch();*/
	return 0;
}
