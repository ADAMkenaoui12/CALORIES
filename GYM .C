#include <stdio.h>
int main()
{
    // Variables
    int age;
    int height;
    int weight;
    char gender;
    float BMR;
    int daily_activity;
    float TDEE;
    char goal;
    float KCAL;
    int calorie;
    float proteine;
    float makroz_protein;
    float protein_calorie;
    float fats;
    float makroz_fats;
    float fats_calorie;
    float carbs;
    float carbs_calorie;

    printf("enter your age\t");
    scanf("%d", &age);
    printf("enter your height in cm\t");
    scanf("%d", &height);
    printf("enter your weight in kg\t");
    scanf("%d", &weight);
    printf("enter your gender (M)or(F)\t");
    scanf(" %c", &gender);
    if (gender == 'M')
    {
        printf("Your gender is male \n");
        BMR = height * 6.25 + weight * 10 - age * 5 + 5;
        printf("the result is :\tBMR = %f\n", BMR);
    }
    else if (gender == 'F')
    {
        printf("Your gender is female \n");
        BMR = height * 6.25 + weight * 10 - age * 5 - 161;
        printf("the result is :\tBMR = %f\n", BMR);
    }
    printf("How many days do you exercise per week ?\t");
    scanf("%d", &daily_activity);
    if (daily_activity == 1 || daily_activity == 2 || daily_activity == 3)
    {
        printf("so you train one to three day a week?\n");
        TDEE = BMR * 1.35;
        printf("the result is :\tTDEE =%f\n", TDEE);
    }
    else if (daily_activity == 4 || daily_activity == 5)
    {
        printf("so you train one to five day a week?\n");
        TDEE = BMR * 1.5;
        printf("the result is :\tTDEE =%f\n", TDEE);
    }
    else if (daily_activity == 6)
    {
        printf("so you train six day a week?\n");
        TDEE = BMR * 1.7;
        printf("the result is :\tTDEE =%f\n", TDEE);
    }
    else if (daily_activity == 7)
    {
        printf("so you train seven day a week?\n");
        TDEE = BMR * 1.9;
        printf("the result is :\tTDEE =%f\n", TDEE);
    }
    else if (daily_activity == 0)
    {
        printf("so you do not train and bsedentary?\n");
        TDEE = BMR * 1.2;
        printf("the result is :\tTDEE =%f\n", TDEE);
    }
    printf("what is your goal ?");
    printf("Maintain weight(A) or Over weight(B) or weight loss(C).\t");
    scanf(" %c", &goal);
    if (goal == 'A')
    {
        printf("so your goal is maintain weight?\n");
        KCAL = TDEE;
        printf("the result is :\tKCAL =%f\n", KCAL);
    }
    else if (goal == 'B')
    {
        printf("so your goal is Over weight?\n");
        printf("in order to gain weight, kcal must be increased from 300 to 800 PER DAY.\t");
        scanf("%d", &calorie);
        if (300 <= calorie <= 400)
        {
            printf("so you chose to increase %d kcal?\n", calorie);
            printf("Now you can increase pure muscle mass wihout fat\n");
            KCAL = TDEE + calorie;
            printf("the result is :\tKCAL =%f\n", KCAL);
        }
        else if (500 <= calorie <= 600)
        {
            printf("so you chose to increase %d kcal?\n", calorie);
            printf("Now you can gain weithe faster, but with the increase in the percentage of fat");
            KCAL = TDEE + calorie;
            printf("the result is :\tKCAL =%f\n", KCAL);
        }
        else if (700 <= calorie <= 800)
        {
            printf("so you chose to increase %d kcal?\n", calorie);
            printf("Now you can increase muscle mass significantly and faster, but with a significant increase in fat percentage");
            KCAL = TDEE + calorie;
            printf("the result is :\tKCAL =%f\n", KCAL);
        }
    }
    else if (goal == 'C')
    {
        printf("so your goal is weight loss?\n");
        printf("In order to lose weight, you must lose between 300 and 800 calories per day.\t");
        scanf("%d", &calorie);
        if (300 <= calorie <= 400)
        {
            printf("so you chose to loss %d kcal?\n", calorie);
            printf("Now you can lose fat mass without touching muscle mass");
            KCAL = TDEE - calorie;
            printf("the result is :\tKCAL =%f\n", KCAL);
        }
        else if (500 <= calorie <= 600)
        {
            printf("so you chose to loss %d kcal?\n", calorie);
            printf("Now you can lose weight quickly, but with a loss of muscle mass");
            KCAL = TDEE - calorie;
            printf("the result is :\tKCAL =%f\n", KCAL);
        }
        else if (700 <= calorie <= 800)
        {
            printf("so you chose to loss %d kcal?\n", calorie);
            printf("Now you can lose weight in a larger amount and very quickly, but with the loss of a large amount of muscle mass");
            KCAL = TDEE - calorie;
            printf("the result is :\tKCAL =%f\n", KCAL);
        }
    }
    printf("enter a number between 1.6 to 1.9 for Over weight and 2 for maintain weight and 2.1 to 2.5 lose weight\t");
    scanf(" %f", &makroz_protein);
    printf("for fat you should enter a number 1 for maintain and lose weight and 2 for Over weight\t");
    scanf(" %f", &makroz_fats);
    if (goal == 'A' && makroz_protein == 2 && makroz_fats == 1)
    {
        proteine = weight * makroz_protein;
        printf("the result is :\tprotein =%fg\n", proteine);
        protein_calorie = proteine * 4;
        fats = weight * makroz_fats;
        printf("the result is :\tfat =%fg\n", fats);
        fats_calorie = fats * 9;
        carbs_calorie = KCAL - (protein_calorie + fats_calorie);
        carbs = carbs_calorie / 4;
        printf("the result is :\tcarbs =%fg\n", carbs);
    }
    else if (goal == 'B' && 1.6 <= makroz_protein <= 1.9 && makroz_fats == 2)
    {
        proteine = weight * makroz_protein;
        printf("the result is :\tprotein =%fg\n", proteine);
        protein_calorie = proteine * 4;
        fats = weight * makroz_fats;
        printf("the result is :\tfat =%fg\n", fats);
        fats_calorie = fats * 9;
        carbs_calorie = KCAL - (protein_calorie + fats_calorie);
        carbs = carbs_calorie / 4;
        printf("the result is :\tcarbs =%fg\n", carbs);
    }
    else if (goal == 'C' && 2.1 <= makroz_protein <= 2.5 && makroz_fats == 1)
    {
        proteine = weight * makroz_protein;
        printf("the result is :\tprotein =%fg\n", proteine);
        protein_calorie = proteine * 4;
        fats = weight * makroz_fats;
        printf("the result is :\tfat =%fg\n", fats);
        fats_calorie = fats * 9;
        carbs_calorie = KCAL - (protein_calorie + fats_calorie);
        carbs = carbs_calorie / 4;
        printf("the result is :\tcarbs =%fg\n", carbs);
    }
    return 0;
}
