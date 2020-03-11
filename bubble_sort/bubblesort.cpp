#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>

using namespace std;

const int N = 100010;
int a[N];

int main()
{
	//input
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	//bubble sort
	for(int i=0;i<n;i++)
		for (int j = 0; j + 1 < n; j++)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	
	//print
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	return 0;

}
