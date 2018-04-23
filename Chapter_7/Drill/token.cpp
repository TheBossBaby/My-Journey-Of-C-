
#include "token.h"
Token Token_stream::get()
{
	if (full) { full=false; return buffer; }
	char ch;
	cin >> ch;
	switch (ch) {
//Handels operators and send them in token stream
	case '(':	case ')':
	case '+':	case '-':
	case '*':	case '/':
	case '%':	case print:
	case '=':	case ',':
	case '_':
		return Token(ch);
//Handels number and send them in token stream
	case '.':	case '0':
	case '1':	case '2':
	case '3':	case '4':
	case '5':	case '6':
	case '7':	case '8':
	case '9':
	{	cin.unget(); //send ch back to input stream
		double val;
		cin >> val;
		return Token(number,val);
	}
	default:
		if (isalpha(ch)) { //if ch is alphabet
			string s;
			s += ch; //send it to string 
//	Name:
//		Letter/Digit/ _  + Name
			while(cin.get(ch) && (isalpha(ch) || isdigit(ch) || ch == '_')) s+=ch;
			cin.unget(); //send characters back to cin
			if (s == "let") return Token(let); //user declraed  a variable	
			if (s == "exit") return Token(Exit); //exit form calculator
			if(s == "sqrt") return Token(Sqrt); //make a token to reprent sqare root operator
			if(s == "pow") return Token(Pow); //make a token to represet Power() operator  
			return Token(name,s);//token of kind token 
		}
		error("Bad token");
	}
}
//----------------------------------------------------------------------------------------------

void Token_stream::ignore(char c)
{
	if (full && c==buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin>>ch)
		if (ch==c) return;
}

//----------------------------------------------------------------------------------------------