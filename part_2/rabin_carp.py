prime = 101

def rabin_carp(pattern, text):
	pattern_length = len(pattern)
	text_length = len(text)
	pattern_hash = compute_hash(pattern, pattern_length)
	text_hash = compute_hash(text[0:pattern_length], pattern_length) #For 1st pattern number of characters

	if len(pattern)>len(text):
		print("pattern length must be smaller than or equal to text length")

	if pattern_hash == text_hash and check_equals(pattern, text[0:pattern_length]):
		print(0)

	for i in range(1, text_length-pattern_length+1):
		if i<text_length-pattern_length+1:
			text_hash = recompute_hash(text, text_hash, pattern_length, i-1, i+pattern_length-1)
		if text_hash == pattern_hash:
			if check_equals(pattern, text[i:i+pattern_length]):
				print(i)

def compute_hash(pattern, length):
	hash = 0
	for i in range(0,length):
		hash += ord(pattern[i]) * pow(prime, i)
	return hash

def recompute_hash(text, hash, pattern_length, old_index, new_index):
	hash = hash - ord(text[old_index])
	hash = hash / prime
	hash = hash + (ord(text[new_index])*pow(prime, pattern_length-1))
	return hash

def check_equals(string1, string2):
	if len(string1) != len(string2):
		return False
	else:
		return string1==string2

if __name__ == '__main__':
	pattern = 'bcd'
	text = 'bcdefaabcd'
	rabin_carp(pattern, text)