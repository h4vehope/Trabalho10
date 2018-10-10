#include <stdio.h>
#include <pot.h>
int potencia (x,y) 
{
int result; i;
result = x;
for < i=y ; i > 1; i--) {
result = result * x;
}
if (y=0){
result=1;
}

return result;
}
