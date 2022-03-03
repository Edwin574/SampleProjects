package.com.hospitalatabse
import java.lang.reflect.Array;
import java.util.Scanner;

public class hospital_Database //This is my largest class which is the database that holds other classes
{ 

	public static void main(String[] args) {
	       class Patient   //THis is a class that holds objects like patient details
	       {
	    	    String patient_Name;
	    	    int patient_Age;
	    	    String patient_Disease;
	//Method 1 to accept input from the user
	public void _Name() {
	    Scanner input=new Scanner(System.in);
	    System.out.println("Enter the Name of the patient:");
	    String patient_Name =input.nextLine();
	    this.patient_Name=patient_Name;
	   }
	//Method 2
	public void age() {
		try (Scanner input = new Scanner(System.in)) {
			System.out.println("Enter the age of the patient:");
			int patient_Age = input.nextInt();
			this.patient_Age=patient_Age;
		}
	}
	//Method 3
	public void _Disease() {
		Scanner input= new Scanner(System.in);
		System.out.println("Type the illness of the patient");
		String patient_Disease=input.nextLine();
		this.patient_Disease=patient_Disease;
	}
	public void add(Patient patient) {
		// TODO Auto-generated method stub
		
	}
	public void remove(Patient patient) {
		// TODO Auto-generated method stub
		
	}
	public void print() {
		// TODO Auto-generated method stub
		
	}
	public int getAge() {
		// TODO Auto-generated method stub
		return 0;
	}
	
	}
	       //A new class to hold the data of a date
	       class Date{
	    	   int day;
	    	   int month;
	    	   int year;
	    	   //Method to input the day 
	    	   public void _Day() {
	    			try (Scanner input = new Scanner(System.in)) {
	    				System.out.println("Enter todays date in two digits:");
	    				int day = input.nextInt();
	    				this.day=day;
	    			}
	    		}
	    	   //method to input the current month
	    	   public void _Month() {
	    			try (Scanner input = new Scanner(System.in)) {
	    				System.out.println("Enter the month in two digits:");
	    				int month = input.nextInt();
	    				this.month=month;
	    			}
	    		}
	    	   //method to input the year
	    	   public void _Year() {
	    			try (Scanner input = new Scanner(System.in)) {
	    				System.out.println("Enter Current Year in 4 digits:");
	    				int year = input.nextInt();
	    				this.year=year;
	    			}
	    			}
	  }
	       //New class to hold the list of patients in the Hospital Database
	       class _Hospital {
	    		    ArrayList<Patient> patient;

	    		    public _Hospital(){}

	    		    public void addPatient(Patient patient){
	    		        ((Patient) patient).add(patient);
	    		    }

	    		    public void removePatient(Patient patient){
	    		        patient.remove(patient);
	    		    }

	    		    public void printAll(){
	    		        for (Patient patient :patient) {
	    		            patient.print();
	    		        }
	    		    }

	    		    public void printLessThanOne(){
	    		        for (Patient patient : patient) {
	    		            if(patient.getAge() < 1){
	    		                patient.print();
	    		            }
	    		        }
	    		    }
	    		}
	    	   
	       }
	}
	      
