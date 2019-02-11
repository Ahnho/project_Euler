import sun.security.util.Length;

public class euler5{
    public static void main(String[] args){
        System.out.println(E5());
    }
    public static int gcd(int a ,int b) {
        if(b == 0){
            return a;
        }
        else{
            return gcd(b, a % b);
        }
    }
    public static int lcm(int a,int b){
        return a*b / gcd(a,b);
    } 
    public static int E5(){
        int j = lcm(i,i+1);
        for (int i=2;i<20;i++){
            o = lcm(j,i);
            j = o;
        }
        return j;
    }
}