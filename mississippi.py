import numpy as np

def prCharWithFreq(str) :

    n = len(str)

 

    freq = np.zeros(26, dtype = np.int)
 

    for i in range(0, n) :

        freq[ord(str[i]) - ord('a')] += 1

                

    for i in range(0, n) :

        if (freq[ord(str[i])- ord('a')] != 0) :

             

            print (str[i], freq[ord(str[i]) - ord('a')], 

                                                end = " ")
 

            freq[ord(str[i]) - ord('a')] = 0

         
