#include <cassert> // assert
#include <iostream> // endl, istream, ostream

int count(int votes[]) {
	//at this point, the input should be right before the votes
	String line; //our ballots
	//String ballots;
	int n;
	int vote;
	int count = 0;
	stringstream ss;
	getLine(cin, line);
	while (line.size() != 0) { //we know we're done when we get to a blank line
		std::stringstream ss(line); //
		while (ss >> n) { //while there's an int to be seen, increment the vote count
			assert(n > 0);
			vote = n-1;
			votes[vote]++; //should find the corresponding candidate and increment their vote count
			count++;
		}
		getLine(cin, line);
	}
	
	return count;
	}

String findWinner(int total, int votes[], String names[]) {
	//int maxCount = 0;
	int half = total/2;
	int tally = 0;
	for (int i = 0; i < votes.size(); i++) {
		tally = votes[i];
		if (tally > half) {
			return names[i];
		}
	}

	//if we get to this point, no candidate had the majority votes
	//we need to start the process of eliminating candidates until we have a winner
}
int main() {
	int instances;
	cin>>instances //should get the number of inputs we're going to have
	string blank;
	getLine(cin, blank); //takes care of that blank lines
	int numCandidates;
	String winner;
	int total;	
		
	for (int i = 0; i < instances; i++) {
		cin>>numCandidates; //gets the number of candidates
		asser(numCandidates <= 20);
		if (numCandidates == 0)
			break;
		int votes[numCandidates];
		String names[numCandidates];
		for (int j = 0; j < numCandidates; j++) {
			getLine(cin, names[j]); //should get the name of the candidate and place it in the array
		}
	
		total = count(votes);
		//at this point, all the votes should have been tallied
		winner = findWinner(total, votes, names);
        }

