#include "thread.h" 
void fun()
{
	while(1);
}
int main(){
	create(fun);
	create(fun); 
	create(fun);
}
