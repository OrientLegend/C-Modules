#include <cstdio>
import MergeSort;

int main()
{
    int arr[int(1e5 + 1)];

    for (int i = 0; i < 1e5; ++i) {
        arr[i] = 1e5 - i;
    }
    merge_sort(arr, 0, 1e5 - 1);
    for(int& x: arr) {
        printf("%d ", x);
    }
    return 0;
}