fun is_primes(x:Int):Boolean{
    for (i in 2..x/2){
    if (x % i == 0){
        return false
        }
    }
    return true
}

fun primes(n:Int){
    var fac = ArrayList<Integer>()
    var m = n
    var p = 2
    while (m >= p){
        if (m % p == 0){
            fac.add(p)
            m = m /p
        }
        else{
            p +=1
            while (is_primes(p) == false){
                p +=1
            }
        }
    }
    return fac
}

fun main(arrgs:Array<String>){
    println(primes(600851475143))
}