//token.h
struct Token {
	char kind;
	double value;
	string name;
	Token(char ch) :kind(ch), value(0) { } //Constructor for operators
	Token(char ch, double val) :kind(ch), value(val) { } //Constructor for token which are number
	Token(char ch, string n) :kind(ch), name(n) {} //Constructor for tokens like +, -, *, /
};

//----------------------------------------------------------------------------------------------
//stream of Token 

class Token_stream {
	bool full;
	Token buffer;
public:
	Token_stream() :full(0), buffer(0) { } //Empty token stream

	Token get(); 
	void unget(Token t) { buffer=t; full=true; } //inline function which makes token_stream full

	void ignore(char c);
};