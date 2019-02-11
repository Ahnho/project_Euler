class euler6{
    public static void main(String[] args){
        System.out.println(B()-A());
    }
    public static double A(){
        int a = 0;
        for (int i = 1 ;i < 101;i++){
            a += Math.pow(i,2);
        }
        return a;
    }
    public static double B(){
        int c = 0;
        for (int i = 1;i <101;i++){
            c += i;
        }
        return Math.pow(c, 2);
    }
}