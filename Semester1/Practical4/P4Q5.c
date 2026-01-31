//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//#define KEYBOARD_PRICE 35.50
//#define MOUSE_PRICE 12.90
//#define MONITOR_PRICE 600.00
//#define PRINTER_PRICE 168.00
//#define SPEAKER_PRICE 120.00
//#define TAX 0.0825
//void main()
//{
//	int kb, mouse, monitor, print, speak;
//	float totalKb, totalMouse, totalMonitor, totalPrint, totalSpeak, subtotal, afterTax, total;
//
//	printf("Enter number of items sold:\n");
//	printf("Keyboard > ");
//	scanf("%d", &kb);
//	printf("Mouse    > ");
//	scanf("%d", &mouse);
//	printf("Monitor  > ");
//	scanf("%d", &monitor);
//	printf("Printer  > ");
//	scanf("%d", &print);
//	printf("Speaker  > ");
//	scanf("%d", &speak);
//
//	totalKb = kb * KEYBOARD_PRICE;
//	totalMouse = mouse * MOUSE_PRICE;
//	totalMonitor = monitor * MONITOR_PRICE;
//	totalPrint = print * PRINTER_PRICE;
//	totalSpeak = speak * SPEAKER_PRICE;
//	subtotal = totalKb + totalMouse + totalMonitor + totalPrint + totalSpeak;
//	afterTax = subtotal * TAX;
//	total = afterTax + subtotal;
//
//	printf("%3s   %11s   %11s   %11s\n", "QTY", "DESCRIPTION", "UNIT PRICE", "TOTAL PRICE");
//	printf("%3s   %11s   %11s   %11s\n", "---", "-----------", "----------", "-----------");
//	printf("%3.d    %-11s   %10.2f   %11.2f\n", kb, "KEYBOARD", KEYBOARD_PRICE, totalKb);
//	printf("%3.d    %-11s   %10.2f   %11.2f\n", mouse, "MOUSE", MOUSE_PRICE, totalMouse);
//	printf("%3.d    %-11s   %10.2f   %11.2f\n", monitor, "MONITOR", MONITOR_PRICE, totalMonitor);
//	printf("%3.d    %-11s   %10.2f   %11.2f\n", print, "PRINTER", PRINTER_PRICE, totalPrint);
//	printf("%3.d    %-11s   %10.2f   %11.2f\n", speak, "SPEAKER", SPEAKER_PRICE, totalSpeak);
//	//printf("QTY         DESCRIPTION          UNIT PRICE      TOTAL PRICE\n");
//	//printf("---         -----------          ----------      -----------\n");
//	//printf("%3.d          KEYBOARD                  35.50    %12.2f\n", kb, totalKb);
//	//printf("%3.d          MOUSE                     12.90    %12.2f\n", mouse, totalMouse);
//	//printf("%3.d          MONITOR                  600.00    %12.2f\n", monitor, totalMonitor);
//	//printf("%3.d          PRINTER                  168.00    %12.2f\n", print, totalPrint);
//	//printf("%3.d          SPEAKER                  120.00    %12.2f\n", speak, totalSpeak);
//	printf("---------------------------------------------\n");
//	printf("%20s%11s  %12.2f\n", "", "SUBTOTAL", subtotal);
//	printf("%20s%11s  %12.2f\n", "", "TAX (8.25%)", afterTax);
//	printf("%20s%11s  %12.2f\n", "", "TOTAL", total);
//	system("pause");
//}
///*Enter number of items sold:
//Keyboard > 90
//Mouse > 50
//Monitor > 125
//Printer > 10
//Speaker > 5
//QTY   DESCRIPTION    UNIT PRICE   TOTAL PRICE
//---   -----------    ----------   -----------
// 90    KEYBOARD           35.50       3195.00
// 50    MOUSE              12.90        645.00
//125    MONITOR           600.00      75000.00
// 10    PRINTER           168.00       1680.00
//  5    SPEAKER           120.00        600.00
//---------------------------------------------
//                       SUBTOTAL      81120.00
//                    TAX (8.25%)       6692.40
//                          TOTAL      87812.40
//Press any key to continue . . .
//*/