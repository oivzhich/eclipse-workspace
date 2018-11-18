bool IsPalindrom(string s){
	bool is_palindrom=true;
	int size = s.size();
	for (int i=0; i<=size/2; ++i){
		if (s[i]!=s[size-i-1]){
			is_palindrom=false;
			break;
		}
	}
	return is_palindrom;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
	vector<string> result={};
	for (auto w:words){
		if (IsPalindrom(w)&&w.size()>=minLength)
			result.push_back(w);
	}
	return result;
}
