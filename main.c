#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char productName[][20] = {
    "Sugar", "Salt", "Toor Dal", "Chana Dal", "Rice", "Wheat", "Oil", "Maggi", 
    "Bread", "Potato", "Onion", "Toothpaste", "Soap", "Toothbrush", "Tomato", 
    "Detergent", "Besan", "Tea"
};

int price[] = {
    50, 20, 110, 120, 40, 25, 90, 15, 20, 30, 25, 55, 35, 25, 20, 60, 70, 80
};

int searchProductIndex(char name[]) {
    for (int i = 0; i < 18; i++) {
        if (strcasecmp(name, productName[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int qty[18] = {0};
    int i, n;
    float total = 0.0, discount = 0.0;

    printf("\n\n ***** WELCOME TO RAJ GROCERY STORE *****\n\n");

    printf("  We offer the following discounts:\n");
    printf("- 5%% discount on bills above Rs. 2000\n");
    printf("- 10%% discount on bills above Rs. 3000\n\n");

    printf("     Our products and their prices:\n");
    printf("+----------------------+---------------------+\n");
    printf("| %-20s | %-17s |\n", "Product", "Price");
    printf("+----------------------+---------------------+\n");
    for (i = 0; i < 18; i++) {
        char *unit;
        if (i == 0 || i == 4 || i == 5 || i == 9 || i == 10 || i == 14 || i == 16 || i == 17)
            unit = "per kg";
        else if (i == 6)
            unit = "per ltr";
        else
            unit = "per pack";
        printf("| %-20s | Rs %-3d %-10s |\n", productName[i], price[i], unit);
    }
    printf("+----------------------+---------------------+\n");

    printf("\nEnter the number of products you want to buy: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Exiting program.\n");
        return 1;
    }

    char temp[50];
    for (i = 0; i < n; i++) {
        printf("\nEnter product %d name: ", i + 1);
        scanf(" %[^\n]", temp);
        int index = searchProductIndex(temp);
        if (index == -1) {
            printf("Product not available.\n");
            i--; // repeat this iteration
            continue;
        }

        printf("Enter quantity for %s: ", productName[index]);
        int q;
        if (scanf("%d", &q) != 1 || q <= 0) {
            printf("Invalid quantity. Exiting program.\n");
            return 1;
        }
        qty[index] += q;
    }

    printf("\n\n=========== RAJ GROCERY STORE BILL ===========\n");
    printf("+----------------------+----------+------------+\n");
    printf("| %-20s | Qty      | Total      |\n", "Product");
    printf("+----------------------+----------+------------+\n");

    for (i = 0; i < 18; i++) {
        if (qty[i] > 0) {
            float product_total = qty[i] * price[i];
            printf("| %-20s | %-8d | Rs %-7.2f |\n", productName[i], qty[i], product_total);
            total += product_total;
        }
    }

    printf("+----------------------+----------+------------+\n");

    if (total > 3000) {
        discount = total * 0.10;
    } else if (total > 2000) {
        discount = total * 0.05;
    }

    if (discount > 0) {
        printf("| %-31s Rs %-7.2f |\n", "Discount Applied:", discount);
    } else {
        printf("| %-31s %-12s |\n", "Discount Applied:", "N/A");
    }

    printf("| %-31s Rs %-7.2f |\n", "Final Amount to Pay:", total - discount);
    printf("+---------------------------------------------+\n");

    printf("\nThank you for shopping with us! \n\n");
    return 0;
}
