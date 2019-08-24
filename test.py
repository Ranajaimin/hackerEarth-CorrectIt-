n = int(input())
while n>0:
    num = int(input())
    while(num>0 and num!=1):
        if(num%2==0):
            num=num/2
        else:
            num=(num*3)+1
    if(num==1):
        print("\nYES")
    else:
        print("\nNO")
    n=n-1
