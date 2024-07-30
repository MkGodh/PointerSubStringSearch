#include <iostream>

bool subString(const char* a, const char* b)
{
    int i = 0;

    while (*(a + i) != '\0') {
        int j = 0;
        while (*(b + j) != '\0') {
            if (*(a + i + j) != *(b + j)) {
                break;
            }
            j++;
            if (*(b + j) == '\0') {
                return true;
            }
        }

        i++;

    }
    return false;
}
int main()
{
    const char* a = "Hello world";
    const char* b = "karr";



    if (subString(a, b)) {
        std::cout << "You have sub string";
    }
    else {
        std::cout << "You have not";
    }

    return 0;
}

