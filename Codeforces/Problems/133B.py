M = 1000003
d = {
        "+" : "1010",
        "-" : "1011",
        "." : "1100",
        "[" : "1110",
        "]" : "1111",
        "<" : "1001",
        ">" : "1000",
        "," : "1101", 
        }

x = raw_input()
ans = ""
for i in x:
    ans = ans + d[i]
s = 0
i = 0

while(i<len(ans)):
    s = (s*2 + int(ans[i]))%M
    i += 1
print s
