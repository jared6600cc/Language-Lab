using System.Runtime.CompilerServices;

namespace echoBack {
    class EchoBack {
        static void Main(string[] args)
        {
            /* Get string */
            int MAXSTRINGLENGTH = 8;
            string inString;
            Console.WriteLine("Enter string: ");
            inString = Console.ReadLine();
            if (!string.IsNullOrEmpty(inString)) { 
                while (true) {
                    /* Test string */
                    if (inString.Length > MAXSTRINGLENGTH) {
                        // Entered string is too long
                        Console.WriteLine("Exceeded max string length [{0}]\nEnter string: ", MAXSTRINGLENGTH);
                        inString = Console.ReadLine();
                    } else {
                        Console.WriteLine("[ Entered: {0} ]", inString);
                        break;
                    }
                }
            }
        }
    }
}