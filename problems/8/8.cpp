//https://www.e-olymp.com/ru/problems/8
import math 
n = int(input())
result = 2 * n + math.floor(math.sqrt(n)) + math.ceil(n/math.floor(math.sqrt(n)))
print(result)