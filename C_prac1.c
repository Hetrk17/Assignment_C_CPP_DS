
// Het Kanzariya


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
	int id;
	char title[50];
	char author[50];
	int price;
	int flag;
};


void main()
{
	int ch,i=0,num,num1,count=0;
	char name[50];

	struct library book[100],temp;

	while(1)
	{
		int f=0;
		printf("\n*********************  MENU  *********************\n");
		printf("1. Add book information \n2. Display book information \n3. List all books of given author \n4. List the title of specified book \n5. List the count of books in the library \n6. List the books in the order of accession number \n7. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("Enter accession number of book: ");
				scanf("%d",&book[i].id);
				printf("Enter title of book: ");
				scanf("%s",book[i].title);
				printf("Enter name of book author: ");
				scanf("%s",book[i].author);
				printf("Enter price of book: ");
				scanf("%d",&book[i].price);
				printf("Enter availability of book (0 for available 1 for not available): ");
				scanf("%d",&book[i].flag);
				i++;
				count++;
				break;

			case 2:
				if(count)
				{
					for(int j=0;j<count;j++)
					{

						printf("\nBook accession no.: %d",book[j].id);
						printf("\nBook title: %s",book[j].title);
						printf("\nBook author: %s",book[j].author);
						printf("\nBook price: %d",book[j].price);
						printf("\nBook availability: %d\n",book[j].flag);
					}
				}
				else
					printf("Library empty\n");
				break;

			case 3:
				if(count)
				{
					printf("Enter author name: ");
					scanf("%s",name);
					for(int j=0;j<count;j++)
					{
						if(!strcmp(book[j].author,name))
						{
							f=1;
							printf("\nBook title: %s\n",book[j].title);
						}
						else
							continue;
					}
				}
				else
					printf("Library empty\n");
				if(f==0)
					printf("No book found\n");
				break;

			case 4:
				if(count)
				{
					printf("Enter book accession number whose information you want to display: ");
					scanf("%d",&num1);
					for(int j=0;j<count;j++)
					{
						if(book[j].id==num1)
						{
							f=1;
							printf("\nBook title: %s\n",book[j].title);
							break;
						}
						else
							continue;
					}
				}
				else
					printf("Library empty\n");
				if(f==0)
					printf("Book not found\n");
				break;

			case 5:
				printf("Number of books in the library are %d\n",count);
				break;

			case 6:
				if(count)
				{
					for(int j=0;j<count;j++)
					{
						for(int k=j+1;k<count;k++)
						{
							if(book[j].id>book[k].id)
							{
								temp = book[j];
								book[j] = book[k];
								book[k] = temp;
							}
						}
					}
					for(int j=0;j<count;j++)
					{
						printf("\nBook accession no.: %d",book[j].id);
						printf("\nBook title: %s",book[j].title);
						printf("\nBook author: %s",book[j].author);
						printf("\nBook price: %d",book[j].price);
						printf("\nBook availability: %d\n",book[j].flag);
					}
				}
				else
					printf("Library empty\n");
				break;

			case 7:
				exit(0);

			default:
				printf("\nInvalid Choice\n");
				break;
		}
	}
}
