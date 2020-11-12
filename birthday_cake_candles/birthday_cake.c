/* My solution to the Birthday Cake Candels problem */

int descending(const void * a, const void * b) {
    return (* (int *)b - * (int *)a);
}

int birthdayCakeCandles(int ar_count, int* ar) {
    qsort(ar, ar_count, sizeof(int), descending);
    int i=1;
    int count=1;
    while(i<ar_count) {
        if(ar[i-1]==ar[i])
            count++;
        else break;
        i++;
    }
    return count;
}
