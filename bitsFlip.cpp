int countBitsFlip(int a, int b){
    int a_xor_b=a^b;
    int c=0;
    while(a_xor_b)
    {
        a_xor_b&=(a_xor_b-1);
        c++;
    }
    return c;
    
}
