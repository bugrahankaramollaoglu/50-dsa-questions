fun strlen(str:String) : Int {
	var length = 0
	for (char in str) {
		length++
	}
	return length
}

fun main() {
	val str = "merhaba dünya"
	println(strlen(str))
}
