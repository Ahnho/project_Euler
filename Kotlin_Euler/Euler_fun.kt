import java.math.BigInteger
import java.util.ArrayList
import java.util.LinkedList

inline fun Any.toCharList() = toString().toList()
inline fun Any.toDigits() = toCharList().map { c: Char -> Character.getNumericValue(c) }
inline fun Any.isPalindrome() = toCharList() == toCharList().reversed()
