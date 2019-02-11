fun main(args:Array<String>){
    println(e1())
}

fun e1():Int{
    var a = 0
    for (i in 1..999){
        if (i % 3 == 0 || i % 5 ==0){
            a += i
        }
    }
    return a
}

