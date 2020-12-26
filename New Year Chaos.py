#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    swaps=0 #no_of_swaps=no_of_bribes
    # we are trying to sort the array by swapping to original position
    # Case 1:no bribe
    for i in range(len(q)-1, 0, -1): # start from end of arr
        if q[i]!=i+1: # bribe taken
            # 1 bribe
            if q[i-1]==i+1 and i-1>=0 :
                swaps+=1
                q[i-1], q[i]=q[i], q[i-1]
            elif q[i-2]==i+1 and i-2>=0 :
                swaps+=2
                q[i-2], q[i-1]=q[i-1], q[i-2]
                q[i-1], q[i]=q[i], q[i-1]
            else:
                print("Too chaotic")
                return
        # print(q)
    print(swaps)
if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        n = int(input())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)
