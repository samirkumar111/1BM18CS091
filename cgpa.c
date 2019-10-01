import java.util.*
class student
{
public char USN:[20];
public char NAME:[30];
public credit[30];
public marks[7];
public void student_detail()
{ Scanner s=new Scannr(System.in);
System.out.println("enter student name");
char USN=s.nextChar();
for(i=0;i<5;i++)
{ 
 System.out.println("enter marks of subjects"+(i+1)+":");
marks[i]=s.nextInt();
System.out.println("credits of subject"+(i+1)+":");
credit[i]=s.nextInt();
}
}
public int calculation()
{
 float cgpa=0;
int grade_points;
int total_credit=0;
int total_grade_point=0;
for(i=0;i<5;i++)
{

   if(marks[i]>=90)
   grade point=10;
else if(marks[i]<90&& marks[i]>=75)
grade_points=9;
else if(marks[i]<=75 && marks[i]>=60)
grade_point=8;
else if(marks[i]<60 && marks[i]>50)
grade_point=7;
else if(marks[i]<50 && marks[i]>=40)
grade_point=6;
else
grade_point=0;
total_credit=total_credit+credit[i];
total_grade_point=total_grade_point+credit[i]*grade_point);
return cgpa;
}
}
class cgpa
{
 public static void main(String args[])
student a=new student();
a.student_details();
int gp=a.calculate();
System.out.println("grade point="+gp);
}
}
