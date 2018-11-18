class stack:
    l = []
    top = 0
    def mpop(self):
        stack.top -= 1
        return stack.l.pop()
    def mpush(self,k):
        stack.l.append(k)
        stack.top += 1
    def printl(self):
        for i in stack.l:
            print i
if __name__ == "__main__":
    s = stack()
    n = input()
    x = map(int , raw_input().split())
    s.mpush(0)
    i = 0
    new = []
    for i in range(0,n):
        new.append(0)
    i = 1
    while(i < n):
        if(x[i] > x[s.l[s.top-1]]):
            while(s.top != 0 and x[i] > x[s.l[s.top-1]]):
                    j = s.mpop()
                    new[j] = i
            s.mpush(i)
        else:
            s.mpush(i)
        i += 1
    while(s.top != 0):
        j = s.mpop()
        new[j] = -1
    
    i = 0
    while(i < n):
        if(x[i] > x[s.l[s.top-1]]):
            while(s.top != 0 and x[i] > x[s.l[s.top-1]]):
                    j = s.mpop()
                    new[j] = i
            s.mpush(i)
        else:
            s.mpush(i)
        i += 1
    while(s.top != 0):
        j = s.mpop()
        new[j] = -1
    print "The array is :"
    print new
