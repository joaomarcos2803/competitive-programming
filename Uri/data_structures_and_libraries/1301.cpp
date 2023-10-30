// https://www.beecrowd.com.br/judge/en/problems/view/1301

#include <bits/stdc++.h>

using namespace std;


struct segment_tree
{
    segment_tree *left, *right;
    int from, to, value;

    segment_tree(int _from, int _to)
        : from(_from), to(_to), left(NULL), right(NULL), value(1) {}
};

segment_tree* build (int arr[], int l, int r) {
    if(l > r) return NULL;

    segment_tree *res = new segment_tree(l, r);

    if(l == r) {
        res->value = arr[l];
    }
    else {
        int m = (l + r) / 2;

        res->left = build(arr, l, m);
        res->right = build(arr, m + 1, r);
        if(res->left != NULL) res->value *= res->left->value;
        if(res->right != NULL) res->value *= res->right->value;
    }
    return res;
}

int query(segment_tree * tree, int l, int r) {
    if(tree == NULL) return 1;
    if (l <= tree->from && tree->to <= r) return tree->value;
    if (tree->to < l) return 1;
    if (r < tree->from ) return 1;

    return query(tree->left, l, r) * query(tree->right, l, r);
}


int update(segment_tree *tree, int i, int val) {
    if(tree == NULL) return 1;
    if(tree->to < i) return tree->value;
    if(i < tree->from) return tree->value;

    if(tree->from == tree->to && tree->from == i) tree->value = val;
    else tree->value = update(tree->left, i, val) * update(tree->right, i, val);

    return tree->value;
}

int main() {
    int n, k, u, v, i, num;
    long long int product;
    char letter;
    int array[100001];

    while (cin >> n >> k) {
        for(i = 0; i < n; i++) {
            cin >> num;
            if (num > 0) {
                num = 1;
            }
            else if (num < 0) {
                num = -1;
            }
            array[i] = num;

        }
        segment_tree * tree;
        tree = build(array, 0, n-1);

        for(i = 0; i < k; i++) {
            cin >> letter >> u >> v;

            if(letter == 'C') {
                if (v > 0) {
                    v = 1;
                }
                else if (v < 0) {
                    v = -1;
                }
                update(tree, u-1, v);
            }
            else if (letter == 'P') {
                product = query(tree, u-1, v-1);
                if(product > 0) {
                    cout << "+";
                }
                else if (product < 0) {
                    cout << "-";
                }
                else {
                    cout << "0";
                }
            }
        }
        cout << endl;

        memset(array, 0, sizeof(array));
    }
    return 0;
}
