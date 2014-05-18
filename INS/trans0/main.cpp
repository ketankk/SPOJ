#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];
	int ln=0;
	int arr[20];
	cout << "\n Enter String(without space) : ";
	cin >> str1;
	ln = strlen(str1);
	str1[ln + 1] = '\0';
	int n;
	cout<<"\nEnter the no. of key characters:";
	cin>>n;
	cout << "\n Enter key: ";

	for(int i=0;i<n;i++)
    cin>>arr[i];

    int iLen = n;
    int cnt = 0;

// Encryption
	for (int z = 0; z < iLen; z++)
	{
		for (int x = 0; x <= (ln/2)-1; x++)
		{
			if ((arr[z] + iLen * x) <= ln)
			{
				str2[cnt++] = str1[(arr[z] + iLen * x) - 1];
			}
		}
	}
	str2[ln] = '\0';
	int nl = 1;
	for (int i = 0; i < iLen; i++)
		cout << arr[i] << " ";
	cout << "\n-------------------------------";
	cout << "\n";


	for (int i = 0; i < ln; i++)
	{
		if (i == iLen * nl)
		{
			cout << "\n" << str1[i] << " ";
			nl++;
		}
		else
			cout << str1[i] << " ";
	}
	cout << "\n\n" << "Encrypted String : " << str2;

// Decryption
	cout << "\n";
	char strtmp[100];
	cnt = 0;
	for (int z = 0; z < iLen; z++)
	{
		for (int x = 0; x <= (ln/2)-1; x++)
		{
			if ((arr[z] + iLen * x) <= (ln))
				strtmp[arr[z] + (iLen * x) - 1] = str2[cnt++];
		}
	}
	strtmp[ln] = '\0';
	cout << "Decrypted String : " << strtmp << "\n\n";
	return 0;
}
