import java.math.BigInteger;

class euler25{
	public static void main(String[] args){	
		BigInteger a = BigInteger.ONE;
		BigInteger b = BigInteger.valueOf(2);
        BigInteger c = BigInteger.ZERO;
        BigInteger d = BigInteger.TEN;
        BigInteger e = d;
        for (int k = 1 ; k<=999 ;k++){
            d = d.multiply(e);
        }
		BigInteger max = new BigInteger(d.toString());
        int i = 3;
		for (i = 3; b.compareTo(max) < 0; i++){
			c = a.add(b);
			a = b;
			b = c;
		}
		System.out.println("i: " + i);
    }
    
}