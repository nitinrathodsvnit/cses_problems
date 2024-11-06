const int mx = 1e6;
int Counting_Divisors[mx];
void init(){
    for(int i=1; i<=mx; i++){
        for(int j=i; j<=mx; j+=i){
            Counting_Divisors[j]++;
        }
    }
}