h = int(input())
m = int(input())

words = ["zero","one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty",
    "twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight",
    "twenty nine","half"]

if m==0:
    print("{} o' clock".format(words[h]))

elif m>=1 and m<=30:
    print("{} {}past {}".format(words[m],"minute{} ".format("s" if m>1 else "") if m not in [15,30,45] else "",words[h]))

else:
    print("{} {}to {}".format(words[60-m],"minute{} ".format("s" if m>1 else "") if m not in [15,30,45] else "",words[h+1] if h < 12 else words[1]))
