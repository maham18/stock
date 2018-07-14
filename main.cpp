 #include<iostream>
 #include<string>
 #include"header.h"
 using namespace std;
 int main()
 {
   StockItem Bread;
    Bread.setStockLevel(500);
       Bread.StockReceipts(1000);
   Bread.Show(); 
cout<<endl;

 Bread.StockIssue(100);
    Bread.Show();
    cout <<endl;



   getchar();

 }