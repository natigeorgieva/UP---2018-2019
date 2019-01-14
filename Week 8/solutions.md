# Решения

## Task 1

- Да се напише рекурсивна функция, която намира сумата на елементите в масив.
```
int sum(int arr[], int size)
{
	if(size == 0)
		return 0;
		
	return arr[size - 1] + sum(arr, size - 1);
}
```

## Task 2

- Да се напише рекурсивна функция, която сортира масив по метода на мехурчето.

```
void swap(int arr[], int a, int b)
{
	int x;
	x = arr[a];
	arr[a] = arr[b];
	arr[b] = x;
}

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) 
	{
		if (arr[i] > arr[i + 1]) 
			swap(arr, i, i + 1);
	}

	if (n - 1 > 1) 
		bubbleSort(arr, n - 1);
}
```

## Bonus tasks

- Да се напише рекурсивна функция, която копира един стринг в друг.

```
void copyStr(char str1[], char str2[], int index = 0) 
{ 
    // copying each character from str1 to str2 
    str2[index] = str1[index];  
  
    // if string reaches end - then stop  
    if (str1[index] == '\0')   
        return; 
        
    // increase character index by one 
    copyStr(str1, str2, index + 1);  
}
```

- Да се напише рекурсивна функция, която намира максималния елемент в едномерен масив.

```
int max(int arr[], int size)
{
	if(size == 1)
		return arr[0];
	
	if(arr[size-1] > max(arr, size-1))
		return arr[size-1];
}
```

- Да се напише рекурсивна функция, която намира минималния елемент в едномерен масив.

```
int min(int arr[], int size)
{
	if(size == 1)
		return arr[0];
	
	if(arr[size-1] < min(arr, size-1))
		return arr[size-1];
}
```
