#include<iostream>
using namespace std; 

int main()
{
    int quant;
    int choice;
    //holds quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshakes=0,Qchickenroll=0;
    //food items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshakes=0,Schickenroll=0;
    //total price of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shakes=0,Total_chickenroll=0;


    cout<<"\n\t Quantity of items we have:";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shakes:";
    cin>>Qshakes;
    cout<<"\n Quantity of chickenroll:";
    cin>>Qchickenroll;


    m:
    cout<<"\n\t\t\t Please select from the menu options :";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shakes";
    cout<<"\n6) Chickenroll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms you want:";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"rooms have been allotted to you.";
            }
            else

                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in the hotel";
                break;

                case 2:
                    cout<<"\n\nEnter the quantity of pasta you want:";
                    cin>>quant;
                    if(Qpasta-Spasta >=quant)
                    {
                        Spasta=Spasta+quant;
                        Total_pasta=Total_pasta+quant*250;
                        cout<<"\n\n\t\t"<<quant<<"quantity of pasta that has been ordered by you.";
                    }
                    else

                        cout<<"\n\tOnly"<<Qpasta-Spasta<<"Quantity of pasta remaining in the hotel";
                        break;


                case 3:
                    cout<<"\n\nEnter the quantity of burger you want:";
                    cin>>quant;
                    if(Qburger-Sburger >=quant)
                    {
                        Sburger=Sburger+quant;
                        Total_burger=Total_burger+quant*150;
                        cout<<"\n\n\t\t"<<quant<<"quantity of burger that has been ordered by you.";
                    }
                    else

                        cout<<"\n\tOnly"<<Qburger-Sburger<<"Quantity of burger remaining in the hotel";
                        break;


                case 4:
                    cout<<"\n\nEnter the quantity of noodles you want:";
                    cin>>quant;
                    if(Qnoodles-Snoodles >=quant)
                    {
                        Snoodles=Snoodles+quant;
                        Total_noodles=Total_noodles+quant*250;
                        cout<<"\n\n\t\t"<<quant<<"quantity of noodles that has been ordered by you.";
                    }
                    else

                        cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Quantity of noodles remaining in the hotel";
                        break;

                case 5:
                    cout<<"\n\nEnter the quantity of shakes you want:";
                    cin>>quant;
                    if(Qshakes-Sshakes >=quant)
                    {
                        Sshakes=Sshakes+quant;
                        Total_shakes=Total_shakes+quant*90;
                        cout<<"\n\n\t\t"<<quant<<"quantity of Shakes that has been ordered by you.";
                    }
                    else

                        cout<<"\n\tOnly"<<Qshakes-Sshakes<<"Quantity of shakes remaining in the hotel";
                        break;


                case 6:
                    cout<<"\n\nEnter the quantity of chickenroll you want:";
                    cin>>quant;
                    if(Qchickenroll-Schickenroll >=quant)
                    {
                        Schickenroll=Schickenroll+quant;
                        Total_chickenroll=Total_chickenroll+quant*150;
                        cout<<"\n\n\t\t"<<quant<<"quantity of chickenroll that has been ordered by you.";
                    }
                    else

                        cout<<"\n\tOnly"<<Qchickenroll-Schickenroll<<"Quantity of chickenroll remaining in the hotel";
                        break;
                case 7:
                cout<<"\n\n\t\tDetails of sales and collection:";
                cout<<"\n\nNumber of rooms we had:"<<Qrooms;
                cout<<"\n\nNumber of rooms we gave for rent:"<<Srooms;
                cout<<"\n\nRemaining rooms:"<<Qrooms-Srooms;
                cout<<"\n\nTotal rooms collection for the day:"<<Total_rooms;

                cout<<"\n\nNumber of pasta we had:"<<Qpasta;
                cout<<"\n\nNumber of pasta we sold:"<<Spasta;
                cout<<"\n\nRemaining pasta:"<<Qpasta-Spasta;
                cout<<"\n\nTotal pasta collection for the day:"<<Total_pasta;

                cout<<"\n\nNumber of burger we had:"<<Qburger;
                cout<<"\n\nNumber of burger we sold:"<<Sburger;
                cout<<"\n\nRemaining burger:"<<Qburger-Sburger;
                cout<<"\n\nTotal burger collection for the day:"<<Total_burger;

                cout<<"\n\nNumber of noodles we had:"<<Qnoodles;
                cout<<"\n\nNumber of noodles we sold:"<<Snoodles;
                cout<<"\n\nRemaining noodles:"<<Qnoodles-Snoodles;
                cout<<"\n\nTotal noodles collection for the day:"<<Total_noodles;

                cout<<"\n\nNumber of shakes we had:"<<Qshakes;
                cout<<"\n\nNumber of shakes we sold:"<<Sshakes;
                cout<<"\n\nRemaining shakes:"<<Qshakes-Sshakes;
                cout<<"\n\nTotal shakes collection for the day:"<<Total_shakes;

                cout<<"\n\nNumber of chickenroll we had:"<<Qchickenroll;
                cout<<"\n\nNumber of chickenroll we sold:"<<Schickenroll;
                cout<<"\n\nRemaining chickenroll:"<<Qchickenroll-Schickenroll;
                cout<<"\n\nTotal chickenroll collection for the day:"<<Total_chickenroll;
    

                case 8:
                    exit(0);

                    default:
                        cout<<"\n Please select the numbers mentioned above!";
                        
    }           
    goto m;
    

}
