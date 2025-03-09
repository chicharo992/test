#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int option;
	float balance=1000.0; // initial balance
	float amount;
	
	printf("welcome to chicharo ATM!\n");
	printf("1. check the balance\n");
	printf("2.Depost Money\n");
	printf("3.Withdraw Money\n");
	printf("4.exit\n");
	
	printf("Enter your choice(1-4:) ");
	scanf("%d", &option);
	
	// handle user input 
	if(option==1){
		printf("your current balance is:$%.2f\n", balance);
	}
	else if (option == 2) {
        printf("Enter the amount to deposit: ");
        scanf("%f", &amount);
}

        if (amount > 0) {
            balance += amount;
            printf("Deposit successful! New balance: $%.2f\n", balance);
        } else {
            printf("Invalid deposit amount.\n");
        }
}
   
	
		return 0;
}
