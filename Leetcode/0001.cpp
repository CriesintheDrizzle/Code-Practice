#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* temp;
    temp = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                temp[0] = i;
                temp[1] = j;
                *returnSize = 2;
                return temp;
            }
        }
    }
    *returnSize = 0;
    free(temp);
    returnSize = NULL;
    return temp;
}