export module MergeSort;
#include <vector>

void merge(int tar[], int low, int mid, int high) {
  int *arr = new int[high - low + 1];
  int i = low, j = mid + 1, k = 0;
  while (i <= mid && j <= high) {
    if (tar[i] < tar[j]) {
      arr[k++] = tar[i++];
    } else {
      arr[k++] = tar[j++];
    }
  }
  while (i <= mid) {
    arr[k++] = tar[i++];
  }
  while (j <= high) {
    arr[k++] = tar[j++];
  }
  for (i = low, k = 0; i <= high; ++i) {
    tar[i] = arr[k++];
  }
  delete []arr;
}

export void merge_sort(int tar[], int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2;
    merge_sort(tar, low, mid);
    merge_sort(tar, mid + 1, high);
    merge(tar, low, mid, high);    
  }
} 