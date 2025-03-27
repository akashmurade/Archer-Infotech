class BankAccount {
    private int balance;
    
    BankAccount(int initialBalance) {
        balance = initialBalance;
    }

    public synchronized void withdrawl(int amount) {
        if(balance >= amount) {
            balance -= amount;
            System.out.println("Withdrald: " + amount);
            System.out.println("Current Balance: " + balance);
        }
        else {
            System.out.println("Not enough balance: " + balance + " for " + amount);
        }
    }

    public synchronized void deposit(int amount) {
        balance += amount;
        System.out.println("Deposited amount of " + amount);
        System.out.println("Total Balance: " + balance);
    }

    public synchronized int getBalance() {
        return balance;
    }
}

public class SynchronizedMethodsExample {
    public static void main(String[] args) {
        BankAccount b = new BankAccount(10000);

        Thread t1 = new Thread() {
            public void run() {
                b.deposit(1000);
            }
        };
        t1.start();

        Thread t2 = new Thread() {
            public void run() {
                b.withdrawl(500);
            }
        };
        t2.start();

        
        Thread t3 = new Thread() {
            public void run() {
                b.withdrawl(5000);
            }
        };
        t3.start();

        
        Thread t4 = new Thread() {
            public void run() {
                b.deposit(5500);
            }
        };
        t4.start();

        try {
            t1.join();
            t2.join();
            t3.join();
            t4.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Total Balance after transactions: " + b.getBalance());

    }
}

// Output without sync:
/*
Deposited amount of 1000
Withdrald: 5000
Deposited amount of 5500
Total Balance: 11000
Withdrald: 500
Total Balance: 11000
Current Balance: 11000
Current Balance: 11000
Total Balance after transactions: 11000*/

// with
/*
Deposited amount of 1000
Total Balance: 11000
Deposited amount of 5500
Total Balance: 16500
Withdrald: 5000
Current Balance: 11500
Withdrald: 500
Current Balance: 11000
Total Balance after transactions: 11000
*/