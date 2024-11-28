//#include <cstdio>
//struct std{
//		int number;
//		float score;
//		struct std *next;
//	};
//int main(){
//	struct std a,b,c,*head,*p;
//	a.number = 10101; a.score = 89.5;
//	b.number = 10103; b.score = 90;
//	c.number = 10107; c.score = 85;
//	head = &a;a.next = &b;b.next = &c;c.next = NULL;
//	p = head;
//	do
//	{
//		printf("%ld%5.1f\n",p->number,p->score);
//		p = p->next;
//	}while(p != NULL)
//	return 0;
//	
//	
//}

//#include <cstdio>
//#include <cstdlib>
//#define LEN sizeof(struct Student)
//struct Student{
//	long num;
//	float score;
//	struct Student *next;
//};
//int n;
//struct Student *creat(void){
//	struct Student *head,*p1,*p2;n = 0;
//	p1 = p2 = (struct Student*)malloc(LEN);
//	scanf("%ld,%f",&p1->num,&p1->score);
//	head = NULL;
//	while(p1->num!=0){
//		n = n+1;
//		if(n == 1)head = p1;
//		else p2->next = p1;
//		p2 = p1;
//		p1 = (struct Student*)malloc(LEN);
//		scanf("%ld,%f",&p1->num,&p1->score);
//	}
//	p2->next = NULL;return(head);
//}
//int main(){
//	struct Student *pt;
//	pt = creat();
//	printf("%lf,%f",pt->num,pt->score);
//}