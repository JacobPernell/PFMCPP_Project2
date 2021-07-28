#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 bool
 float
 double
 char
 unsigned int
 void
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    //int
    int age = 32;
    int currentYear = 2021;
    int numOfIceCream = 5;

    //bool
    bool isAwake = true;
    bool isStudent = false;
    bool dogHasEaten = true;

    //float
    float velocity = 32.4f;
    float gpa = 3.8f;
    float angle = 90.2f;

    //double
    double tempInC = 22.3;
    double latitude = 51.5074;
    double average = 30.5389732;
 
    //char
    char a = 'a';
    char b = 'b';
    char z = 'z';

    //unsigned int
    unsigned int heightInFeet = 6;
    unsigned int languagesLearned = 3;
    unsigned int countriesVisited = 10;

    
    ignoreUnused(number, age, currentYear, numOfIceCream, isAwake, isStudent, dogHasEaten, velocity, gpa, angle, tempInC, latitude, average, a, b, z, heightInFeet, languagesLearned, countriesVisited); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
double averageGPA(double term1, double term2, double term3 = 3.0, double term4 = 3.2)
{
    ignoreUnused(term1, term2, term3, term4);
    return {};
}

/*
 2)
 */
void feedDog(int scoopsOfFood = 2, int dogType = 0)
{
    ignoreUnused(scoopsOfFood, dogType);
}

/*
 3)
 */
bool flightsAreAvailable(int countryID = 34, int departingDate = 8)
{
    ignoreUnused(countryID, departingDate);
    return {};
}

/*
 4)
 */
int sumTotalPlugins(int computer = 3)
{
    ignoreUnused(computer);
    return {};
}

/*
 5)
 */
void danceBattle(int person1, int person2 = 3)
{
    ignoreUnused(person1, person2);
}

/*
 6)
 */
float convertToCelsius(float temperature = 54.2f)
{
    ignoreUnused(temperature);
    return {};
}

/*
 7)
 */
float calculateTotalRevenue(float income1, float income2, float income3 = 4000.28f)
{
    ignoreUnused(income1, income2, income3);
    return {};
}

/*
 8)
 */
void watchTelevision(int channel = 2, double durationInMin = 64.3)
{
    ignoreUnused(channel, durationInMin);
}

/*
 9)
 */
double calculateMonthlyBudget(double income, double expenses = 2042.65)
{
    ignoreUnused(income, expenses);
    return {};
}

/*
 10)
 */
char returnRandomCharWithinRange(int minRange = 3, int maxRange = 34)
{
    ignoreUnused(minRange, maxRange);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto myGPA = averageGPA(3.2, 4.0, 3.1, 3.8);
    
    //2)
    feedDog(2, 1);
    
    //3)
    auto canTravelToGermany = flightsAreAvailable(23, 2);
    
    //4)
    auto pluginsOnMac = sumTotalPlugins(4);
    
    //5)
    danceBattle(3, 5);

    //6)
    auto currentTempInC = convertToCelsius(23.4f);

    //7)
    auto thisMonthRevenue = calculateTotalRevenue(4000.f, 4394.93f, 200.23f);
    
    //8)
    watchTelevision(2, 45.5);
    
    //9)
    auto thisMonthBudget = calculateMonthlyBudget(3940.43);
    
    //10)
    auto myChar = returnRandomCharWithinRange();
    
    
    ignoreUnused(carRented, myGPA, canTravelToGermany, pluginsOnMac, currentTempInC, thisMonthRevenue, thisMonthBudget, myChar);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
