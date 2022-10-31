                    /*14 - Задание*/
                
                /*С подпрограмы*/

bool fourt(int bimon,int mont,int biday,int day)
{
    if(bimon == mont && biday == day)
    {
            cout << endl << "Ваше день рождения сегодня!";
            cout << endl << "______________________________";
            return false;
    }
    else
        return true;
    
}
    
int main()
{
    for(int i = 1; i < 5; i++)
    {
    cout << endl << endl << "  Сценарий - " << i << endl;
    string data[7];
        cout << endl << "-------------------------------------------------";
        cout << endl << "Введите данные о себе!";
        cout << endl << "-------------------------------------------------";
        cout << endl << "Фамилию - ";
        cin >> data[0];
        cout << "Имя - ";
        cin >> data[1];
        cout << "Год рождения - ";
        cin >> data[2];
        cout << "Месяц рождения - ";
        cin >> data[3];
        cout << "День рождения - ";
        cin >> data[4];
        cout << endl;
        cout << "Введите текущий месяц - ";
        cin >> data[5];
        cout << "Введите текущий день - ";
        cin >> data[6];
    
        int bimon = stoi(data[3]);
        int biday = stoi(data[4]);
    
        int mont = stoi(data[5]);
        int day = stoi(data[6]);
        int fou;
        fou = fourt(bimon,mont,biday,day);
        if(not fou);
        else{ 
            if(bimon <= mont && biday <= day)
            {
                cout << endl << "Для " << data[0] << " " << data[1] << " день рождения прошел!";
                cout << endl << "_________________________________________________";
            }
            else
            { 
                cout << endl << "Для " << data[0] << " " << data[1] << " день рождения будет позже!";
                cout << endl << "_________________________________________________";
            }
        }
    }    
}




          /*Без подпрограмы*/

int main()
{
    for(int i = 1; i < 5; i++)
    {
    cout << endl << endl << "  Сценарий - " << i << endl;
    string data[7];
        cout << endl << "-------------------------------------------------";
        cout << endl << "Введите данные о себе!";
        cout << endl << "-------------------------------------------------";
        cout << endl << "Фамилию - ";
        cin >> data[0];
        cout << "Имя - ";
        cin >> data[1];
        cout << "Год рождения - ";
        cin >> data[2];
        cout << "Месяц рождения - ";
        cin >> data[3];
        cout << "День рождения - ";
        cin >> data[4];
        cout << endl;
        cout << "Введите текущий месяц - ";
        cin >> data[5];
        cout << "Введите текущий день - ";
        cin >> data[6];
    
        int bimon = stoi(data[3]);
        int biday = stoi(data[4]);
    
        int mont = stoi(data[5]);
        int day = stoi(data[6]);
    
        if(bimon == mont && biday == day)
        {
            cout << endl << "Ваше день рождения сегодня!";
            cout << endl << "______________________________";
        }
        else{ 
            if(bimon <= mont && biday <= day)
            {
                cout << endl << "Для " << data[0] << " " << data[1] << " день рождения прошел!";
                cout << endl << "_________________________________________________";
            }
            else
            { 
                cout << endl << "Для " << data[0] << " " << data[1] << " день рождения будет позже!";
                cout << endl << "_________________________________________________";
            }
        }
    }    
}