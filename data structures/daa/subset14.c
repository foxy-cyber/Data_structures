#include <stdio.h>
#include <stdbool.h>

void subsetSum(int set[], int n, int targetSum, bool solution[], int currSum, int currIndex)
{
    if (currSum == targetSum)
    {
        printf("Subset with the given sum found: ");
        for (int i = 0; i < n; i++)
        {
            if (solution[i])
                printf("%d ", set[i]);
        }
        printf("\n");
        return;
    }

    if (currIndex == n || currSum > targetSum)
        return;

    // Include the current element in the subset
    solution[currIndex] = true;
    subsetSum(set, n, targetSum, solution, currSum + set[currIndex], currIndex + 1);

    // Exclude the current element from the subset
    solution[currIndex] = false;
    subsetSum(set, n, targetSum, solution, currSum, currIndex + 1);
}

void findSubsetSum(int set[], int n, int targetSum)
{
    bool solution[n];
    subsetSum(set, n, targetSum, solution, 0, 0);
}

int main()
{
    int set[] = {2, 4, 6, 8, 10};
    int n = sizeof(set) / sizeof(set[0]);
    int targetSum = 14;

    findSubsetSum(set, n, targetSum);

    return 0;
}
