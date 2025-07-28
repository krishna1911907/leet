#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> t;
    int l = low;
    int r = mid + 1;
    while (l <= mid && r <= high) {
        if (arr[l] <= arr[r]) {
            t.push_back(arr[l++]);
        } else {
            t.push_back(arr[r++]);
        }
    }
    while (l <= mid) t.push_back(arr[l++]);
    while (r <= high) t.push_back(arr[r++]);
    for (int i = low; i <= high; ++i) {
        arr[i] = t[i - low];
    }
}

void mergesort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> v = {3, 2, 1, 1, 7, 9, 6};
    mergesort(v, 0, v.size() - 1);
    for (int x : v) cout << x << " ";
    cout << endl;
}