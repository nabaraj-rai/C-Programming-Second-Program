#include<stdio.h>
#include<conio.h>
/*    Hello Second Program    */
main()
{
	int days, y, m, rd;
	printf("Enter the number of days: ");
	scanf("%d",&days);
	y = days/365;
	rd=days%365;
	m=rd/30;
	rd=rd%30;
	printf("The %d days converted into %d year %d months and %d remaining days",days, y, m, rd);
	getch();
}
