// https://www.beecrowd.com.br/judge/en/problems/view/2792

#include <bits/stdc++.h>

using namespace std;

#define MAX 500000

void update(int BIT[], int N, int i, int v)
{
	while(i <= N)
	{
		BIT[i] += v;
		i += i & (-i);
	}
}

int query(int BIT[], int i)
{
	int sum = 0;

	while(i > 0)
	{
		sum += BIT[i];
		i -= i & (-i);
	}
	return sum;
}

int main()
{
	int N, number, i, removed;
    int BIT[MAX+1];

	memset(BIT, 0, sizeof(BIT));

	cin	>> N;
    
	for(i = 1; i <= N; i++)
	{
		cin >> number;
		
		removed = number - query(BIT, number);
		cout << removed;
		
		if(i == N)
			cout << endl;
		else
			cout << " ";
		
		update(BIT, N, number, 1);
	}
	return 0;
}