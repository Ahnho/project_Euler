import java.math.BigInteger;

class euler20{
    private static int calcDigits(String s)
	{
		int sum = 0;
		
		for (int i = 0; i < s.length(); i++)
		{
			Character c = new Character(s.charAt(i));
			String z = c.toString();
			int j = Integer.parseInt(z);
			sum += j;
		}
		
		return sum;
    }
    public static BigInteger fac(int a){
        BigInteger w = BigInteger.ONE; 
        for(int i=1 ; i<=a ; i++){
            w = w.multiply(BigInteger.valueOf(i));
        }
		return w;
	}
    public static void main(String[]args){
        BigInteger n = fac(100);
        System.out.println(n);
        System.out.println(calcDigits(n.toString()));
    }
}