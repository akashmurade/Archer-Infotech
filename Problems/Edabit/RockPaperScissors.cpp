// https://edabit.com/challenge/MYqnQ3DpPZi9di4iW
std::string rps(std::string s1, std::string s2) {
	if(s1 == s2) {
		return "TIE";
	}
	if((s1 == "rock" && s2 == "scissors") || (s1 == "paper" && s2 == "rock") || (s1 == "scissors" && s2 == "paper")) {
		return "Player 1 wins";
	}
	return "Player 2 wins";
}