#include <stdio.h>
int a[5],pos=-1;

void insert(int e){
	int newpos;
	if (pos+1==5)
		printf("Error: Array is full");
	else
		a[++pos]=e;
}

void del(){
	if (pos==-1)
		printf("Error: Array is empty");
	else
		printf("Deleted:%d",a[pos--]);
}

void search(int el){
	int i;
	for(i=0;i<5;){
		if (a[i]==el){
			printf("Search Successful.Element found at position %d\n",i+1);
			break;
		}
		else
		    i++;
			    
	}
	if (i==5)
			printf("Search Unsuccessful");
}

void sort(){
	int i,j;
	
	for(i=0;i<=pos-1;i++){
		for(j=0;j<=pos-i-1;j++){
			int temp;
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void display(){
	int i;
	for(i=0;i<=pos;i++)
		printf("%d\t",a[i]);
}


int menu(){
	int ch;
	printf("\n1.INSERT\n2.DELETE\n3.SEARCH\n4.DISP ALL\n5.SORT\n6.EXIT\nEnter your choice: ");
	scanf("%d",&ch);
	return ch;
}

void processArray()
{
	int ch;
	for(ch=menu();ch!=6;ch=menu()){
		switch(ch){
			case 1:
				printf("Enter value to be inserted: ");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				del();
				break;
			case 3:
				printf("Enter value to be searched: ");
				scanf("%d",&ch);
				search(ch);
				break;
			case 4:
				display();
				break;
			case 5:
				sort();
				break;
			default:
				printf("Wrong choice\n");
				break;
		}
	}
}

int main(){
	processArray();
	return 0;
}
