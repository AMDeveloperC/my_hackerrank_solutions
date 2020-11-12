/* My solution to Migratory Birds problem */

int migratoryBirds(int arr_count, int * arr) {
    for(int i = 0; i < arr_count; i++) {
        arr[(arr[i]%10)-1] = arr[(arr[i]%10)-1]+10;
    }
    int max = -1;
    int q = 0;
    for(int i = 0; i < arr_count; i++){
        if(max < arr[i] / 10){
            max = arr[i] / 10;
            q = i + 1;
        }
    }
    return q;
}
