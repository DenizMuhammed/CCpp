#include <stdio.h>
#include <conio.h>

int main()
{

char s[6]={'d','u','z','c','e','\0'}; // sondaki \0 ifadesi olmazsa düzgün yazmaz. dene gör
printf("%s",s); puts("");
//printf("%c",s[2]); puts("");



puts(" ");puts(" "); puts(" ");



char s2[]="duzce";
printf("%s\n",s2);



puts(" ");puts(" "); puts(" ");



char s3[3][15]={"ahmet","duzce81","istanbuL1453"};
printf("%s",s3[2]); puts("");
printf("%s",s3[0]); puts("");
printf("%c",s3[2][7]); puts("");



puts(" ");puts(" "); puts(" ");



char *s4="madagaskar";
printf("%s",s4); puts(" ");
printf("%c",s4[1]);




puts(" ");puts(" "); puts(" ");



char s5[20];
scanf("%s",s5); puts("");
printf("%s",s5); puts("");



puts(" ");puts(" "); puts(" ");


char s6[10];
scanf("%s",s6);
printf("%s",s6);



puts(" ");puts(" "); puts(" ");







	
	
	getch(); return 0;
}
