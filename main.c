#include"bubblesort.h"

int main(void){
char x=0;
printf("Choose Sorting Method (Enter a for ascending and enter d for descending):");
scanf("%c",&x);
if (x=='a'){GetArray();
SortAsn();
print();
printf("\n");
}
if(x=='d')
{GetArray();
SortDsn();
print();
printf("\n");
}

}
