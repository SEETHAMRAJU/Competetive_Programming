import requests
print "\t    Welcome to Codeforces Contest Details page"
print "----------------------------------------------------------------------"
print "1:List\t\t2:Rating Changes\t3:Standings(Details)\t4:Status\n"
x = input("Please enter your request : ")
d = {}
d[1] = "https://codeforces.com/api/contest.list?gym=true"
d[2] = "https://codeforces.com/api/contest.ratingChanges?contestId="
d[3] = ["https://codeforces.com/api/contest.standings?contestId=","&from=","&count=","&showUnofficial=true"]
d[4] = ["https://codeforces.com/api/contest.status?contestId=","&from=","&count="]
if(x == 1):
    print "You requested for list of Contests"
    r = requests.get(d[1])
    data = r.json()
    print data
elif(x == 2):
    ID = raw_input("Enter Contest ID : ")
    print "You requested for rating changes in a Contest " + ID
    r = requests.get(d[2]+ID)
    data = r.json()
    print data
elif(x == 3):
    ID = raw_input("Enter Contest ID : ")
    fr = raw_input("Enter starting location : ")
    cnt = raw_input("Enter number of standings : ")
    print "You requested for " + cnt + " standings from "+fr + " for the contest "+ID
    r = requests.get(d[3][0]+ID+d[3][1]+fr+d[3][2]+cnt+d[3][3])
    data = r.json()
    p = data["result"]["contest"]
    print "------------------------------------------------------------------------"
    print p["name"] 
    p = data["result"]
    print "Problems : "
    
    for j in p["problems"]:
        print j["index"] + " -> " + j["name"] 
    print "----------------------------------------------------------------------"
elif(x == 4):
    ID = raw_input("Enter Contest ID: ")
    fr = raw_input("Enter starting location : ")
    cnt = raw_input("Enter number of questions : ")
    print "You requested for "+cnt+" questions' status from "+fr +" for the contest "+ID
    r = requests.get(d[3][0]+ID+d[3][1]+fr+d[3][2]+cnt)
    data = r.json()
