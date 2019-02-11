public class euler7{

    public static void main(String[] args) {
        System.out.println(nthPrime(10001));
    }
    
    public static long nthPrime(long n) {
        int numberOfPrimes = 0;
        long prime = 1;
        
        while (numberOfPrimes < n) {
            prime++;
            if (isPrime(prime)) {
                numberOfPrimes++;
            }
        }
        return prime;
    }
    
    static boolean isPrime(long x){
        for(int i=2;i <= x/2;++i){
            if (x % i == 0)
                return false;   
        }
        return true;
    } 
}
