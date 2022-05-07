//#include <stdio.h>
//int numOfLines = 10;
///**
// *
// * @return
// * 0 - if string is valid,
// * 1 - if string is invalid,
// * -1 - if string should be autocompleted
// */
//int isValidString(const char*);
//int isOpening(char);
//char getCorrespondingCloseBracket(char);
//const char* data[] = {
//        "[({(<(())[]>[[{[]{<()<>>",
//        "[(()[<>])]({[<{<<[]>>(",
//        "{([(<{}[<>[]}>{[]{[(<()>",
//        "(((({<>}<{<{<>}{[]{[]{}",
//        "[[<[([]))<([[{}[[()]]]",
//        "[{[{({}]{}}([{[{{{}}([]",
//        "{<[[]]>}<{[{[{[]{()[[[]",
//        "[<(<(<(<{}))><([]([]()",
//        "<{([([[(<>()){}]>(<<{{",
//        "<{([{{}}[<[[[<>{}]]]>[]]" };
//#define BAD_VALUE (-1)
//namespace Stack {
//    struct StackElement {
//        char value;
//        StackElement* next;
//    };
//    struct Stack {
//        StackElement* head;
//    };
//    char pop(Stack* stack) {
//        if (stack == NULL || stack->head == NULL) {
//            return BAD_VALUE;
//        }
//        //10 get value from the head
//        //20 assign as a head next element of the stack (stack->head->next)
//        //30 delete stack element
//        const char value = stack->head->value;
//        StackElement* next = stack->head->next;
//        delete stack->head;
//        stack->head = next;
//        return value;
//    }
//    void push(Stack* stack, char value) {
//        //10 create Stack element:
//        //   15 assign double value to Stack element value +
//        //   17 Assignee old head as a next of new stack element
//        //20 assigne newstack element to Stack head.
//        if (stack == NULL) {
//            printf("ERROR: Stack is NULL");
//            return;
//        }
//        StackElement* newStackElement = new StackElement;
//        newStackElement->value = value;
//        newStackElement->next = stack->head;
//        stack->head = newStackElement;
//    }
//    void del(Stack* stack) {
//        //TODO free all RAM for the elements
//        while (pop(stack) != BAD_VALUE) {
//        }
//        delete stack;
//    }
//    Stack* newStack() {
//        return new Stack;
//    }
//}
//int main() {
//    for (int i = 0; i < numOfLines; i++) {
//        int strResult = isValidString(data[i]);
//        printf("For line %d answer is %d\n", i, strResult);
//    }
//    return 0;
//}
///**
// *
// * @return
// * 0 - if string is valid,
// * 1 - if string is invalid,
// * -1 - if string should be autocompleted
// */
//int isValidString(const char* str) {
//    int i = 0;
//    int result = 0;
//    char curChar = str[i];
//    Stack::Stack* stack = new Stack::Stack;
//    while (curChar != '\n' && curChar != '\0') {
//        if (isOpening(curChar)) {
//            Stack::push(stack, curChar);
//        }
//        else {
//            char expectedClosingChar = getCorrespondingCloseBracket(Stack::pop(stack));
//            if (expectedClosingChar != curChar) {
//                printf("At the position %d expected %c, but found %c\n", i, expectedClosingChar, curChar);
//                Stack::del(stack);
//                return 1;
//            }
//        }
//        curChar = str[++i];
//    }
//    if (Stack::pop(stack) != BAD_VALUE) {
//        Stack::del(stack);
//        return -1;
//    }
//    return result;
//}
//int isOpening(char c) {
//    return c == '{' || c == '(' || c == '<' || c == '[';
//}
//char getCorrespondingCloseBracket(char c) {
//    char retVal = BAD_VALUE;
//    switch (c) {
//    case '{':
//        retVal = '}';
//        break;
//    case '(':
//        retVal = ')';
//        break;
//    case '[':
//        retVal = ']';
//        break;
//    case '<':
//        retVal = '>';
//        break;
//    default:
//        break;
//    }
//    return retVal;
//}