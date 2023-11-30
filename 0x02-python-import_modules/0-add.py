#!/usr/bin/python3
a = 1
b = 2

exec("""
from add_0 import add
result = add(a, b)
print("{} + {} = {}".format(a, b, result))
""")

