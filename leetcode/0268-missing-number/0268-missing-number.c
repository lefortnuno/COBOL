int missingNumber(int* t, int n) { 
    unsigned long int v = ((n+1)*n)/2;
    for(unsigned short int i=0; i<n; i++){
        v -= t[i];
    }
    return v;
}