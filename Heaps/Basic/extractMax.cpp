#include <bits/stdc++.h>
using namespace std;
class MaxHeap {
public:
    vector<int> H;
    int s = -1;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void shiftUp(int i) {
        while (i > 0 && H[parent(i)] < H[i]) {
            swap(H[parent(i)], H[i]);
            i = parent(i);
        }
    }

    void shiftDown(int i) {
        int maxIndex = i;

        int l = leftChild(i);
        if (l <= s && H[l] > H[maxIndex]) maxIndex = l;

        int r = rightChild(i);
        if (r <= s && H[r] > H[maxIndex]) maxIndex = r;

        if (i != maxIndex) {
            swap(H[i], H[maxIndex]);
            shiftDown(maxIndex);
        }
    }

    void insert(int x) {
        H.push_back(x);
        s++;
        shiftUp(s);
    }

    int extractMax() {
        if (s < 0) return -1;

        int res = H[0];
        H[0] = H[s];
        H.pop_back();
        s--;

        shiftDown(0);
        return res;
    }
};

int main() {
    MaxHeap heap;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        heap.insert(x);
    }

    cout << "Extracting elements:\n";
    while (heap.s >= 0) {
        cout << heap.extractMax() << " ";
    }

    return 0;
}