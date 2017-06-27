/*

Add access to library functions like sin , exp , and pow . See <math.h>
in Appendix B, Section 4.

cv14
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAXOP 100
#define NUMBER '0'
#define ALFA '1'
#define MAXVAL 100
#define BUFSIZE 100

int getop(char *);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
void viewstack(void);

int bufp = 0;
char buf[BUFSIZE];
int sp = 0;
double val[MAXVAL];

void dealWithName(char s[])
{
   double op2;

   if( 0 == strcmp(s, "sin"))
      push(sin(pop()));
   else if( 0 == strcmp(s, "cos"))
      push(cos(pop()));
   else if (0 == strcmp(s, "exp"))
      push(exp(pop()));
   else if(!strcmp(s, "pow"))
   {
      op2 = pop();
      push(pow(pop(), op2));
   }
   else
      printf("%s is not a supported function.\n", s);
}


void push(double f)
{
	if(sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
	if(sp > 0)
		return val[--sp];
	else
	{
		printf("error: stack empty\n");
		exit(1);
		//return 0.0;
	}
}

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

/* Getop: get next operator or numeric operand. */
int Getop(char s[])
{
   int i = 0;
   int c;
   int next;
   /*size_t len;*/

   /* Skip whitespace */
   while((s[0] = c = getch()) == ' ' || c == '\t')
      ;
   s[1] = '\0';

   if(isalpha(c))
   {
      i = 0;
      while(isalpha(s[i++] = c ))
         c = getch();
      s[i - 1] = '\0';
      if(c != EOF)
         ungetch(c);
      return ALFA;
   }

   /* Not a number but may contain a unary minus. */
   if(!isdigit(c) && c != '.' && c != '-')
      return c;

   if(c == '-')
   {
      next = getch();
      if(!isdigit(next) && next != '.')
      {
         return c;
      }
      c = next;
   }
   else
      c = getch();

   while(isdigit(s[++i] = c))
      c = getch();
   if(c == '.')                 /* Collect fraction part. */
      while(isdigit(s[++i] = c = getch()))
         ;
      s[i] = '\0';
      if(c != EOF)
         ungetch(c);
      return NUMBER;
}

void stkTop(){
	printf("%d\n",(int) val[sp-1]);
}

int dupli(){
	return (int) val[sp-1];
}

void swap(){
	double f, s, t;
	f = pop();
	s = pop();
	push(f);
	push(s);
}

void clearStk(){
	sp = 0;
}

double trigFunc(){
  char a,b ;

  a = getch();
  b = getch();

  return 0;
}

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type = Getop(s)) != EOF)
	{
		switch(type)
		{
      case ALFA:
         dealWithName(s);
         break;
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				if(op2 != 0.0)
					push((int)pop() % (int)op2);
				else
					printf("error: division by zero\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}
