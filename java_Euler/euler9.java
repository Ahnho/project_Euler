/**
 * euler9
 */
public class euler9 {
    public static void main(String[] args){
        for (int b = 0; b<=1000; b++){
            for (int a=b;a<=1000;a++){
                if (je(a) + je(b) == je(1000-a-b)){
                    System.out.print((1000 - a - b )*a*b);
                }
            }
        }
    }


    public static int  je(int num) {

        return num*num;
    
      }
    
}
