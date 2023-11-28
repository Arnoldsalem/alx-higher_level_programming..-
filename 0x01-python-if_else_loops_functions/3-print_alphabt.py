#!/usr/bin/python3
for A in range(97, 123):
    if chr(A) == 'q' or chr(A) == 'e':
        continue
    print(chr(A).format(A), end='')
