import java.util.ArrayList;

class euler12{
    public static void main(String[]args){
        int i = 1;
        int x = 2;
        boolean fo = false;
        while (!fo) {
            if (divisors(i) > 500) {
                System.out.println(i);
                fo = true;
            }
            else {
                i +=x;
                x++;
            }
        }
    }

    public static int divisors (int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) count++;
        }
        return count;
    }
}