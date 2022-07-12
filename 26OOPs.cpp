#include<bits/stdc++.h>
using namespace std;

//basic Example of OOPS
class Product
{
    private:
        int id;
        char name[100];
        int mrp;
        int selling_price;

    public:

        //Constructor
        Product(int id,char *n,int mrp,int selling_price)
        {
            this->id=id;
            this->mrp=mrp;
            this->selling_price=selling_price;
            strcpy(name,n);
        }

        //setters
        void set_mrp(int price)
        {
            mrp=price;
        }

        void set_selling_price(int price)
        {
            if(price>mrp){
                selling_price=mrp;
            }
            else{
                selling_price=price;
            }
        }

        //getters
        int get_mrp()
        {
            return mrp;
        }

        int get_selling_price()
        {
            return selling_price;
        }
};

int main()
{
    Product camera(101,"sony ",26000,25000);

    //camera.mrp=100;
    //camera.selling_price=200;

    //camera.set_mrp(100);
    //camera.set_selling_price(200);

    cout<<sizeof(camera)<<endl;
    cout<<"MRP "<<camera.get_mrp()<<endl;
    cout<<"Selling Price "<<camera.get_selling_price()<<endl;

    return 0;
}