#include<stdio.h>
int main()
{
    int id = 1, pid1, pid2, pid3;
    char pname1[20], pname2[20], pname3[20], cname[100], cmob[100];
    float pprice1, pprice2, pprice3;
    int pqty1, pqty2, pqty3;
    float total, discount, disamount, payamount;

    printf("\nEnter Customer Detail :");
    printf("\nEnter Name : ");
    scanf("%s", cname);
    printf("\nEnter Mobile Number : ");
    scanf("%s", cmob);

    // --------------------------------------------------product 1
    printf("\n Enter Product 1 Details : ");
    pid1 = id++;
    printf("\nEnter Name : ");
    scanf("%s", pname1);
    printf("\nEnter Price : ");
    scanf("%f", &pprice1);
    printf("\nEnter Quantity: ");
    scanf("%d", &pqty1);

    //--------------------------------------------------product 2
    printf("\nEnter Product 2 Details : ");
    pid2 = id++;
    printf("\nEnter Name : ");
    scanf("%s", pname2);
    printf("\nEnter Price : ");
    scanf("%f", &pprice2);
    printf("\nEnter Quantity: ");
    scanf("%d", &pqty2);

    //--------------------------------------------------product 3
    printf("\nEnter Product 3 Details : ");
    pid3 = id++;
    printf("\nEnter Name : ");
    scanf("%s", pname3);
    printf("\nEnter Price : ");
    scanf("%f", &pprice3);
    printf("\nEnter Quantity: ");
    scanf("%d", &pqty3);

    total = (pprice1 * pqty1) + (pprice2 * pqty2) + (pprice3 * pqty3);

    if (total > 10000)
        discount = 10;
    else if (total > 8000)
        discount = 7;
    else if (total > 5000)
        discount = 3;
    else
        discount = 0;
        

     disamount=(total*discount)/100;
     payamount=total-disamount;   

    printf("\n Customer Name : %s", cname);
    printf("\n Customer Number : %s", cmob);
    printf("\n -----------------------------------------------------------------------------");
    printf("\n | ID |           NAME           |    PRICE     |    QTY    |     TOTAL      | ");
    printf("\n -----------------------------------------------------------------------------");
    printf("\n |%4d|%26s|%14f|%11d|%16f", pid1, pname1, pprice1, pqty1, (pprice1 * pqty1));
    printf("\n |%4d|%26s|%14f|%11d|%16f", pid2, pname2, pprice2, pqty2, (pprice2 * pqty2));
    printf("\n |%4d|%26s|%14f|%11d|%16f", pid3, pname3, pprice3, pqty3, (pprice3 * pqty3));
    printf("\n -----------------------------------------------------------------------------");
    printf("\n \t \t \t \t TOTAL          :%.2f", total);
    printf("\n \t \t \t \t DISCOUNT (%%)  :%f", discount);
    printf("\n \t \t \t \t DISCOUNT AMT   :%.2f", disamount);
    printf("\n \t \t \t \t PAYING AMT     :%.2f", payamount);

    return 0;
}