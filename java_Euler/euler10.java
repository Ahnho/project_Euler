import java.util.ArrayList;

/**
 * euler10
 */

public class euler10 {
    public static void main(String[] args){
        ArrayList so = new ArrayList<Integer>();
        for (int i =2;i<=2000000; i++){
            if (isPrime(i)){
                so.add(i);
            }
        }
        System.out.println(sum(so));

    }

    static long sum(ArrayList x){
        long o = 0 ; 
        for (int i =0;i<=x.size();i++){
            o += (int)x.get(i);
        }
        return o;
    }
    
    static boolean isPrime(long x){
        for(int i=2;i <= x/2;++i){
            if (x % i == 0)
                return false;   
        }
        return true;
    } 
}