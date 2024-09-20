/*
1 nivel

Storyline:
You work in NASA, and must check if the rocket will reach Mars

The Problem:
You must create a program to calculate if rocket will reach Mars

Criterion of a Failing rocket:
- If velocity multiplied by the time is less than distance to Mars
- If fuel multiplied by the fuel consumption is less than distance

Notes:
    If there is less time, print 'Failure, Not enough time'
    If there is less fuel, print 'Failure, Not enough fuel'
    If both only print 'Failure, Not enough time'
    If rocket is successful, print 'Welcome to Mars'
    time will be in hours
    fuel will be in liters
    fuel_consumption will be in distance per 1 liter of fuel
    distance will be in kilometers
    Input
    time: Integer
    fuel: Integer
    fuel_consumption: Integer
    distance: Integer
    Output
    answer: String
    Constraints
    0 < fuel, fuel_consumption, distance, velocity, time < 1001

    Example
    Input
    1000
    10
    10
    100
    100
    Output
    Failure, Not enough time
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int remDistance, remFuel, distance, time, velocity, fuel;

    printf("¿How much kilometers are left to destiny?\n");
    scanf("%d", &distance);
 
    printf("¿How much time do we have to get there?\n");
    scanf("%d", &time);

    printf("¿What is our speed?\n");
    scanf("%d", &velocity);

    printf("¿How much fuel do we have?\n");
    scanf("%d", &fuel);

    int fuel_consumption = fuel / distance;

    remDistance = velocity * time;
    remFuel = fuel * fuel_consumption;

    if(remDistance > distance && remFuel > distance)
        printf("Welcome to mars");

    if(remDistance == remFuel)
    {
        printf("'Failure, Not enough time'");
    } if (remDistance < distance)
        {
            printf("'Failure, Not enough time'");
        }   else if (remFuel < distance) {
             printf("'Failure, Not enough fuel'");
        } else
            printf("welcome to mars");
        
    return 0;
}

//do a rand to fill the values automatically