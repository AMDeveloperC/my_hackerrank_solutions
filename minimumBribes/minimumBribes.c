/**
 * This function implements my 'minimum bribes' solution
 */
void minimumBribes(int q_count, int* q) {
    if (q_count<0 || q_count>pow(10,5)){
        printf("Too chaotic\n");
        return;
    }
    long int change=0;
    int flag=0;
    for(int i=1; i<q_count; i++) {
        if(q[i-1]>(i-1)+3){
            printf("Too chaotic\n");
            return;
        }
    }
    for(int i=0; i<q_count-1; i++) {
        for(int j=0; j<q_count-1; j++) {
            if(q[j]>q[j+1]) {
                swap(&q[j], &q[j+1]);
                change++;
                flag=1;
            }
        }
        if(flag!=0) flag=0;
        else break;
    }
    printf("%ld\n", change);
    return;
}
