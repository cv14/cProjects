/*

Extend atof to handle scientific notation of the form 123.45e-6 where a
floating-point number may be followed by e or E and an optionally signed
exponent.

cv14 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char s[]);

int main(void)
{
  printf("%f\n", atof("123.0245"));
	printf("%f\n", atof(" 123.89e-6"));
  //printf("%f\n", atof("1288644.345e-5.337"));
  //to solve this apply the same rule for after e.


}

double atof(char s[])
{
	double val, power;
  int i, sign;

  for(i = 0; isspace(s[i]); i++)
    ;

  sign = (s[i] == '-') ? -1 : 1;

  if(s[i] == '+' || s[i] == '-')
      i++;

  for(val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');

  if(s[i] == '.')
      i++;

  for(power = 1.0; isdigit(s[i]); i++){
      val = 10.0 * val + (s[i] - '0');
      power *= 10.0;
  }

  val = sign * val / power;


  if(s[i] == 'e' || s[i] == 'E'){
    i++;
    if(s[i++] == '-'){
      power = pow(10,s[i] - '0');
    }else if(s[i++] == '+'){
          power = powf(10, 1/(s[i] - '0'));
        }
    return val/power;
  }

  return val;
}
