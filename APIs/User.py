from requests import *
print "Welcome to Codeforces "
print "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
print "1:Info\t2:Rating\t3:Status"
x = input("please enter your request : ")
d = {}
d[1] = "https://codeforces.com/api/user.info?handles="
d[2] = "https://codeforces.com/api/user.rating?handle="
d[3] = ["https://codeforces.com/api/user.status?handle=","&from=","&count="]
if(x == 1):
    handle = raw_input("Please enter correct hadle name : ")
    r = get(d[1]+handle)
    data = r.json()
    if(data["status"] != "OK"):
        print "Not correct handle"
    else:
        p = data["result"][0]
        print "############################################################"
        print "Your request : "
        print handle + "("+p["rank"] + ")"
        print p["firstName"] + " " +p["lastName"]
        print p["country"] + ", "+p["city"]
        print "Rating : " +str(p["rating"])
        print "Friend of : " + str(p["friendOfCount"]) + " user(s)"
        print "###########################################################"
#elif(x == 2):

#elif(x == 3)
