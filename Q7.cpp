#include<stdio.h>

float BMI(float height,float weight){
    float bmi = weight/(height*height);
    return bmi;
}
int main(){
	float height,weight,bmi;
	printf("Input the height: ");
	scanf("%f",&height);
	printf("Input the weight: ");
	scanf("%f",&weight);
	bmi=BMI(height, weight);
	printf("The BMI of this person is %f",bmi);
	printf("\n");
	if (bmi < 18.5)
	    printf("This person is Underweight");
	else if ( bmi >= 18.5 && bmi < 24.9)
	    printf("This person is Healthy");
	else if ( bmi >= 24.9 and bmi < 30)
	    printf("This person is Overweight");
	else if ( bmi >=30)
	    printf("This person is Obesity");
	return 0;
}
