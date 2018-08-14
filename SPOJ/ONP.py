def solve(l)
    l = list(l)
    st = []
    sym = []
    num = []
    ans = ""
    for i in range(0,len(l)):
        if(l[i] == ")"):
            temp = ""
            while(st[len(st)-1] != "(" || st != []):
                p = st.pop()
                if(p >= 43 and p <= 47):
                    sym.append(p)
                else:
                    num.append(p)
            for k in num:
                temp += k
            for k in sym:
                temp += k
            st.pop()
            st.append(temp)
        else:
            st.append(l[i])
        
    p = ""
    for k in st:
        p += k


t = input()
answer = []
for i in range(0,t):
    x = raw_input()
    ans = solve(x)
    answer.append(ans)
for j in answer:
    print j

