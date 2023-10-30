// https://www.beecrowd.com.br/judge/en/problems/view/2531

#include <bits/stdc++.h>

using namespace std;

#define MAX 100001

int tree [4 * MAX];

int compMin(int a, int b)
{
    return a < b ? a : b;
}

int compMax(int a, int b) 
{
    return a > b ? a : b;
}

typedef struct {
    int min;
    int max;
}Price;

Price price[4 * MAX];

void build (vector<int> &arr, int p, int l, int r) 
{
    if(l == r) 
    {
        price[p].min = arr[l];
        price[p].max = arr[l];
		return;
    }
    int mid = (l + r) / 2;

    build(arr, p * 2, l, mid);
	build(arr, p * 2 + 1, mid + 1, r);

    price[p].min = compMin(price[p * 2].min, price[p * 2 + 1].min);
	price[p].max = compMax(price[p * 2].max, price[p * 2 + 1].max);
}

void update(vector<int> &arr, int p , int l, int r, int x, int value)
{
	if (l == r)
	{
		arr[x] = value;
        price[p].min = value;
        price[p].max = value;
		return;
	}
    int mid = (l + r) / 2;

	if (x <= mid)
		update(arr, p * 2, l, mid, x, value);
	else
		update(arr, p * 2 + 1, mid + 1, r, x , value);

    price[p].min = compMin(price[p * 2].min, price[p * 2 + 1].min);
	price[p].max = compMax(price[p * 2].max, price[p * 2 + 1].max);
}

Price query(int p, int l, int r, int a, int b)
{
    Price aux, left, right, answer;

	if (a <= l && b >= r)
		return price[p];

	if (b < l || a > r)
    {
        aux.max = INT_MIN;
	    aux.min = INT_MAX;
        return aux;
    }
    int mid = (l + r) / 2;

	left = query(p * 2, l, mid, a, b);
	right = query(p * 2 + 1, mid + 1, r, a, b);

    answer.min = compMin(left.min, right.min);
	answer.max = compMax(left.max, right.max);

	return answer;
}

int main() {
    int N, price, Q, i, j, k, operation;
    vector <int> vec;
    Price answer;

    while(scanf("%d", &N) != EOF) {
        for(i = 0; i < N; i++) 
        {
            scanf("%d", &price);
            vec.push_back(price);
        }
        build(vec, 1, 0, N-1);

        scanf("%d", &Q);

        for(i = 0; i < Q; i++) {
            scanf("%d %d %d", &operation, &j, &k);

            if(operation == 1) 
            {
                update(vec, 1, 0, N-1, j-1, k);
            }
            else if(operation == 2) 
            {   
                answer = query(1, 0, N-1, j-1, k-1);
                printf("%d\n", answer.max - answer.min);
            }
        }
        vec.clear();
    }
    return 0;
}