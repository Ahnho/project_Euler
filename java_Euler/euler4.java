import sun.security.util.Length;

public class euler4 {
    public static void main(String[] args){
        ArraryList palin = new ArraryList();
        for (int i=100; i<1000;++i){
            for (int j = i; j<1000;++j){
                n = String( i* j);
                for (int k=0;k<Length(n);++k){
                    if (n[k] != n[-(k+1)]){
                        break;
                }
                else{
                    plain.add(i * j);
                }
            }
        }
    }
    System.out.println(Collections.max(palin));
    }
}