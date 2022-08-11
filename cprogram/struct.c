 #include <stdio.h>
struct person                                      //declaring structure with two variables
{
   int age;
   float weight;
};
 
int main()
{
    struct person *personPtr, person1;     //creating two structure variables
    personPtr = &person1;                              //passin address of structure variable to pointer of type structure
  printf("Enter age: ");
    scanf("%d", &personPtr->age);                     //scanning age and passing it to structure
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);              //scanning weight and passing it to structure using pointer                                                                                                                    .                                                                             and -> symvol
    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);               // printing values 
    printf("weight: %f", personPtr->weight);
 
    return 0;
}