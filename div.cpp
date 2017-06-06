除法
/*Integer Integer::divi(Integer &rhs) {
	//cout << *this << endl;
	//cout << rhs << endl;
	if (this->real.size() < rhs.real.size() || *this < rhs) {
		Integer tmp("0");
		return tmp;
	}
	if (rhs.real.size() == 1 && rhs.real[0] == 0)
		throw "Denominator can't be 0\n";
	Integer beDiv = *this;
	int count = this->real.size() - rhs.real.size() + 1; //最大位數
	int rhsSize = rhs.real.size();
	vector<long long> ansVect;
	vector<long long> partNumber; //beDiv
	long long partAns = 0;
	int i = 0;
	int m = 0;
	bool z = true;
	int ansInd = 0;
	while (1) {
		partAns = 0;
		partNumber.clear();
		for (int j = 0; j < rhsSize + i && j < beDiv.real.size(); j++)
			partNumber.push_back(beDiv.real[j]);
		Integer tmp(partNumber, '+'); //beDi
		if (tmp > rhs || tmp == rhs) {
			ansInd = ansInd + rhsSize + i;
			partAns = Find(tmp, rhs, 0, MAX_NUMBER, 0);
			Integer Div = rhs * partAns;
			//cout << beDiv << endl;
			//cout << Div << endl;
			int bd = 0;
			for (; bd < beDiv.real.size(); bd++)
				if (beDiv.real[bd] > 0)
					break;
			bd = bd + Div.real.size() - 1;
			for (int j = Div.real.size() - 1; j >= 0 && bd >= 0; j--, bd--) {
				beDiv.real[bd] = beDiv.real[bd] - Div.real[j];
				if (beDiv.real[bd] < 0) {
					beDiv.real[bd] += MAX_NUMBER;
					beDiv.real[bd - 1] -= 1;
				}
			}
			ansVect.push_back(partAns);
			m = ansVect.size() - m;
			beDiv.dzero(ansVect, m);
			z = true;
			if (beDiv.real[0] != 0)
				z = false;
			i = -1;
		}
		if (ansVect.size() == count)break;
		i++;
		if (i >= 1 && z)
			ansVect.push_back(0);
	}
	char s = '+';
	if (sign != rhs.sign)
		s = '-';
	Integer ans(ansVect, s);
	return ans;
}

void Integer::dzero(vector<long long> &ans, int &m) {
	vector<long long>newReal;
	bool first = false;
	int i = 0;
	int tmp = m;
	for (; i < tmp && i < this->real.size(); i++)
		if (this->real[i] != 0)
			break;
		else
			m--;
	for (; i < this->real.size(); i++)
		newReal.push_back(this->real[i]);
	if (newReal.size() == 0)
		newReal.push_back(0);
	this->real.clear();
	this->real.assign(newReal.begin(), newReal.end());
	this->setNumData(this->newNumData());
}*/
階層
/*NumberObject Integer::factorial(const NumberObject &num) {
	Integer tmp = num;
	if (tmp.sign == '-')
		throw "Can't be negtive";
	Integer ans = 1;
	Integer one = 1;
	for (; tmp > one; tmp = tmp - 1)
		ans = ans*tmp;
	return ans;
}*/