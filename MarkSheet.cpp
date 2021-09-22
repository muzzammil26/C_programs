#include<stdio.h>
main()
{
	int roll_no,std;
	float chem,phy,math,urdu,eng,tot,per;
	char st_name[15];
	printf("\t\tINFORMATION ABOUT STUDENT");
	printf("\n\nEnter Your Name: ");
	gets(st_name);
	printf("Enter Your Roll NO: ");
	scanf("\n%d",&roll_no);
	printf("Enter Your Standard: ");
	scanf("%d",&std);
	printf("\nMarks of Chmeistry: ");
	scanf("%f",&chem);
	printf("Marks of Physics: ");
	scanf("%f",&phy);
	printf("Marks of Math: ");
	scanf("%f",&math);
	printf("Marks of Urdu: ");
	scanf("%f",&urdu);
	printf("Marks of English: ");
	scanf("%f",&eng);
 	tot=chem+phy+math+urdu+eng;
 	per=(tot/500)*100;
 	printf("--------------------------------------------------------------------------------");
 	printf("\t\t\t\tSTUDENT MARK SHEET");
 	printf("\nSTUDENT NAME: %s",st_name);
 	printf("\nROLL NO: %d",roll_no);
 	printf("\nCLASS: %d",std);
 	printf("\n--------------------------------------------------------------------------------");
	printf("\nChemistry:\t\t\t\t%.2f",chem);
	printf("\nPhysics:\t\t\t\t%.2f",phy);
	printf("\nMath:\t\t\t\t\t%.2f",math);
	printf("\nUrdu:\t\t\t\t\t%.2f",urdu);
	printf("\nEnglish:\t\t\t\t%.2f",eng);
	printf("\n--------------------------------------------------------------------------------");
	printf("TOTAL MARKS:\t\t\t\t%.2f",tot);
	printf("\nPERCENTAGE:\t\t\t\t%.2f%%",per);
	if (per>=80&&per<=100)
	printf("\nGRADE:\t\t\t\t\t(A+)");
	else if(per>=70&&per<=79)
	printf("\nGRADE:\t\t\t\t\t(A)");
	else if(per>=60&&per<=69)
	printf("\nGRADE:\t\t\t\t\t(B)");
	else if(per>=50&&per<=59)
	printf("\nGRADE:\t\t\t\t\t(C)");
	else if(per>=40&&per<=49)
	printf("\nGRADE:\t\t\t\t\t(D)");
	else if(per>=33&&per<=39)
	printf("\nGRADE:\t\t\t\t\t(E)");
	else if(per<33)
	printf("\nGRADE:\t\t\t\t\tFAIL");
	printf("\n********************************************************************************");

}

