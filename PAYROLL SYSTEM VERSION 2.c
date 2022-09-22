#include <stdio.h>
char emailaddress[20];
struct empi{
  char firstname[20];
  char secondname[20];
  char birthdate[20];
  char occupation[20];
  char idno[10];
  char PNO[20];

  char emailaddress[40];
}employee1,employee2,employee3,employee4,employee5;
void main()

{
  {
  
  char firstname[20];
  char secondname[20];
  char birthdate[20];
  char occupation[20];
  char idno[10];
  char PNO[20];
  char emailaddress[40];

   float basicsalary,houseallowance,payrate,tAmount,totaldeductions,paye,overtime;
   float securityinsurance,lifeinsurance,healthInsurance, transportA;
   int num_days,hrs_daily,TTHRS;
   int emp_no;
/*salary*/


   payrate=566.23;
   /*DANCAN'S INFORMATION*/
   /*EMP_NO 111*/

       {
        strcpy(employee1.firstname,"DANCAN");
        strcpy(employee1.secondname,"KARANI");
        strcpy(employee1.occupation,"ACCOUNTANT");
        strcpy(employee1.birthdate,"1/03/1980");
        strcpy(employee1.PNO,"0798969175");
        strcpy(employee1.idno,"234214");
        strcpy(employee1.emailaddress,"karanidan120@gmail");

       /* employee1.PNO[20]=2547969175;*/
       }
    /*mutinda's infomation*/
    /*emp_no 222*/
      strcpy(employee2.firstname,"MARCEL");
      strcpy(employee2.secondname,"MUTINDA");
      strcpy(employee2.occupation,"CASHIER");
      strcpy(employee2.birthdate,"11/04/1990");
      strcpy(employee2.PNO,"0787967564");
      strcpy(employee2.idno,"3898765");
      strcpy(employee2.emailaddress,"mutindamarce03@gmail.com");


    /*FATMA'S INFORMATION*/
    /*emp_no 333*/
   strcpy(employee3.firstname,"IDRIS");
    strcpy(employee3.secondname,"FATMA");
    strcpy(employee3.occupation,"ENGINEER");
    strcpy(employee3.birthdate,"30/04/1998");
    strcpy(employee3.PNO,"0712345678");
    strcpy(employee3.idno,"7654329");
    strcpy(employee3.emailaddress,"fatmaidris02@gmail.com");

    {
     printf("ENTER YOUR EMPLOYMENT NO:\n");
     scanf("%d",&emp_no);
    }
      switch (emp_no)
      {
        case 111:
                 printf("\t\t\t\t\tWELCOME %s %s\t\t\t\t\t\n",employee1.firstname,employee1.secondname);
                 printf("ENTER THE NUMBER OF HOURS YOU WORKED OVERTIME\n");
                 scanf("%d",&TTHRS);

                 system("cls");
                   if(TTHRS<=60)
                {
                 basicsalary=600000;
                 transportA=9000;
                 houseallowance=12000;
                 healthInsurance=0.012*basicsalary;
                 payrate=566.23;
                 lifeinsurance=0.00123*basicsalary;
                 securityinsurance=0.0002*basicsalary;
                 /*TTHRS=hrs_daily*7;*/
                 overtime=payrate*TTHRS;
                 paye=0.007*basicsalary;
                 totaldeductions=lifeinsurance+securityinsurance+healthInsurance+paye;
                 tAmount=overtime+houseallowance+transportA+basicsalary;





                printf("\t\t\t\t\t***********************************************************************\t\t\t\t\t\n");
                printf("\t\t\t\t\tFATMA************************COMPANY****************************PAYSLIP\t\t\t\t\t\n");

                printf("\t\t\t\t\t.......................................................................\t\t\t\t\t\n");

                printf("FIRSTNAME:    \t\t\t\t\%s\n",employee1.firstname);
                printf("LASTNAME:     \t\t\t\t\%s\n",employee1.secondname);
                printf("EMAIL ADDRESS:\t\t\t\t\%s\n",employee1.emailaddress);
                printf("ID NUMBER:    \t\t\t\t\%s\n",employee1.idno);
                printf("PHONE NUMBER: \t\t\t\t\%s\n\n\n",employee1.PNO);

                printf("Company's payrate=\t\t\tsh.%f\n\n",payrate);

                printf("              \t\t\t\tALLOWANCES\t\t\t\t\t\t\tDEDUCTIONS\n");
                printf("HOUSE ALLOWANCE:\t\t\tsh.%f\t\t\t\t HELTH INSURANCE:\tsh.%f\n",houseallowance,healthInsurance);
                printf("TRANSPORT ALLOWANCE:\t\t\tsh.%f\t\t\t\t LIFE INSURANCE:\tsh.%f\n",transportA,lifeinsurance);
                printf("OVERTIME ALLOWANCE:\t\t\tsh.%f\t\t\t\tSECURITY INSURANCE:\tsh.%f\n\n",overtime,securityinsurance);
                printf("BASIC SALARY:\t\t\t\tsh.%f\t\t\tPAYE:\t\t\tsh.%f\n\n\n",basicsalary,paye);
                printf("TOTAL ALLOWANCES:\t\t\tsh.%f\t\t\tTOTAL DEDUCTIONS:\tsh.%f\n\n\n",tAmount,totaldeductions);
                printf("**********************************************************************************************************************\n\n\n");
                printf("NETPAY:\t\t\t\t\tsh.%f",tAmount-totaldeductions);
                break;
                }
                else
                {
                  printf("ENTER VALID OVERTIME HOURS\n");
                  printf("PRESS ANY KEY TO EXIT MY PROGRAM\n");

                }
                break;


        case 222:
                 printf("\t\t\t\t\tWELCOME %s %s\t\t\t\t\t\n",employee2.firstname,employee2.secondname);
                 printf("ENTER THE NUMBER OF HOURS YOU WORKED OVERTIME\n");
                 scanf("%d",&TTHRS);
                 system("cls");
                 if(TTHRS<=60)
                 {
                basicsalary=639200;
                transportA=9000;
                houseallowance=12000;
                healthInsurance=0.012*basicsalary;
                payrate=566.23;
                lifeinsurance=0.00123*basicsalary;
                securityinsurance=0.0002*basicsalary;
                /*TTHRS=hrs_daily*7;*/
                overtime=payrate*TTHRS;
                paye=0.007*basicsalary;
                totaldeductions=lifeinsurance+securityinsurance+healthInsurance+paye;
                tAmount=overtime+houseallowance+transportA+basicsalary;

                printf("\t\t\t\t\t***********************************************************************\t\t\t\t\t\n");
                printf("\t\t\t\t\tFATMA************************COMPANY****************************PAYSLIP\t\t\t\t\t\n");
                printf("\t\t\t\t\t.......................................................................\t\t\t\t\t\n");
                /*printf("total deductions:%2f\n",totaldeductions);
                printf("total amount:%2f\n",tAmount);*/
                printf("FIRSTNAME:    \t\t\t\t\%s\n",employee2.firstname);
                printf("LASTNAME:     \t\t\t\t\%s\n",employee2.secondname);
                printf("EMAIL ADDRESS:\t\t\t\t\%s\n",employee2.emailaddress);
                printf("ID NUMBER:    \t\t\t\t\%s\n",employee2.idno);
                printf("PHONE NUMBER: \t\t\t\t\%s\n\n\n",employee2.PNO);

                printf("Company's payrate=\t\t\tsh.%f\n\n",payrate);

                printf("              \t\t\t\tALLOWANCES\t\t\t\t\t\t\tDEDUCTIONS\n");
                printf("HOUSE ALLOWANCE:\t\t\tsh.%f\t\t\t\t HELTH INSURANCE:\tsh.%f\n",houseallowance,healthInsurance);
                printf("TRANSPORT ALLOWANCE:\t\t\tsh.%f\t\t\t\t LIFE INSURANCE:\tsh.%f\n",transportA,lifeinsurance);
                printf("OVERTIME ALLOWANCE:\t\t\tsh.%f\t\t\t\tSECURITY INSURANCE:\tsh.%f\n\n",overtime,securityinsurance);
                printf("BASIC SALARY:\t\t\t\tsh.%f\t\t\tPAYE:\t\t\tsh.%f\n\n\n",basicsalary,paye);
                printf("TOTAL ALLOWANCES:\t\t\tsh.%f\t\t\tTOTAL DEDUCTIONS:\tsh.%f\n\n\n",tAmount,totaldeductions);
                printf("**********************************************************************************************************************\n\n\n");
                printf("NETPAY:\t\t\t\t\tsh.%f",tAmount-totaldeductions);
                break;
                 }
                else
                 {
                  printf("ENTER VALID OVERTIME HOURS\n");
                  printf("PRESS ANY KEY TO EXIT MY PROGRAM\n");

                }
                break;


        case 333:
                 printf("\t\t\t\t\tWELCOME %s %s\t\t\t\t\t\n",employee3.firstname,employee3.secondname);
                 printf("ENTER THE NUMBER OF HOURS YOU WORKED OVERTIME\n");
                 scanf("%d",&TTHRS);
                 system("cls");
                 if(TTHRS<=60)
                 {
                 basicsalary=230200;
                 transportA=9000;
                 houseallowance=12000;
                 healthInsurance=0.012*basicsalary;
                 payrate=566.23;
                 lifeinsurance=0.00123*basicsalary;
                 securityinsurance=0.0002*basicsalary;
                /* TTHRS=hrs_daily*7;*/
                 overtime=payrate*TTHRS;
                 paye=0.007*basicsalary;
                 totaldeductions=lifeinsurance+securityinsurance+healthInsurance+paye;
                 tAmount=overtime+houseallowance+transportA+basicsalary;

                printf("\t\t\t\t\t***********************************************************************\t\t\t\t\t\n");
                printf("\t\t\t\t\tFATMA************************COMPANY****************************PAYSLIP\t\t\t\t\t\n");
                printf("\t\t\t\t\t.......................................................................\t\t\t\t\t\n");

                printf("FIRSTNAME:    \t\t\t\t\%s\n",employee3.firstname);
                printf("LASTNAME:     \t\t\t\t\%s\n",employee3.secondname);
                printf("EMAIL ADDRESS:\t\t\t\t\%s\n",employee3.emailaddress);
                printf("ID NUMBER:    \t\t\t\t\%s\n",employee3.idno);
                printf("PHONE NUMBER: \t\t\t\t\%s\n\n\n",employee3.PNO);

                printf("Company's payrate=\t\t\tsh.%f\n\n",payrate);

                printf("              \t\t\t\tALLOWANCES\t\t\t\t\t\t\tDEDUCTIONS\n");
                printf("HOUSE ALLOWANCE:\t\t\tsh.%f\t\t\t\t HELTH INSURANCE:\tsh.%f\n",houseallowance,healthInsurance);
                printf("TRANSPORT ALLOWANCE:\t\t\tsh.%f\t\t\t\t LIFE INSURANCE:\tsh.%f\n",transportA,lifeinsurance);
                printf("OVERTIME ALLOWANCE:\t\t\tsh.%f\t\t\t\tSECURITY INSURANCE:\tsh.%f\n\n",overtime,securityinsurance);
                printf("BASIC SALARY:\t\t\t\tsh.%f\t\t\tPAYE:\t\t\tsh.%f\n\n\n",basicsalary,paye);
                printf("TOTAL ALLOWANCES:\t\t\tsh.%f\t\t\tTOTAL DEDUCTIONS:\tsh.%f\n\n\n",tAmount,totaldeductions);
                printf("**********************************************************************************************************************\n\n\n");
                printf("NETPAY:\t\t\t\t\tsh.%f",tAmount-totaldeductions);
                break;
                 }
                else
                 {
                  printf("ENTER VALID OVERTIME HOURS\n");
                  printf("PRESS ANY KEY TO EXIT MY PROGRAM\n");

                }
                break;


      }
      }
/* Edwin codes --Payroll system in c project */