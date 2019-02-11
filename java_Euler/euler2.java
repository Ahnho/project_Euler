import java.util.Arrays ;

public class euler2{

    public static void main(String[] args){
        double x;
        x = 0 ;
        int[] a = {1,2};
        while (x > 4000000){
            if (a[1] % 2 ==0 ){
                x += a[1];
            }
            a[1] = a[0] + a[1];
            Arrays.sort(a);            
        }
        System.out.println(x);
    }
} 
