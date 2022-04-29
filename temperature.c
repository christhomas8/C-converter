#include <stdio.h>
#include <math.h>

//Fahrenheit to Celsius
int FtoC(int);
//Celsius to Fahrenheit 
int CtoF(int);

int main(){
    int choice;
    int temperature;

    printf("Type \"1\" for F to C or \"2\" for C to F: \n");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Fahrenheit to Celsius selected! \n\n");
        printf("Select a Fahrenheit temperature to convert to Celsius: ");
        scanf("%d", &temperature);

        printf("  %d degrees Celsius\n",FtoC(temperature));
        
    }
    else if(choice == 2){
        printf("Celsius to Fahrenheit selected!\n\n");
        printf("Select a Celsius temperature to convert to Fahrenheit: ");
        scanf("%d", &temperature);

        printf("  %d degrees Fahrenheit\n",CtoF(temperature));
    }
    else{
        printf("Incorrect input selected!\n\n");
        printf("Defaulting to Fahrenheit to Celsius selected!\n");
        printf("Select a Fahrenheit temperature to convert to Celsius: ");
        scanf("%d", &temperature);

        printf("  %d degrees Celcius\n",FtoC(temperature));
    }

    return 0;
}

int FtoC(int temp){
    double C = (((temp - 32)*5)/9);
    int Cx = C;
    return Cx;
}

int CtoF(int temp){
    double C = (((temp*9)/5)+32);
    int Cx = C;
    return Cx;
}