MAXLENGTH = 8
# Get string #
print("Enter string: ")
inString = str(input())
while True:
    if len(inString) > MAXLENGTH:
        print("Exceeded max string length [" + str(MAXLENGTH) + "]\nEnter string: ")
        inString = str(input())
    else:
        print("[ Entered: " + inString + " ]\n")
        break
