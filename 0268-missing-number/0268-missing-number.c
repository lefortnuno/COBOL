int missingNumber(int* t, int n) { 
    unsigned short int v = n;
    for(unsigned short int i=0; i<n; i++){
        v ^= i ^ t[i];
    }
    return v;
}