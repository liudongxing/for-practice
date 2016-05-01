#include <stdio.h>
int solution(int n){
	if (n>0 && n<=2) return n;
	if (n>2) return solution(n-1)+solution(n-2);
}
//the main problem for the segmentatiion fault is due to no condition to exist the recursion process
main(){
int x,y;
printf("please input a number\n");
scanf("%d",&x);
printf("see here %d\n",x);
y=solution(x);
printf("the result is %d",y);
return 0;
}
