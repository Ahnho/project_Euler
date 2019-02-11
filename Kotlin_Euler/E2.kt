fun fibo(w:Int):Int{
    var a = 1
    var b = 1
    for (i in 1..w){
        val sum = a+b
        a = b
        b = sum

   }
    return a
}

fun main(arrgs:Array<String>){
    var s = 0
    var w = 1
    while (fibo(w) < 4000000){
        if (fibo(w) % 2 == 0){
            s += fibo(w)
        }
        w += 1
    }
    println(s)
}