#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *productName[] = {"sugar", "milk", "vegetable masala", "washing powder", "salt", "poha", "oil", "tooth paste", "shampoo", "wheat flour", "maida", "coffee", "tea", "butter", "turmeric powder", "hair oil", "ghee"};
char product_name[19][20];
int product_quantity[19];
int count1 = 0, total_bill = 0, total_bill1 = 0, discount;
int sugar_p = 50, milk_p = 50, vegetable_masala_p = 50, wahing_powder_p = 100, salt_p = 20, poha_p = 50, oil_p = 200, tooth_paste_p = 40, shampoo_p = 100, wheat_flour_p = 50, maida_p = 45, coffee_p = 200, tea_p = 100, butter_p = 100, turmeric_powder_p = 200, hair_oil_p = 60, ghee_p = 300;
void generate_bill()
{
    int i,bid,n,date[11],phone[12];
    char cname[20];
    printf("\nBill id = 1");
    scanf(&bid);
    fflush(stdin);
    printf("\nEnter the Date(dd-mm-yyyy) = ");
    gets(date);
    printf("\nEnter your name = ");
    gets(cname);
    printf("\nEnter your phone number = ");
    gets(phone);
    printf("\n\t  **** RAJ GROCERY STORE BILL ****\n");
    printf("|-----------------------------------------------|");
    printf("\n\nBill id is = 1",bid);
    printf("\n\nDate = %s",date);
    printf("\n\nCustomer name = %s",cname);
    printf("\n\nPhone number = %s",phone);
    printf("\n|   Product\t\tQuantity\t\tPrice               |\n");
    printf("|------------------------------------------------|\n");
    for (int i = 0; i < count1; i++)
    {
        if (!strcmp("sugar", product_name[i]))
        {
            printf("|  %s           \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], sugar_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("milk", product_name[i]))
        {
            printf("|  %s            \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], milk_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("vegetable masala", product_name[i]))
        {
            printf("|  %s     \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], vegetable_masala_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("washing powder", product_name[i]))
        {
            printf("|  %s      \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], wahing_powder_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("salt", product_name[i]))
        {
            printf("|  %s            \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], salt_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("poha", product_name[i]))
        {
            printf("|  %s            \t%dkg    \t\t%d  \n", product_name[i], product_quantity[i], poha_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("oil", product_name[i]))
        {
            printf("|  %s                 \t%dltr      \t\t%d  \n", product_name[i], product_quantity[i], oil_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("tooth paste", product_name[i]))
        {
            printf("|  %s          \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], tooth_paste_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("shampoo", product_name[i]))
        {
            printf("|  %s    \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], shampoo_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("wheat flour", product_name[i]))
        {
            printf("|  %s       \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], wheat_flour_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("maida", product_name[i]))
        {
            printf("|  %s                \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], maida_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("coffee", product_name[i]))
        {
            printf("|  %s          \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], coffee_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("tea", product_name[i]))
        {
            printf("|  %s             \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], tea_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("butter", product_name[i]))
        {
            printf("|  %s               \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], butter_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("turmeric powder", product_name[i]))
        {
            printf("|  %s      \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], turmeric_powder_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("hair oil", product_name[i]))
        {
            printf("|  %s            \t%dpack      \t\t%d  \n", product_name[i], product_quantity[i], hair_oil_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");
        }
        else if (!strcmp("ghee", product_name[i]))
        {
            printf("|  %s               \t%dkg     \t\t%d  \n", product_name[i], product_quantity[i], ghee_p*product_quantity[i]);
            printf("|-------------------------------------------------------\n");
        }
    }
    printf("| Total product %d \t\tTotal amount    %d\n", count1, total_bill1);
    printf("|--------------------------------------------------------\n");
    printf("|                  \t\tDiscount        %d\n", discount);
    printf("|--------------------------------------------------------\n");
    printf("|                  \t\tPayable amount  %d\n", total_bill);
    printf("|--------------------------------------------------------\n");
}
void calculate_bill()
{
    char choose;
    for (int i = 0; i < count1; i++)
    {
        if (!strcmp("sugar", product_name[i]))
        {
            total_bill += sugar_p * product_quantity[i];
        }
        else if (!strcmp("milk", product_name[i]))
        {
            total_bill += milk_p * product_quantity[i];
        }
        else if (!strcmp("vegetable masala", product_name[i]))
        {
            total_bill += vegetable_masala_p * product_quantity[i];
        }
        else if (!strcmp("washing powder", product_name[i]))
        {
            total_bill += wahing_powder_p * product_quantity[i];
        }
        else if (!strcmp("salt", product_name[i]))
        {
            total_bill += salt_p * product_quantity[i];
        }
        else if (!strcmp("poha", product_name[i]))
        {
            total_bill += poha_p * product_quantity[i];
        }
        else if (!strcmp("oil", product_name[i]))
        {
            total_bill += oil_p * product_quantity[i];
        }
        else if (!strcmp("tooth paste", product_name[i]))
        {
            total_bill += tooth_paste_p * product_quantity[i];
        }
        else if (!strcmp("shampoo", product_name[i]))
        {
            total_bill += shampoo_p * product_quantity[i];
        }
        else if (!strcmp("wheat flour", product_name[i]))
        {
            total_bill += wheat_flour_p * product_quantity[i];
        }
        else if (!strcmp("maida", product_name[i]))
        {
            total_bill += maida_p * product_quantity[i];
        }
        else if (!strcmp("coffee", product_name[i]))
        {
            total_bill += coffee_p * product_quantity[i];
        }
        else if (!strcmp("tea", product_name[i]))
        {
            total_bill += tea_p * product_quantity[i];
        }
        else if (!strcmp("butter", product_name[i]))
        {
            total_bill += butter_p * product_quantity[i];
        }
        else if (!strcmp("hair oil", product_name[i]))
        {
            total_bill += hair_oil_p * product_quantity[i];
        }
        else if (!strcmp("ghee", product_name[i]))
        {
            total_bill += ghee_p * product_quantity[i];
        }
    }
    total_bill1 = total_bill;
    if (total_bill >= 15000)
    {
        discount = (15 * total_bill) / 100;
        total_bill = total_bill - discount;
    }
    else if (total_bill >= 10000 && total_bill < 15000)
    {
        discount = (10 * total_bill) / 100;
        total_bill = total_bill - discount;
    }
    else if (total_bill >= 5000 && total_bill < 10000)
    {
        discount = (5 * total_bill) / 100;
        total_bill = total_bill - discount;
    }
repeat:
    printf("\nIf you want to generate your bill then press 'Y' otherwise 'N': ");
    fflush(stdin);
    scanf("%c", &choose);
    if (choose == 'Y' || choose == 'y')
    {
        generate_bill();
    }
    else if (choose == 'N' || choose == 'n')
    {
        exit(0);
    }
    else
    {
        printf("Invalid character try again\n");
        goto repeat;
    }
}
void main()
{
    char ch, temp_str[20];
    int check,count=0;
    printf("\n\n  ***WELCOME TO RAJ GROCERY STORE***\n\n");
    printf("These are our products and their prices:\n");
    printf(" *********************************\n");
    printf(" | sugar - Rs 50/kg              |\n");
    printf(" | milk - Rs 50/pack             |\n");
    printf(" | vegetable masala - Rs 50/pack |\n");
    printf(" | washing powder - Rs 100/kg    |\n");
    printf(" | salt - Rs 20/kg               |\n");
    printf(" | poha - Rs 50/kg               |\n");
    printf(" | oil - Rs 200/ltr              |\n");
    printf(" | tooth paste - Rs 40/pack      |\n");
    printf(" | shampoo - Rs 100/pack         |\n");
    printf(" | wheat flour - Rs 50/kg        |\n");
    printf(" | maida - Rs 45/kg              |\n");
    printf(" | coffee - Rs 200/pack          |\n");
    printf(" | tea - Rs 100/pack             |\n");
    printf(" | butter - Rs 100/pack          |\n");
    printf(" | hair oil - Rs 60/pack         |\n");
    printf(" | ghee - Rs 300/kg              |\n");
    printf(" *********************************\n\n");
    printf("         Maha Diwali Sale!\n");
    printf("****************************************\n");
    printf("| Get 5%% OFF On Orders Above Rs 5000   |\n");
    printf("|--------------------------------------|\n");
    printf("| Get 10%% OFF On Orders Above Rs 10000 |\n");
    printf("|--------------------------------------|\n");
    printf("| Get 15%% OFF On Orders Above Rs 15000 |\n");
    printf("****************************************\n");
    printf("\nPlease enter the products which you want to buy: \n");
    for (int i = 0; i < 17; i++)
    {
    repeat1:
        count=0;
        printf("Enter product name : ");
        fflush(stdin);
        gets(temp_str);
        for (int j = 0; j < 17; j++)
        {
            check = strcmp(temp_str, productName[j]);
            if (check == 0)
            {
                strcpy(product_name[count1], temp_str);
            }
            else
            {
                count++;
                if (count == 17)
                {
                    printf("Invalid product name\n");
                    goto repeat1;
                }
            }
        }
    repeat2:
        printf("Enter quantity : ");
        scanf("%d", &product_quantity[count1]);
        if (product_quantity[count1] < 1)
        {
            printf("Invalid quantity try again\n");
            goto repeat2;
        }
        count1++;
    repeat:
        printf("If you have entered all product then Press 'Y' otherwise 'N' :");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'Y' || ch == 'y')
        {
            calculate_bill();
            exit(0);
        }else if (ch=='N'||ch=='n')
        {
            printf("");
        }
        else
        {
            printf("Invalid press try again\n");
            goto repeat;
        }
    }
    printf("\nWe have only 17 product\n\n");
    calculate_bill();
}
