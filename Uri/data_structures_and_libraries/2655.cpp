// https://www.beecrowd.com.br/judge/en/problems/view/2655

#include <bits/stdc++.h>

using namespace std;
 
#define MAX 100000

long long int seg[4 * MAX] = {0};

void build(int left, int right, int node, vector<int> &ar,
           long long seg[])
{
    if (left == right) {
        seg[node] = (1LL << ar[left]);
 
        return;
    }
 
    int mid = (left + right) / 2;
 
    build(left, mid, 2 * node, ar, seg);
 
    build(mid + 1, right, 2 * node + 1, ar, seg);
 
    seg[node] = (seg[2 * node] | seg[2 * node + 1]);
}
 
long long query(int start, int end, int left, int right,
                int node, long long seg[])
{
    if (end < left || start > right) {
        return 0;
    }
 
    else if (start >= left && end <= right) {
        return seg[node];
    }
 
    else {
        int mid = (start + end) / 2;
 
        long long leftChild = query(start, mid, left,
                                    right, 2 * node, seg);
 
        long long rightChild = query(mid + 1, end, left,
                                     right, 2 * node + 1, seg);
        return (leftChild | rightChild);
    }
}
 
void update(int left, int right, int index, int Value,
            int node, vector<int> &ar, long long seg[])
{
    if (left == right) {
        ar[index] = Value;
 
        seg[node] = (1LL << Value);
        return;
    }
 
    int mid = (left + right) / 2;
    if (index > mid) {
 
        update(mid + 1, right, index, Value, 2 * node + 1, ar, seg);
    }
    else {
 
        update(left, mid, index, Value, 2 * node, ar, seg);
    }
 
    seg[node] = (seg[2 * node] | seg[2 * node + 1]);
}
 

int main() {
    int N, Q, M, i, number, aux, j, u, v, countDistinct;
    long long tempMask;
    vector<int> vec;

    cin >> N >> Q >> M;

    for(i = 0; i < N; i++) {
        cin >> number;
        vec.push_back(number);
    }
    build(0, N - 1, 1, vec, seg);

    for(i = 0; i < Q; i++)
    {
        cin >> aux >> u >> v;

        if (aux == 1) 
        {   
            tempMask = query(0, N-1, u-1, v-1, 1, seg);

            countDistinct = 0;
            for(j = M; j > 0; j--)
            {
                if (tempMask & (1LL << j)) 
                {
                    countDistinct++;
                }
            }
            cout << countDistinct << endl;
        }
        else 
        {
            update(0, N - 1, u - 1, v, 1, vec, seg);
        }    
    }
    return 0;
}