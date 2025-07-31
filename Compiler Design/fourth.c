#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_RULES 10
#define MAX_SYMBOLS 50  // Increased to handle larger rules

char grammar[MAX_RULES][MAX_SYMBOLS];
int numRules;

bool hasLeftRecursion(char *rule) {
    return rule[0] == rule[3]; // Checks if A -> Aα (left recursion)
}

void removeLeftRecursion(char *rule) {
    char alpha[MAX_SYMBOLS], beta[MAX_SYMBOLS];
    int i = 3, alphaIndex = 0, betaIndex = 0;

    // Extract α (recursive part)
    while (rule[i] != '|' && rule[i] != '\0' && rule[i] != '\n') {
        alpha[alphaIndex++] = rule[i++];
    }
    alpha[alphaIndex] = '\0';

    // Move to β (non-recursive part)
    if (rule[i] == '|') {
        i++;
    }

    while (rule[i] != '\0' && rule[i] != '\n') {
        beta[betaIndex++] = rule[i++];
    }
    beta[betaIndex] = '\0';

    // Print the modified grammar
    printf("%c -> %s%c'\n", rule[0], beta, rule[0]);
    printf("%c' -> %s%c' | ε\n", rule[0], alpha, rule[0]);
}

void modifyGrammar() {
    for (int i = 0; i < numRules; i++) {
        if (hasLeftRecursion(grammar[i])) {
            removeLeftRecursion(grammar[i]);
        } else {
            printf("%s", grammar[i]); // Print rule as it is
        }
    }
}

int main() {
    printf("Enter the number of rules: ");
    scanf("%d", &numRules);
    getchar(); // Consume the newline character

    printf("Enter the grammar rules (e.g., A->Aa|b):\n");
    for (int i = 0; i < numRules; i++) {
        fgets(grammar[i], MAX_SYMBOLS, stdin);
        grammar[i][strcspn(grammar[i], "\n")] = 0; // Remove newline character
    }

    printf("\nModified Grammar:\n");
    modifyGrammar();
    
    return 0;
}
