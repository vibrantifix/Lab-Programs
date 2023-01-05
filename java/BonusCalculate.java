abstract class Department {
double salary, bonus, totalsal;
public abstract void calBonus(double salary);
public void displaytotalsalary(String dept) {
System.out.println(dept+"\t" + salary + "\t\t" + bonus + "\t"+ totalsal);
	}
}
class account extends Department {
public void calBonus(double Sal) {
salary = Sal;
bonus = Sal * 0.2;
totalsal = salary + bonus;
	}
}
class sales extends Department {
public void calBonus(double sal) {
salary = sal;
bonus = sal * 0.3;
totalsal = salary + bonus;
	}
}
public class BonusCalculate {
public static void main(String args[]) {
account acc = new account();
sales sale = new sales();
acc.calBonus(10000);
sale.calBonus(20000);
System.out.println("department\tBasicSalary\tBonus\tTotalSalary");
System.out.println("------------------------------------------------------");
acc.displaytotalsalary("Accounts");
sale.displaytotalsalary("SalesDep");
System.out.println("-------------------------------------------------------");
	}
}
