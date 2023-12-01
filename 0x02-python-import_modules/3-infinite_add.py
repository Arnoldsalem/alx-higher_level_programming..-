#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    # Get command line arguments excluding the script name
    arguments = argv[1:]

    # If there are no arguments, print 0 and exit
    if not arguments:
        print(0)
    else:
        # Sum the integers obtained from command line arguments
        result = sum(int(arg) for arg in arguments)
        print(result)
