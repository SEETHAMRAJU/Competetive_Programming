n = input()
x = map(int,raw_input().split())
new = []
i = 0
while(i<n-1):
    new.append(x[i+1] - x[i])
    i += 1
print new

