#include <stdio.h>

int main() {
    int episode_number;

    printf("Введіть номер серії: ");
    scanf("%d", &episode_number);

    switch (episode_number) {
        case 1:
            printf("Назва: Pilot\n");
            printf("Дата прем'єри: 3 вересня 2008 року\n");
            break;
        case 2:
            printf("Назва: Seeds\n");
            printf("Дата прем'єри: 10 вересня 2008 року\n");
            break;
        case 3:
            printf("Назва: Fun Town\n");
            printf("Дата прем'єри: 17 вересня 2008 року\n");
            break;
        case 4:
            printf("Назва: Patch Over\n");
            printf("Дата прем'єри: 24 вересня 2008 року\n");
            break;
        case 5:
            printf("Назва: Giving Back\n");
            printf("Дата прем'єри: 1 жовтня 2008 року\n");
            break;
        case 6:
            printf("Назва: AK-51\n");
            printf("Дата прем'єри: 8 жовтня 2008 року\n");
            break;
        case 7:
            printf("Назва: Old Bones\n");
            printf("Дата прем'єри: 15 жовтня 2008 року\n");
            break;
        case 8:
            printf("Назва: The Pull\n");
            printf("Дата прем'єри: 22 жовтня 2008 року\n");
            break;
        case 9:
            printf("Назва: Hell Followed\n");
            printf("Дата прем'єри: 29 жовтня 2008 року\n");
            break;
        case 10:
            printf("Назва: Better Half\n");
            printf("Дата прем'єри: 5 листопада 2008 року\n");
            break;
        case 11:
            printf("Назва: Capybara\n");
            printf("Дата прем'єри: 12 листопада 2008 року\n");
            break;
        case 12:
            printf("Назва: The Sleep of Babies\n");
            printf("Дата прем'єри: 19 листопада 2008 року\n");
            break;
        case 13:
            printf("Назва: The Revelator\n");
            printf("Дата прем'єри: 26 листопада 2008 року\n");
            break;
        default:
            printf("Недійсний номер серії\n");
            break;
    }

    return 0;
}