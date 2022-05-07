//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct stack
//{
//    char type;
//    struct stack* prev;
//};
//
//int
//validate(const char* str)
//{
//    struct stack* root, * it, * tmp;
//    const char* close = ")>}]";
//    int len, i;
//
//    len = strlen(str);
//
//    root = it = (struct stack*)malloc(sizeof(struct stack));
//    it->prev = NULL;
//
//    i = 0;
//    while (i < len)
//    {
//        tmp = (struct stack*)malloc(sizeof(struct stack));
//        tmp->prev = it;
//        it = tmp;
//        tmp = NULL;
//        switch (str[i])
//        {
//        case '(':
//            it->type = 0;
//            break;
//        case '<':
//            it->type = 1;
//            break;
//        case '{':
//            it->type = 2;
//            break;
//        case '[':
//            it->type = 3;
//            break;
//        default:
//            tmp = it;
//            it = it->prev;
//            free(tmp);
//            if (it == NULL)
//                return -1;
//
//            if (str[i] != close[it->type])
//            {
//                printf("Incorrect\n");
//                tmp = it;
//                it = it->prev;
//                if (tmp != root)
//                    free(tmp);
//                free(root);
//                return -1;
//            }
//            else
//            {
//                tmp = it;
//                it = it->prev;
//                if (tmp != root)
//                    free(tmp);
//
//            }
//        }
//        ++i;
//    }
//    if (it != root)
//    {
//        printf("Incomplete, to complete: ");
//        while (it != NULL)
//        {
//            printf("%c", close[it->type]);
//            tmp = it;
//            it = it->prev;
//            if (tmp != root)
//                free(tmp);
//        }
//        printf("\n");
//        return 1;
//    }
//    free(root);
//    printf("Complete!");
//    return 0;
//
//}
//
//int main()
//{
//    FILE* fp;
//    int i, str;
//    char ch;
//    char buffer[128];
//    fp = fopen("C:\input.txt", "r");
//
//    if (fp == NULL)
//    {
//        printf("Error\n");
//        exit(0);
//    }
//
//    str = 1;
//    do
//    {
//        i = 0;
//        while ((ch = fgetc(fp)) != '\n' && ch != EOF)
//        {
//            buffer[i++] = ch;
//        }
//        buffer[i] = '\0';
//
//        printf("Line %d is ", str);
//        validate(buffer);
//        ++str;
//    } while (ch != EOF);
//    getc(stdin);
//
//    fclose(fp);
//}