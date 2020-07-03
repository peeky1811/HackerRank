#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    ctr=0
    n=len(c)
    i=0
    while i <=(n-2):
        if i<n-2 and c[i+2]==0:
            ctr+=1
            i=i+2
            print("jump2",i)
            if i==n-1:
                break;
        elif c[i+1]==0:
                ctr+=1
                i=i+1
                print("jump1",i)
                if i==n-1:
                    break;
    return ctr

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()
