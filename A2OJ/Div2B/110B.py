n = input()
ans = ""
p = ["a","b","c","d"]
for i in range(0,n):
    ans += p[i%4]
print ans
