#include <iostream>
#include <string>
using namespace std;


class Book {
public:
	string title;
	int quantity;
	float price;
};


struct book {
	string title;
	int quantity;
	float price;
} book1;


void Book_print(Book* bk){
	cout << "--- Class Book ---" << endl;
	cout << "Title : " << bk->title << endl;
	cout << "Quantity : " << bk->quantity << endl;
	cout << "Price : " << bk->price << endl;
	cout << "--- END OF CLASS---" << endl;
}

void book_print(struct book* bk){
	cout << "--- Struct Book ---" << endl;
	cout << "Title : " << bk->title << endl;
	cout << "Quantity : " << bk->quantity << endl;
	cout << "Price : " << bk->price << endl;
	cout << "--- END OF STRUCT ---" << endl;
}

int main(){
	
	book1.title = "Atomic Habits";
	book1.quantity = 20;
	book1.price = 10.20;
	book_print(&book1);

	Book* bk = reinterpret_cast<Book*>(&book1);

	Book_print(bk);

	return EXIT_SUCCESS;
}
