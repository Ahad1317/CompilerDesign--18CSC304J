#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variable for label index
int labelIndex = 0;

// Function to generate unique labels
char* generateLabel() {
    char* label = (char*)malloc(10 * sizeof(char));
    sprintf(label, "L%d", labelIndex++);
    return label;
}

// Function to generate intermediate code for If statement
void generateIfCode(char* condition, char* trueLabel, char* falseLabel) {
    // Output intermediate code for If statement
    printf("IF %s GOTO %s ELSE GOTO %s\n", condition, trueLabel, falseLabel);
}

// Function to generate intermediate code for While statement
void generateWhileCode(char* condition, char* startLabel, char* endLabel) {
    // Output intermediate code for While statement
    printf("%s:\n", startLabel);
    printf("IF %s GOTO %s ELSE GOTO %s\n", condition, endLabel, endLabel);
}

int main() {
    // Example If statement
    char* ifCondition = "x < y";
    char* ifTrueLabel = generateLabel(); // Generate label for true branch
    char* ifFalseLabel = generateLabel(); // Generate label for false branch
    generateIfCode(ifCondition, ifTrueLabel, ifFalseLabel); // Generate intermediate code for If statement
    printf("%s: printf(\"x is less than y\\n\");\n", ifTrueLabel); // Output code for true branch
    printf("%s: printf(\"x is not less than y\\n\");\n", ifFalseLabel); // Output code for false branch

    // Example While loop
    char* whileCondition = "i < 5";
    char* whileStartLabel = generateLabel(); // Generate label for loop start
    char* whileEndLabel = generateLabel(); // Generate label for loop end
    generateWhileCode(whileCondition, whileStartLabel, whileEndLabel); // Generate intermediate code for While loop
    printf("%s: printf(\"i: %%d\\n\", i);\n", whileStartLabel); // Output code for loop body
    printf("i++;\n"); // Increment loop counter
    printf("GOTO %s;\n", whileStartLabel); // Jump back to loop start
    printf("%s:\n", whileEndLabel); // Output label for loop end

    // Free dynamically allocated memory
    free(ifTrueLabel);
    free(ifFalseLabel);
    free(whileStartLabel);
    free(whileEndLabel);

    return 0;
}