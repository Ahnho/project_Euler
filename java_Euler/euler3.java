import java.util.ArrayList;
import java.util.Arrays ;
import java.util.Collections;
import java.lang.Math;

public class euler3{
    public static void main(String[] args){
        System.out.println(Collections.max(prime(600851475143.0)));
    }
    static boolean is_prime(double x){
        for(int i=2;i <= x/2;++i){
            if (x % i == 0)
                return false;   
        }
        return true;
    } 
    static ArrayList prime(double n){
        double m,p;
        m = n;
        ArrayList fac = new ArrayList();
        p = 2;
        while (m >= p){
            if (m % p == 0){
                fac.add(p);
                m = m / p;
            }
            else{
                p += 1;
                while (! is_prime(p)){
                    p += 1;  
                }
            } 
        }
        return fac;
    }
}
 
