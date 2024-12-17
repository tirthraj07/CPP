// Ls 29.5 Array of Pointers to base class and Virtual Function

#include <iostream>
#include <string>
using namespace std;

class Publication
{
private:
    float price;
    string title;
    string type = "Publication";

public:
    virtual string getTitle()
    {
        return title;
    }
    virtual void setTitle(string title)
    {
        this->title = title;
    }
    virtual float getPrice()
    {
        return price;
    }
    virtual void setPrice(float price)
    {
        this->price = price;
    }

    virtual string getType()
    {
        return type;
    }
    virtual void setPageCount(int)
    {
        return;
    }
    virtual int getPageCount()
    {
        return 0;
    }
    virtual void setPlayingTime(float)
    {
        return;
    };
    virtual float getPlayingTime()
    {
        return 0;
    };
};

class Book : public Publication
{
private:
    int page_count;
    string type = "Book";

public:
    void setPageCount(int pages)
    {
        page_count = pages;
    }
    int getPageCount()
    {
        return page_count;
    }
    string getType()
    {
        return type;
    }
};

class Tape : public Publication
{
private:
    float playing_time;
    string type = "Tape";

public:
    void setPlayingTime(float time)
    {
        this->playing_time = time;
    }
    float getPlayingTime()
    {
        return playing_time;
    }
    string getType()
    {
        return type;
    }
};

class Menu
{
private:
    Publication *ptr[10];
    Publication **head = &ptr[0];
    string choice;
    int size = 0;

public:
    Menu()
    {
        askChoice();
    }

    void askChoice()
    {

        cout << "Do you want to display Data or Set Data? (-1 to exit)" << endl;
        cin >> choice;
        if (choice == "display")
        {
            displayData();
        }
        else if (choice == "set")
        {
            cout << "Do You want to set Book Data or Tape Data" << endl;
            cin >> choice;
            if (choice == "book")
            {
                setBookData();
            }
            else
            {
                setTapeData();
            }
        }
        else if (choice == "-1")
        {
            return;
        }
        else
        {
            cout << "Enter Valid choice" << endl;
            askChoice();
        }
    }

    void setBookData()
    {
        ptr[size] = new Book;
        int page_count;
        float price;
        string title;
        cout << "Enter Title" << endl;
        getline(cin >> ws, title);
        cout << "Enter Price" << endl;
        cin >> price;
        cout << "Enter Page Count" << endl;
        cin >> page_count;
        ptr[size]->setTitle(title);
        ptr[size]->setPrice(price);
        ptr[size]->setPageCount(page_count);
        size++;
        cout << "Value Stored" << endl;
        askChoice();
    }

    void setTapeData()
    {
        ptr[size] = new Tape;
        float playing_time;
        float price;
        string title;
        cout << "Enter Title" << endl;
        getline(cin >> ws, title);
        cout << "Enter Price" << endl;
        cin >> price;
        cout << "Enter Playing Time" << endl;
        cin >> playing_time;
        ptr[size]->setTitle(title);
        ptr[size]->setPrice(price);
        ptr[size]->setPlayingTime(playing_time);
        size++;
        cout << "Value Stored" << endl;
        askChoice();
    }

    void displayData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << (i + 1) << ". " << head[i]->getTitle() << "\t" << head[i]->getPrice() << "\t" << head[i]->getType() << "\t";
            if (head[i]->getType() == "Book")
            {
                cout << head[i]->getPageCount() << endl;
            }
            else
            {
                cout << head[i]->getPlayingTime() << endl;
            }
        }
        askChoice();
    }
};

int main()
{
    Menu menu;
    return 0;
}