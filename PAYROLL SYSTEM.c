#include<stdio.h>
#include<conio.h>
#include<math.h>

const int NHIF = 500;
const int NSSF = 400;

int main()
{
    char F_Name; char S_Name;
    int Title;
    int Gross_Salary; float OvertimeHours; int NetSalary; float PAYE; float OvertimeAllowance;
    int Department; int Deductions;

    printf("\n************************************************************************\n");
    printf("                  FATMA CONSULTANTS PAYROLL SYSTEM                         \n");
    printf("*************************************************************************\n\n");
    printf("Welcome to our Payrol Sysetm\nplease choose the Department you belong to below");
    printf("\n 1.Adminstration Department\n 2.Human Resource Department\n 3.ICT Department\n 4.Support Stuff Department\n");
 
    scanf("%d",&Department);
    switch (Department)
        {
         case 1:
         
          printf("Enter your First Name: \n");
          scanf("%c",&F_Name);
          printf("Enter your second Name:\n");
          scanf("%c",&S_Name);
          printf("\nEnter your Title\n 1.C.E.O, 2.Manager ,3.Assistant Manager,");
          scanf("%d",&Title);
            if (Title=1)
            {    int Basic_Salary[]={150000,100000,70000};
                 int RiskAllowannce[]={1000,1500,1500};
                 int HouseAllowance[]={35000,15000,14000};
                 printf("Proceed to Salary Calculation\n");
                 printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[0]);
                 printf("Enter Total overtime worked in the past month:");
                 scanf("%f",&OvertimeHours);
                 OvertimeAllowance = OvertimeHours*400;
                 Gross_Salary = Basic_Salary[0] + RiskAllowannce[0]+ HouseAllowance[0] + OvertimeAllowance;
                     if(Gross_Salary<12300){
                        PAYE= Gross_Salary*0.1;
                     }
                    else if(Gross_Salary <=23900){
                        PAYE= Gross_Salary*0.15;
                    }
                    else if(Gross_Salary<=35500){
                        PAYE= Gross_Salary*0.2;
                    }else if(Gross_Salary<=45060){
                        PAYE= Gross_Salary*0.25;
                    }else {
                        PAYE = Gross_Salary*0.3;
                    }
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            }else if (Title=2)
            {    int Basic_Salary[]={150000,100000,70000};
                 int RiskAllowannce[]={1000,1500,1500};
                 int HouseAllowance[]={35000,15000,14000};
                 printf("Proceed to Salary Calculation\n");
                 printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[0]);
                 printf("Enter Total overtime worked in the past month:");
                 scanf("%f",&OvertimeHours);
                 OvertimeAllowance = OvertimeHours*400;
                 Gross_Salary = Basic_Salary[1] + RiskAllowannce[1]+ HouseAllowance[1] + OvertimeAllowance;
                     if(Gross_Salary<12300){
                        PAYE= Gross_Salary*0.1;
                     }
                    else if(Gross_Salary <=23900){
                        PAYE= Gross_Salary*0.15;
                    }
                    else if(Gross_Salary<=35500){
                        PAYE= Gross_Salary*0.2;
                    }else if(Gross_Salary<=45060){
                        PAYE= Gross_Salary*0.25;
                    }else {
                        PAYE = Gross_Salary*0.3;
                    }
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            }
            else (Title=3)
            {   int Basic_Salary[]={150000,100000,70000};
                int RiskAllowannce[]={1000,1500,1500};
                int HouseAllowance[]={35000,15000,14000};
                printf("Proceed to Salary Calculation\n");
                printf("\nYour Basic Pay is Ksh.%d",Basic_Salary[0]);
                printf("Enter Total overtime worked in the past month:");
                scanf("%f",&OvertimeHours);
                OvertimeAllowance = OvertimeHours*400;
                Gross_Salary = Basic_Salary[0] + RiskAllowannce[0]+ HouseAllowance[0] + OvertimeAllowance;
                     if(Gross_Salary<12300){
                        PAYE= Gross_Salary*0.1;
                     }
                    else if(Gross_Salary <=23900){
                        PAYE= Gross_Salary*0.15;
                    }
                    else if(Gross_Salary<=35500){
                        PAYE= Gross_Salary*0.2;
                    }else if(Gross_Salary<=45060){
                        PAYE= Gross_Salary*0.25;
                    }else {
                        PAYE = Gross_Salary*0.3;
                    }
                Deductions= PAYE + NSSF +NHIF;
                NetSalary= Gross_Salary - Deductions;
            } break;

        case 2:

          int Basic_Salary[]={150000,100000,70000};
          int RiskAllowannce[]={1000,1500,1500};
          int HouseAllowance[]={35000,15000,14000};
          printf("Enter your First Name: \n");
          scanf("%c",&F_Name);
          printf("Enter your second Name:\n");
          scanf("%c",&S_Name);
          printf("\nEnter your Title\n 1.C.E.O, 2.Manager ,3.Assistant Manager,");
          scanf("%d",&Title);
        break;
        
        case 3:
         int Basic_Salary[]={150000,100000,70000};
          int RiskAllowannce[]={1000,1500,1500};
          int HouseAllowance[]={35000,15000,14000};
          printf("Enter your First Name: \n");
          scanf("%c",&F_Name);
          printf("Enter your second Name:\n");
          scanf("%c",&S_Name);
          printf("\nEnter your Title\n 1.C.E.O, 2.Manager ,3.Assistant Manager,");
          scanf("%d",&Title);
        break;
        case 4:
         int Basic_Salary[]={150000,100000,70000};
          int RiskAllowannce[]={1000,1500,1500};
          int HouseAllowance[]={35000,15000,14000};
          printf("Enter your First Name: \n");
          scanf("%c",&F_Name);
          printf("Enter your second Name:\n");
          scanf("%c",&S_Name);
          printf("\nEnter your Title\n 1.C.E.O, 2.Manager ,3.Assistant Manager,");
          scanf("%d",&Title);
          break;
   }    }
}



    




    





}