#include <stdio.h>

int main()
{
    int count;
    scanf("%d/n", &count);
    int arr[10];
    for (int i=0; i < count; i++){
        scanf("%d\n", &arr[i]);
    }
    int low = 0;
    int high = 9;
    int key; //Искомое ключевое поле
    int search = -1;
    scanf("%d", &key);
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (key == arr[mid])
        { //нашли требуемый элемент
            search = mid;
            break;
        }
        if (key < arr[mid]) // если искомое ключевое поле меньше найденной середины
            high = mid - 1; // смещаем правую границу, продолжим поиск в левой части
        else
            low = mid + 1; // если искомое ключевое поле больше найденной середины, смещаем левую границу
    }
    printf("%d", search+1);
    return 0;
}
