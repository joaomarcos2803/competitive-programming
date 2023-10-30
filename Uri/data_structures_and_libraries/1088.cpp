// https://www.beecrowd.com.br/judge/en/problems/view/1088

#include <bits/stdc++.h>

using namespace std;
 
int getSum(int BITree[], int index)
{
    int sum = 0; 
 
    while (index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}
 

void updateBIT(int BITree[], int n, int index, int val)
{
    while (index <= n)
    {
       BITree[index] += val;
       index += index & (-index);
    }
}
 

int getInvCount(int arr[], int n)
{
    int invcount = 0; 
 
    int BIT[n+1];

    for (int i = 1; i <= n; i++)
        BIT[i] = 0;
 
    for (int i=n-1; i>=0; i--)
    {
        invcount += getSum(BIT, arr[i]-1);
        updateBIT(BIT, n, arr[i], 1);
    }
    return invcount;
}

int main() {
    int N, number, i, inversions;
    int array[100001];

    cin >> N;

    while (N) {
        for(i = 0; i < N; i++) {
            cin >> number;
            array[i] = number;
        }
        inversions = getInvCount(array, N);

        if (inversions % 2 == 0) {
            cout << "Carlos" << endl;
        }
        else {
            cout << "Marcelo" << endl;
        }
        cin >> N;
    }
    return 0;
}