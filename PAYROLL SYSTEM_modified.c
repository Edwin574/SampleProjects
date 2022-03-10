#include<stdio.h>
#include<math.h>

const int NHIF = 500;
const int NSSF = 400;
int Basic_Salary[]={150000,100000,70000,60000,50000,25000.100000,90000,70000};
int RiskAllowannce[]={1000,1500,1500,1000,1500,1500,12000,15000,15000};
int HouseAllowance[]={35000,15000,14000,35000,15000,14000,20000,15000,15000};

double grossTax(double grossSalary);
int main()
{   char option;
	char F_Name[20]; 
	char S_Name[20];
    int Title;
    double Gross_Salary, OvertimeHours, NetSalary, PAYE, OvertimeAllowance;
    int Department, Deductions; 
while (1)
{
  retry:
  printf("\n************************************************************************\n");
  printf("\n                  FATMA CONSULTANTS PAYROLL SYSTEM                         \n");
  printf("\n************************************************************************\n\n");
  printf("Welcome to our Payrol Sysetm\nplease choose the Department you belong to below");
  printf("\n 1.Adminstration Department\n 2.Human Resource Department\n 3.ICT Department\n\n");
 
  scanf("%d",&Department);
  switch (Department)
  {
     case 1:
     
     printf("Enter your First Name:");
     scanf("%s",&F_Name);
     printf("\nEnter your second Name:");
     scanf("%s",&S_Name);
     printf("\nEnter your Title\n 1.C.E.O,\n2.Manager ,\n3.Assistant Manager,\n");
     scanf("%d",&Title);
     if (Title=1) {
       printf("\nYour Basic Pay is Ksh. %d",Basic_Salary[0]);
       printf("\nEnter Total overtime worked in the past month:");
       scanf("%lf",&OvertimeHours);
       OvertimeAllowance = OvertimeHours*400;
       Gross_Salary = Basic_Salary[0] + RiskAllowannce[0]+ HouseAllowance[0] + OvertimeAllowance;
    	 PAYE = grossTax(Gross_Salary);
       Deductions= PAYE + NSSF +NHIF;
       NetSalary= Gross_Salary - Deductions;
      }else if (Title=2)
      {
        printf("\nProceed to Salary Calculation\n");
        printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[1]);
        printf("\nEnter Total overtime worked in the past month:");
        scanf("%lf",&OvertimeHours);
        OvertimeAllowance = OvertimeHours*400;
        Gross_Salary = Basic_Salary[1] + RiskAllowannce[1]+ HouseAllowance[1] + OvertimeAllowance;
        PAYE = grossTax(Gross_Salary);
        Deductions= PAYE + NSSF +NHIF;
        NetSalary= Gross_Salary - Deductions;
      }else
      {
        printf("\nProceed to Salary Calculation\n");
        printf("\nYour Basic Pay is Ksh.%d\n",Basic_Salary[2]);
        printf("\nEnter Total overtime worked in the past month:");
        scanf("%lf",&OvertimeHours);
        OvertimeAllowance = OvertimeHours*400;
        Gross_Salary = Basic_Salary[2] + RiskAllowannce[2]+ HouseAllowance[2] + OvertimeAllowance;
			  PAYE = grossTax(Gross_Salary);
        Deductions= PAYE + NSSF +NHIF;
        NetSalary= Gross_Salary - Deductions;
      }
      printf("\n%s %s \n Gross Salary: %lf \nPAYE: %lf \nTotal Deductions:%d \nNet Income: %lf\n",F_Name,S_Name,Gross_Salary,PAYE,Deductions,NetSalary);
      printf("\n\t\t####################** THANK YOU FOR SERVING US **##################################\n");
      printf("Would you like to continue to the next person? y/n");
      scanf("%c",&option);
        if (option=="y"){
          system("cls");
          goto retry;
			  }else{
          goto end;
          }
      break; 
     case 2:

          printf("Enter your First Name: \n");
          scanf("%s",&F_Name);
          printf("\nEnter your second Name:\n");
          scanf("%s",&S_Name);
          printf("\nEnter your Title\n \n1.Head of HR \n2.HR Manager\n 3.Secretary,\n");
          scanf("%d",&Title);
          if (Title=1)

            { printf("\nProceed to Salary Calculation\n");
              printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[3]);
              printf("\nEnter Total overtime worked in the past month:");
              scanf("%lf",&OvertimeHours);
              OvertimeAllowance = OvertimeHours*400;
                 Gross_Salary = Basic_Salary[3] + RiskAllowannce[3]+ HouseAllowance[3] + OvertimeAllowance;
     			       PAYE = grossTax(Gross_Salary);
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
			}else if (Title=2)
            {    
                 printf("\nProceed to Salary Calculation\n");
                 printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[4]);
                 printf("\nEnter Total overtime worked in the past month:");
                 scanf("%lf",&OvertimeHours);
                 OvertimeAllowance = OvertimeHours*400;
                 Gross_Salary = Basic_Salary[4] + RiskAllowannce[4]+ HouseAllowance[4] + OvertimeAllowance;
                 PAYE = grossTax(Gross_Salary);
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            }
            else
            {   
                printf("\nProceed to Salary Calculation\n");
                printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[5]);
                printf("\nEnter Total overtime worked in the past month:");
                scanf("%lf",&OvertimeHours);
                OvertimeAllowance = OvertimeHours*400;
                Gross_Salary = Basic_Salary[5] + RiskAllowannce[5]+ HouseAllowance[5] + OvertimeAllowance;
			          PAYE = grossTax(Gross_Salary);
                 Deductions= PAYE + NSSF +NHIF;
                 NetSalary= Gross_Salary - Deductions;
                }   
              printf("\n%s %s \n Gross Salary: %lf \nPAYE: %lf \nTotal Deductions:%d \nNet Income: %lf\n",F_Name,S_Name,Gross_Salary,PAYE,Deductions,NetSalary);
              printf("\n####################** THANK YOU FOR SERVING US **##################################\n");
              printf("Would you like to continue to the next Person (Y/N):");
             
            break;
        case 3:

          printf("Enter your First Name: \n");
          scanf("%s",&F_Name);
          printf("\nEnter your second Name:\n");
          scanf("%s",&S_Name);
          printf("\nEnter your Title\n \n1.Head of ICT\n 2.Techinian\n3.Other Employee\n");
          scanf("%d",&Title);

           if (Title=1)

            { printf("\nProceed to Salary Calculation\n");
              printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[6]);
              printf("\nEnter Total overtime worked in the past month:");
              scanf("%lf",&OvertimeHours);
              OvertimeAllowance = OvertimeHours*400;
                 Gross_Salary = Basic_Salary[6] + RiskAllowannce[6]+ HouseAllowance[6] + OvertimeAllowance;
                    PAYE = grossTax(Gross_Salary);
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            }else if (Title=2)
            {    
                 printf("\nProceed to Salary Calculation\n");
                 printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[7]);
                 printf("\nEnter Total overtime worked in the past month:");
                 scanf("%lf",&OvertimeHours);
                 OvertimeAllowance = OvertimeHours*400;
                 Gross_Salary = Basic_Salary[7] + RiskAllowannce[7]+ HouseAllowance[7] + OvertimeAllowance;
                    PAYE = grossTax(Gross_Salary);
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            }
            else 
            {   
                printf("\nProceed to Salary Calculation\n");
                printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[8]);
                printf("\nEnter Total overtime worked in the past month:");
                scanf("%lf",&OvertimeHours);
                OvertimeAllowance = OvertimeHours*400;
                Gross_Salary = Basic_Salary[8] + RiskAllowannce[8]+ HouseAllowance[8] + OvertimeAllowance;
                    PAYE = grossTax(Gross_Salary);
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            } 
            printf("\n%s %s \n Gross Salary:%lf \nPAYE:%lf \nTotal Deductions:%d \nNet Income:%lf\n",F_Name,S_Name,Gross_Salary,PAYE,Deductions,NetSalary);
            printf("\n####################** THANK YOU FOR SERVING US **##################################\n");;
        break;
        }
        end:exit(0);
}   }    

double grossTax(double Gross_Salary){
	double PAYE;
	  if(Gross_Salary<12300){
		PAYE= Gross_Salary*0.1;
		}
      else if(Gross_Salary <=23900){
		PAYE= Gross_Salary*0.15;
		}
      else if(Gross_Salary<=35500){
		PAYE= Gross_Salary*0.2;
    	}
      else if(Gross_Salary<=45060){
		PAYE= Gross_Salary*0.25;
	    }
      else{
        PAYE = Gross_Salary*0.3;
		}
      return PAYE;

}