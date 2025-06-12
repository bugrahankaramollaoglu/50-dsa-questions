int strlen(String str) {
  int length = 0;

  for (int i = 0; i < str.length; i++) {
    length++;
  }

  return length;
}

void main() {
  String str = "HelloWorld!";

  print("Length of string: ${strlen(str)}");
}
