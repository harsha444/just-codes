MAX_CHAR = 256

def findFirstNonRepeatingCharacter(s):
	inDLL = []
	repeated = [False]* MAX_CHAR

	for i in xrange(len(s)):
		print("processing letter {}".format(s[i]))
		ind_e = ord(s[i])
		if not repeated[ind_e]:
			repeated[ind_e] = True
			inDLL.append(s[i])
		elif inDLL and inDLL[0] == s[i]:
			inDLL.remove(s[i])
		if inDLL:
			print(inDLL[0])


s = 'geeksforgeeks'
findFirstNonRepeatingCharacter(s)