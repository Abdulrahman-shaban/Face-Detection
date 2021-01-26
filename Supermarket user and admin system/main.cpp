#include <iostream>
#include <iomanip>

using namespace std;

void printstars() //for printing the stars as shown
{
    cout<<"\n********************************************************************************\n"<<endl;

}

void display_nce()
{
    cout<<setw(50)<<"_____________________"<<endl;
    cout<<setw(51)<<"|*** SUPERMARKET ***|"<<endl;
    cout<<setw(51)<<"|_____________________|"<<endl;

}
//****************struct   ***********************//
struct product
{
  int pnom , qnom;
  string name ;
  float price ;
  int counter ;
};

//create variable

product arr_product[100];
product re ; // in test
product sum ; // creat


//****************Class Product***********************//

class products {
private :
int ppnom , qqnom ;
string nname ;
float pprice ;
public :
void creat_product () ;
void modify_product ();
void dis_product ();
void del_product ();
int test_product ();
void admin_menu () ;
void buy_product();
void return_product();
void coustomer_menu ();
void sortArrays() ;
};

void sortArrays()
{
    int i = 0 ;

    // Sorting using a single loop
    for (int j = 0; j < 100 - 1; j++)
    {
        // Checking the condition for two
        // simultaneous elements of the array
        if (arr_product[j].pnom > arr_product[j + 1].pnom)
        {

            // Swapping the elements.
            int temp = arr_product[j].pnom;
            arr_product[j].pnom = arr_product[j + 1].pnom;
            arr_product[j + 1].pnom = temp;

            // updating the value of j = -1
            // so after getting updated for j++
            // in the loop it becomes 0 and
            // the loop begins from the start.
            j = -1;

        }if (arr_product[j].pnom =0 ){
        i=j ;
        sum.counter = i ;//last empty index in array
        }
    }
        }




//****************function to creat Product***********************//


void creat_product (){

   int i=0 ;
   i= sum.counter ;
    int ppnom , qqnom ;
    string nname ;
    float pprice ;
    char s ='n' ;
     int TheNum =0;

    do {

        i=  sum.counter ;

        cout << " \n\n\t1****Enter the new product  Number  *********\t " << endl;
		cin >>ppnom ;
		cout << "\n\n\t1**** Enter the product  Quantity *********\t " << endl;
		cin >>qqnom ;
		cout << "\n\n\t1***** Enter the product NAME *********\t " << endl;
		cin >>nname ;
		cout << "\n\n\t1**** Enter the product Price *********\t" << endl;
		cin >>pprice ;
		cout << "\n\n\t1**** you have CREAT product Number *********\t"<<"[ " << ppnom << "] "<< "at index "<<"[ " << i << "] "<< endl;

		if (i<100){
            arr_product[i].pnom=ppnom;
            arr_product[i].qnom=qqnom;
            arr_product[i].name=nname;
            arr_product[i].price=pprice;
            i++;
            sum.counter = i ;
		}
        cout << "/n do you want to add again for yes pres y or n to out  " <<endl ;
        cin >> s ;
        if ( i>100 ){  // <--- Right variables Wrong symbol ">".
            cout << TheNum << " does not exist or wrong value " << endl;
            break ;
            }
    }while (s == 'y'&& i < 100);



             };

//************
//****************function to DISPALY SPECIFIC PRODUCT  ***********************//

 void dis_product (){


        int TheNum =0;
        int i =0;
        char s ='n' ;
        int g = 0 ;

        cout << "\n\n\t1 enter the Number to search for: ";
        cin >> TheNum;

            for(i = 0; i < 100; i++)
            {
            if(arr_product[i].pnom == TheNum)
            {
                cout <<  TheNum << " is at index " << i << endl;

            cout << " \n\n\t1****the product you are search for detales is :\t: "<< endl;;
            cout << " \n\n\t1**** the the product name :\t [  "<<arr_product[i].name << "]"<< endl;
            cout << " \n\n\t1**** the product Number is   :\t [  "<<arr_product[i].pnom << "]"<< endl;
            cout << " \n\n\t1****the product Quantity  :\t [  "<<arr_product[i].qnom << "]"<< endl;
            cout << " \n\n\t1****the product price     :\t [  "<<arr_product[i].price<< "]"<< endl;
            cout << '\n' ;
            break ;
                }
            else { g = TheNum ;  cout << "\n\n\t1****the product Number :\t"<<"[ " << g << "  ] "<< "\n\n\t1************* is not exist *********" << endl;
            break; }
            }
     }

//****************function to know if  SPECIFIC PRODUCT in already exist or not  Product***********************//


 void test_product (){

 //**************test fun ************

 int TheNum =0;
        int i =0;
        int g = 0 ;
        char s ='n' ;
 cout << " \n\n\t1*******Enter the product Number to know if the Number is Exist or not *********\t " << endl;
		cin >>TheNum ;
for(i = 0; i < 100; i++)
            {
            if(arr_product[i].pnom == TheNum)
            {
                cout << "\n\n\t1the product Number "<< TheNum <<endl << "\n\n\t1******** is exist at index *********:\t" <<"[ " << i << "] "<< endl;

            cout << '\n' ;
            re.counter = 6 ;

            break ;
       }else { g = TheNum ;  cout << "\n\n\t1the product nom "<<"[ " << g << "  ] "<< "\n\n\t1******** is not exist *********:\t" << endl;
       re.counter =7 ;
       break; }
       }



            }

//****************function to delete SPECIFIC PRODUCT  ***********************//


void del_product (){
cout << " \n\n\t1*** !You  are  going  to  delete Product !**** " << endl;
int TheNum =0;
        int i =0;
        char s ='n' ;
 cout << " \n\n\t1*****Enter the product NUMBER *********" << endl;
		cin >>TheNum ;
for(i = 0; i < 100; i++)
            {
            if(arr_product[i].pnom == TheNum)
            {
                cout  << TheNum << "\n\n\t1******* the product is exist for index ******** [ " << i << "] "  <<endl;
                if (i<100)  {
            arr_product[i].pnom = 0 ;
            arr_product[i].qnom = 0 ;
            arr_product[i].name = 'O' ;
            arr_product[i].price= 0 ;
        cout << "\n\n\t1*** product Number"<<"[ " << i << "] "<<  " has been  deleted "<<endl;
                            }


            cout << '\n' ;


          }
            }
            };

//****************function to modify SPECIFIC PRODUCT  Product***********************//


void modify_product (){

int i=0 ;
   i= sum.counter ;
    int ppnom , qqnom ;
    string nname ;
    float pprice ;
    char s ='n' ;
     int TheNum =0;

        int g = 0 ;

 cout << " *********Enter the product Number to modify it AGAIN ********* " << endl;
		cin >>TheNum ;
for(i = 0; i < 100; i++)
            {
            if(arr_product[i].pnom == TheNum)
            {
                cout << "\n\n\t1 the product Number "<< TheNum <<endl << "********* is exist for index *********" <<"[ " << i << "] "<< endl;
        cout << " \n\n\t1Enter the product number to modify it   " << endl;
		cin >>ppnom ;
		cout << " \n\n\t1Enter the product Quantity to modify it " << endl;
		cin >>qqnom ;
		cout << " \n\n\t1Enter the product name to modify it " << endl;
		cin >>nname ;
		cout << " \n\n\t1Enter the product price to modify it " << endl;
		cin >>pprice ;
		cout << " \n\n\t1you have modify the  product  and his index is nom "<< i << endl;

		if (i<100){
            arr_product[i].pnom=ppnom;
            arr_product[i].qnom=qqnom;
            arr_product[i].name=nname;
            arr_product[i].price=pprice;
		}
            }break ;
            if ( i>100 ){  // <--- Right variables Wrong symbol ">".
            cout << TheNum << " \n\n\t1does not exist or wrong value " << endl;
            break ;
            }
    }

       }

//****************function to show sells  PRODUCTs ***********************//


void buy_product(){



   int TheNum = 0;
   int i      = 0;
   int h      = 0;
   float f      = 0;
   float t      = 0;
   int r      = 0;
   char s     ='n';



 do{
        cout << " \n\n\t1***Enter the product Number again *********\t" << endl;
        cin >> TheNum;
            for(i = 0; i < 100; i++)
            {
            if(arr_product[i].pnom == TheNum)
            {
                cout <<  TheNum << " is  at index " << i << endl;
                h= arr_product[i].qnom ;
               cout << " \n\n\t1**Enter the Number Quantity of sells product ********* " << endl;
                cin >> r ;
                h= h-r ;
                arr_product[i].qnom = h ;
               f = arr_product[i].price ;
               f = f*r ;
               t = t + f ;
            cout << " \n\n\t1the the product name  [  "<<arr_product[i].name <<  "]"<< endl;
            cout << " \n\n\t1the product NUMBER is    [  "<<arr_product[i].pnom  << "]"<< endl;
            cout << " \n\n\t1the product Quantity  [  "<<arr_product[i].qnom  << "]"<< endl;
            cout << " \n\n\t1the product price     [  "<<arr_product[i].price << "]"<< endl;
            cout << "\n\n\t1the total price is he should pay is   " <<"[ " << t << "] "<<endl;

            }
            }
              cout << "\n\n\t1 do you want to add again for yes pres y or n to out  " <<endl ;
              cin >> s ;
              i=0;
               if ( i>100 ){  // <--- Right variables Wrong symbol ">".
            cout << TheNum << " does not exist or wrong value " << endl;
            break ;
            }
            }while (s=='y'&&i<100);




};


//****************function to DISPALY return PRODUCT  ***********************//


void return_product(){

   int TheNum = 0;
   int i      = 0;
   int h      = 0;
   int f      = 0;
   int t      = 0;
   int r      = 0;
   char s     ='n';
    cout << " \n\n\t1***Enter the product Number again *********\t " ;
        cin >> TheNum;

 do{
            for(i = 0; i < 100; i++)
            {
            if(arr_product[i].pnom == TheNum)
            {
                cout <<  TheNum << " is at index " << i << endl;
                h= arr_product[i].qnom ;
                cout << " \n\n\t1***Enter the Number Quantity of return product ********* " << endl;
                cin>> r ;
                h= h+r ;
                arr_product[i].qnom = h ;
                arr_product[i].qnom = h ;
                f = arr_product[i].price ;
                f=f*r ;
                t = t + f ;


            cout << "\n\n\t1 the the product name \t [  "<<arr_product[i].name <<  "]"<< endl;
            cout << "\n\n\t1 the product Number is \t [  "<<arr_product[i].pnom  << "]"<< endl;
            cout << "\n\n\t1 the product Quantity \t [  "<<arr_product[i].qnom  << "]"<< endl;
            cout << "\n\n\t1 the product price \t [  "<<arr_product[i].price << "]"<< endl;
            cout << "\n\n\t1 the total price returned is " <<"[ " << t << "]"<<endl;

            }
            }
              cout << "\n\n\t1do you want to add again for yes pres y or n to out  " <<endl ;
               cin >> s ;
            }while (s=='y'&&i<100);

};


//****************function to DISPALY the Admin menu ***********************//


void admin_menu (){


char ch;
int ch1;

  while(1)
  {
    cout<<"\n\n\t1.CREATE PRODUCT";

    cout<<"\n\t2.DISPALY SPECIFIC PRODUCT";
    cout<<"\n\t3.MODIFY PRODUCT";
    cout<<"\n\t4.DELETE PRODUCT";
    cout<<"\n\t5.BACK TO MAIN MENU";
    cout<<"\n\n\n\tEnter Your Choice :\t ";
    cin>>ch;
    switch(ch)
    {
        case '1':
            display_nce();
            test_product ();
            ch1=re.counter;
                switch(ch1)
                {
                case 7:
                creat_product ();
                break;
                case 6:
                goto leave;
                break;
                }
            break;
        case '2':
            display_nce();
            dis_product ();
            break;
        case '3':
            display_nce();
            test_product () ;
            modify_product ();

            break;
        case '4':
            display_nce();
            test_product () ;
            del_product ();
            sortArrays() ;
            break;
        case '5':
            goto leave;
            break;
        default:cout<<"Invalid Choice";
       }
  }leave:
  cout<<" ";
}


//****************function to DISPALY the coustomer menu ***********************//

void coustomer_menu (){

int ch1;
char ch;
  while(1)
  {
    cout<<"\n\n\t1.Buy PRODUCT";
    cout<<"\n\t2.return PRODUCT";
    cout<<"\n\t3.BACK TO MAIN MENU";
    cout<<"\n\n\n\tEnter Your Choice :\t ";
    cin>>ch;
    switch(ch)
    {
        case '1':
            display_nce();
            test_product ();
            ch1=re.counter;
                switch(ch1)
                {
                case 6:
                 buy_product();
                break;
                case 7 :
                goto leave;
                break;
                }
            break;

        case '2':
              display_nce();
            test_product ();
            ch1=re.counter;
                switch(ch1)
                {
                case 6:
                 return_product();
                break;
                case 7 :
                goto leave;
                break;
                }
            break;

        case '3':
            goto leave;
            break;
        default:cout<<"Invalid Choice";
       }
  }leave:
  cout<<" ";
}


//****************function to DISPALY the main menu ***********************//

void display_main()
{
    display_nce();
    cout<<"\t\t _______________________________"<<endl;
    cout<<"\t\t|**********MAIN   MENU**********|"<<endl;
    cout<<"\t\t|_______________________________|"<<endl;
    cout<<"\n\n\n";
    cout<<"\n\t\t<1>admin"<<
          "\n\t\t<2>coustomer"<<
          "\n\t\t<3>Exit"<<endl;

}






int main(){

   products pr ;
 while(1)
        {
            int choice,ch ;
            display_main();
            cout<<"\n\t\tEnter your choice  :  ";
            cin>>choice;
            switch(choice)
            {


                case 1:

                    display_nce();
                    admin_menu();
                    break;
                case 2:

                    display_nce();
                    coustomer_menu ();

                    break;
                case 3:
                    exit(0);
                    break;

                default :
                    cout<<"Invalid choice";
                }
            }
	return 0;
}
