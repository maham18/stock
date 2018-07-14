 #include<iostream>
 #include<string>
using namespace std;
class StockItem
{
  public:
  StockItem()
  {
    this->StockLevel=500;
    this->UnitPrice=100;
  }
void setStockLevel(int StockLevel)
{
  this->StockLevel=500;
}

void setUnitPrice(int UnitPrice)
{
  this->UnitPrice=100;
}

  int getStockLevel()
  {
    return this->StockLevel;
  }
  float getUnitprice()
  {
    return this->UnitPrice;
  }



void StockReceipts(int no)
  {
  StockLevel=StockLevel+no;
  }
void StockIssue(int no)
  {
    this->StockLevel=StockLevel-no;
  }
  void Show()
  {
     cout<<"Hi I am a StockItem"<<endl;
        cout<<"stocklevel"<<endl;
    cout<< this->StockLevel<<endl; 
       cout<<"unit price"<<endl;
    cout<< this->UnitPrice<<endl; 

 
  }
                                                                                                                                                                                              
  private:
  int StockLevel;
  float UnitPrice;
};