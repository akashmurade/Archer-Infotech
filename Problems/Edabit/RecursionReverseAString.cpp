// https://edabit.com/challenge/HXGx9oXukEgsFK6PH
std::string reverse(std::string str) {
	int len = str.length();
	if(len == 0 || len == 1) {
		return str;
	}
	return str[len - 1] + reverse(str.substr(0, len - 1));
}