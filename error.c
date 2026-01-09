// 40. WAP to implement the following operation on queue: Enqueue, Dequeue, and Display. [A]
#include<stdio.h>
#define max 3
int q[max];
int r=-1,f=-1;
void enqueue();
void dequeue();
void display();
void main() {
	int choice;
	do{
		
		printf("\n\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit");
		printf("\nenter value as per above :");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nthank you for visite...");
				break;
			default:
				printf("\nenter between 1 to 4.....");
		}
	}while(choice!=4);
}
void enqueue(){
	int eele;
	printf("enter value : ");
	scanf("%d",&eele);
	
	printf("r = %d\n f= %d \n",r,f);
	
	if(r>=max){
		printf("\nqueue overflow ");
		return;
	}
	
	r++;
	q[r]=eele;
	printf("\nyour element enqueued sucsessfully......");
	if(f=-1){
		f++;
	}
	printf("r = %d\n f= %d \n",r,f);
}
void dequeue(){
	int dele;
	if(f<0){
		printf("queue is underflow(empty)");
		return;
	}
	else{
		dele=q[f];
		printf("\ndeleted element is : %d",dele);
		if(f==r){
			f=r=-1;
		}
		else{
			f++;
		}
	}
}
void display(){
	int i;
	if(f<0){
		printf("\nquqeue is empty....");
		return;
	}
	else{
		for(i=f;i<=r;i++){
			printf("\n%d",q[i]);
		}
	}
}
