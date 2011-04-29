#include<fstream>
#include <iostream>
#include<iomanip>
#include <string>
#include <sstream>
#include "stack.h"
#include <cstdio>
#include <cctype>

#include <cstring>
using namespace std;





int prec(char c)
{
	if (c == '+' || c == '-')
		return 1;
	if (c == '*' || c == '/')
		return 2;
	return 0;
}

string
infix_2_postfix(string infix  )
{
    char temp;
    
    Stack os;
    istringstream in(infix);
    ostringstream out;
    char c;
    int n;
    char str[20];

	while (in >> c)
	{
		if (isdigit(c))
		{
                   in.putback(c);
                   in >> n;
                   //sprintf(str,"%d ",n);
                   out << n << " ";
		}


		switch (c)
		{
		case ' ':
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case ')':
			while (!os.empty() && prec(c) <= prec(os.top()))
			{
				temp = os.top();
				os.pop();
				if (temp != '(')
				{
				    str[0] = temp;
				    str[1] = 0;
				    out << str;
			    }
			}
			if (c != ')')
			   os.push(c);
			else
				if (!os.empty())
				   os.pop();
			break;
		case '(':
			os.push(c);
			break;
		}
	} //end while

	//now finish placing operators that are left.
	while (!os.empty())
	{
		temp = os.top();
		os.pop();
		if (temp != '(')
		{
		    str[0] = temp;
		    str[1] = 0;
		    out << str;
	    }
	}
	return out.str();
}



int evaluate(string pfix)
{
  Stack s;
  istringstream in(pfix);
  char c;
  int n;
  int a, b;

  while (in >> c)
  {
     if (isdigit(c))
     {
        in.putback(c);
        in >> n;
        s.push(n);
     }
     else //c is an operator
     {
        switch(c)
        {
           case '+': s.push(s.pop() + s.pop());
                     break;
                     
                    
                     
                     
           case '-': b = s.pop();
			s.push(s.pop() - b);
		     break;
                     
                     
                     
                     
                     
           case '*': s.push(s.pop() * s.pop());
                     
                     
                    
                     
                     break;
           case '/': b= s.pop();
		s.push(s.pop() / b);
                     
                     
                     
                     
                     break;
        }
     }
}  
  return s.top();
}

int 
 main()
{
    string infix;
    string pfix; 
    
    ifstream file("expr.txt");
cout << endl << "         Infix to Postfix -- C++ Assignment #4\n\n";
    
getline(file,infix);
	cout << setw(50) << "Solution";
	cout << setw(10) << "expression" << endl;
	while(!file.eof())
	{
  
        cout << setw(50) << infix;
        pfix = infix_2_postfix( infix );
        cout << setw(10) << evaluate(pfix) << endl;


	  // cout << infix;
          //for(int i=0; i < 60 - infix.length(); i++)
          // cout << ' ';
          //cout << evaluate(pfix) << endl;
	  //you needed to get the next line of input before loop end
          getline(file,infix);
        }  
    file.close();
}

