import sys
from aplusb import add

input = open(sys.argv[2], 'r')
output = open(sys.argv[1], 'w')

n=int(input.readline())
for i in range(n):
    a, b = map(int, input.readline().split())
    print(add(a,b),file=output)
