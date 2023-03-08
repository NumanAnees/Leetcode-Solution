
void StrRev(char* str, char* start, char* end) {
	// Return if string is empty or length of string is less than 2
	if (str == nullptr) {
		return;
	}

	// Swap characters, starting from the two extremes
	// and moving in towards the centre of the string
	while (start < end) {
		if (start != nullptr && end != nullptr){
			char temp = *start;
			*start = *end;
			*end = temp;
		}
		start++;
		end--;
	}
}

void ReverseWords(char* sentence) {
	// Here sentence is a null-terminated string ending with char '\0'.
	if (sentence == nullptr) {
		return;
	}

	// To reverse all words in the string, we will first reverse
	// the string. Now all the words are in the desired location, but
	// in reverse order: "Hello World" -> "dlroW olleH".
	int len = strlen(sentence);
	char* start = sentence;
	char * end = sentence + len - 1;
	StrRev(sentence, start, end);

	// Now, let's iterate the sentence and reverse each word in place.
	// "dlroW olleH" -> "World Hello"

	while (true) {
		// Find the start index of a word while skipping spaces.
		while (start && *start == ' ') {
			start++;
		}

		if (start == nullptr || *start == '\0') {
			break;
		}

		// Find the end index of the word.
		end = start + 1;
		while (end && *end != '\0' && *end != ' ') {
			end++;
		}

		// Let's reverse the word in-place.
		if (end != nullptr){
			StrRev(sentence, start, end - 1);
		}

		start = end;
	}
}
