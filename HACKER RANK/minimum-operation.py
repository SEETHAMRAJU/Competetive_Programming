n = input()
x = map(int , raw_input().split())
y = list(set(x))
freq = []
for i in y:
    freq.append(x.count(i))
freq.remove(max(freq))
print reduce(lambda x,y : y + x , freq)