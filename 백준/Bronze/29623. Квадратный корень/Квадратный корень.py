import sys
from decimal import Decimal

input = sys.stdin.readline

answer = []

N = int(input())
for _ in range(N):
    A, B, C, D = map(int, input().split())

    L = Decimal(A) + Decimal(B).sqrt()  
    R = Decimal(C) + Decimal(D).sqrt() 

    if L < R:  
        answer.append("Less\n")
    elif L > R:
        answer.append("Greater\n")
    else:
        answer.append("Equal\n")

print(''.join(answer))
