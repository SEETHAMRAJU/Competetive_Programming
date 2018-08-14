
a,b = map(int ,raw_input().split())
c = map(int ,raw_input().split())
arg = input()
total = reduce(lambda x,y : x+y,c)
toshare = total - c[b]
if((toshare/2)== arg):
    print "Bon Appetit"
else :
    print str(arg - (toshare/2))