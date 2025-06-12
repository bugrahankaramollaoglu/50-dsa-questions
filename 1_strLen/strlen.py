def strlen(s):

    length = 0

    for _ in s:

        length += 1

    return length


str = "Hello, World!"

print(f"Length of string: {strlen(str)}")
