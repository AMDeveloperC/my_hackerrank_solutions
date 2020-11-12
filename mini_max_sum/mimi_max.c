/* My solution to the Mini-Max Sum problem */

int descending(const void * a, const void * b) {
    return (* (int *)b - * (int *)a);
}
int ascending(const void * a, const void * b) {
    return (* (int *)a - * (int *)b);
}

void miniMaxSum(int arr_count, int* arr) {
    qsort(arr, arr_count, sizeof(int), ascending);
    long int sMin=0, sMax=0;
    for(int i=0; i<4; i++) {
        sMin+=arr[i];
    }
    qsort(arr, arr_count, sizeof(int), descending);
    for(int i=0; i<4; i++) {
        sMax+=arr[i];
    }
    printf("%ld %ld", sMin, sMax);
}
