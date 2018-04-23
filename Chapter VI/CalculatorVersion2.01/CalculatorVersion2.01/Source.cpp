
//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

/*
This file is known as calculator02buggy.cpp

I have inserted 5 errors that should cause this not to compile
I have inserted 3 logic errors that should cause the program to give wrong results

First try to find an remove the bugs without looking in the book.
If that gets tedious, compare the code to that in the book (or posted source code)

Happy hunting!

*/

/*
Simple calculator
	Re vision history:
	Re vise d by Bjarne Stroustrup Novembe r 2013
	Re vise d by Bjarne Stroustrup May 2007
	Re vise d by Bjarne Stroustrup August 2006
	Re vise d by Bjarne Stroustrup August 2004
	Originally writte n by Bjarne Stroustrup
	(bs@cs.tamu.e du) Spring 2004.
	This program impleme nts a basic e xpre ssion calculator.
	Input from cin; output to cout.
	The grammar for input is:
	Stateme nt:
		Expre ssion
		Print
		Quit
	Print:
		;
	Quit:
		q
	Expre ssion:
		Te rm
		Expre ssion + Te rm
		Expre ssion – Te rm
	Te rm:
		Primary
		Te rm * Primary
		Te rm / Primary
		Te rm % Primary
	Primary:
		Numbe r
		( Expre ssion )
		– Primary
		+ Primary
	Numbe r:
		floating-point-lite ral
		Input come s from cin through the Toke n_stre am calle d ts.
*/

#include "std_lib_facilities.h"
//-----------------------------------------------------------------------------

class Variable {
public:
	string name;
	double value;
	Variable(string s, double d):name{s},value{d}{} 
};

vector<Variable> var_table; //list of all variable
//-----------------------------------------------------------------------------

double get_value(string s)
	//returns the value of given variable s
{
	for (Variable &v : var_table)
		if (v.name == s)return v.value;
	error("\n\aUndefined variable\n");
}

//------------------------------------------------------------------------------

void set_value(string s, double new_value)
	//set new value to a variable
{
	for (Variable &v : var_table)
	{
		if (v.name == s)
		{
			v.value = new_value;
			return;
		}
	}
	error("\n\aset: undifined variable\n");
}

//---------------------------------------------------------------------------g --

bool is_declared(string s)
	//check if the new variable is already present or not
{
	for (Variable &var: var_table)
		if (var.name == s)return true;
	return false;
}

//---------------------------------------------------------------------------------

double define_name(string var, double val)
	//add (var, val) to var_table
{
	if (is_declared(var))
		error("\n\avar, declared twice\n");
	var_table.push_back(Variable(var, val));
	return val;
}


//-----------------------------------------------------------------------------

const char number = '8';
const char quit = 'x';
const char print = '=';
const string result = "= ";
const string prompt = "> ";
const char name = 'a';
const char let = 'L';
const string declKey = "let";


//------------------------------------------------------------------------------

class Token {
public:
	char kind;        // what kind of token
	double value;	// for numbers: a value
	string name;

	Token(char ch)    // make a Token from a char
		:kind{ ch }, value{ 0 } { }
	Token(char ch, double val)     // make a Token from a char and a double
		:kind{ ch }, value{ val } { }
	Token(char ch, string n) : kind{ ch }, name{ n } {}
};

//------------------------------------------------------------------------------

class Token_stream {
public:
	Token_stream();   // make a Token_stream that reads from cin
	Token get();      // get a Token (get() is defined elsewhere)
	void putback(Token t);    // put a Token back
	void ignore(char c);	//discard character upto and including a c
private:
	bool full;        // is there a Token in the buffer?
	Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
	:full(false), buffer(0) {}    // no Token in buffer


//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;       // copy t to buffer
	full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
	if (full) {       // do we already have a Token ready?
					  // remove token from buffer
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (ch) {
	case print: 
	case quit: 
	case '(': 
	case ')': 
	case '+': 
	case '-': 
	case '*': 
	case '/': 
	case '{': 
	case '}':
	case'%': 
			return Token(ch);        // let each character represent itself
	case '.':					//floating point literal can start with a '.'
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		cin.putback(ch);         // put digit back into the input stream
		double val;
		cin >> val;              // read a floating-point number
		return Token(number, val);
	}
	default:
		//added in version 3
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && isalpha(ch) || isalnum(ch)) s += ch;
			cin.putback(ch);
			if (s == declKey) return Token{let};
			return Token{ name,s };
		}
		error("Bad token");
	}
}

//------------------------------------------------------------------------------

void Token_stream::ignore(char c)
	//c represent the kind of token
{
	//first look in buffer
	if (full && c == buffer.kind)
	{
		full = false;
		return;
	}

	full = false;
	
	//now search in input
	char ch = 0;
	while (cin >> ch)
		if (ch == c)return;
}
//-------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '{': //handle '{' ( expression ) '}'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != '}') error("'}' expected");
		return d;
	}
	case '(':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case number:            // we use '8' to represent a number
		return t.value;  // return the number's value
	case'-':
		return -primary();
	case'+':
		return +primary();
	default:
		error("primary expected");
	}
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
	double left = primary();
	Token t = ts.get();        // get the next token from token stream

	while (true) {
		switch (t.kind) {
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		case'%':
		{
			double d = primary();
			if (d == 0)error("\n\aDivide by zero\n");
			left = fmod(left, d);
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);     // put t back into the token stream
			return left;
		}
	}
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
	double left = term();      // read and evaluate a Term
	Token t = ts.get();        // get the next token from token stream

	while (true) {
		switch (t.kind) {
		case '+':
			left += term();    // evaluate Term and add
			t = ts.get();
			break;
		case '-':
			left -= term();    // evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;       // finally: no more + or -: return the answer
		}
	}
}

//-----------------------------------------------------------------------------------------
void clean_up_mess()
{
	ts.ignore(print);
}
//-----------------------------------------------------------------------------------------

double declaration()
{
	Token t = ts.get();
	if (t.kind != name)error("\n\aname, expected in declaration\n");
	string var_name = t.name;

	Token t2 = ts.get();
	if (t2.kind != '=')error("\n\aexpected =, after name\n");

	double var_val = t2.value;

	double d = expression();
	define_name(var_name, var_val);

	return d;
}

//------------------------------------------------------------------------------------------
double statement()
{
	Token t = ts.get();
	switch (t.kind)
	{
	case let:
		return declaration();
	default:
		ts.putback(t);
		return expression();
	}
}

//----------------------------------------------------------------------------------------
void calculation()
{
	while (cin) {
		try
		{
			cout << prompt;
			Token t = ts.get();

			while (t.kind == print) t = ts.get();       //eat = 

			if (t.kind == quit)
				return;

			ts.putback(t);

			cout << result << statement() << "\n";
		}
		catch (exception& e) {
			cerr << "error: " << e.what() << '\n';
			clean_up_mess();
		}
	}
}

//------------------------------------------------------------------------------------------

int main()
try
{
	cout << "\nWelcome to our simple calculator."
		<< "\nPlease enter expressions using floating point number."
		<< "\nOur calculator is able to operate using these operators"
		<< "\n\t+"
		<< "\n\t-"
		<< "\n\t*"
		<< "\n\t/"
		<< "\n\t()"
		<< "\n\tEnter " << print << " for printing result "
		<< "\n\tEnter " << quit << " for exiting from calculator\n";

	//predefined names
	define_name("pi", 22 / 7.0);
	define_name("e", 2.7182818284);

	calculation();
	keep_window_open("~");
	return 0;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}

//------------------------------------------------------------------------------

