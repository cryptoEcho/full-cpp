/* https://habr.com/ru/post/180085/
return sign(a, b)min(|a|,|b|)
*/

int __min(int a, int b) {
    if (a > b)
        return a;
    return b;
}


int LLR(int a, int b)
{
  if (a > 0) 
    return (b > 0) ? __min(a, b) : -__min(a, -b);
  else
    return  (b > 0) ? -__min(-a, b) :  __min(-a, -b);
}
