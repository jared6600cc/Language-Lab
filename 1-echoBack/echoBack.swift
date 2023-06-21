var MAXSTRINGLENGTH = 8
while true {
    print("Enter string: ")
    if let inString = readLine() {
        if inString.count > MAXSTRINGLENGTH {
            print("Error: String exceeds maximum string length [" + String(MAXSTRINGLENGTH) + "]")
        } else {
            print("[ " + inString + " ]")
            break
        }
    }
}
