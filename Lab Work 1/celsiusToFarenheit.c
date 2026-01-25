#include<stdio.h>
// global variable decleration
float celsius;
int i = 1;
float farenheit;
 
//functions decleration
// user input function
float userInput();

// output function
void outputForUser();
 
//calculation function
float calculateFarenheit();

// main function for compiler
int main(){
	 // while loop for multiple iteration ;
	while(1){
		userInput();
	}
	
	return 0;
}

// user input function
float userInput(){
	// Variables decleration
	int catchError; 
	
	// User input / input celsius
	printf("%d.\tCelsius: ", i);
	catchError = scanf("%f", &celsius);//scanf() returns 1 or 0 based on sucessful input;
	//we use it to find out if user inputed intended value or not

	//printf("%d\n",catchError); // debuggging
	
	//unexpected input handling
	if(catchError == 1){
		i++; // incrementing iteration count
		outputForUser();
	}
	else
	printf("Only numerical values\n");
	while (getchar() != '\n'); // clears invalid input    
}

//user output function
void outputForUser(){
	printf("\tFarenheit: %.2f\n", calculateFarenheit());
}

//Farenheit calculation function
float calculateFarenheit(){
	farenheit = 9 * celsius / 5 + 32;
	return farenheit;
}