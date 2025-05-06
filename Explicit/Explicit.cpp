//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//private:
//    string author;
//    string title;
//    string publisher;
//    int year;
//    int pages;
//
//public:
//    explicit Book(const string& a = "", const string& t = "", const string& p = "", int y = 0, int pg = 0)
//        : author(a), title(t), publisher(p), year(y), pages(pg) {
//    }
//
//    void print() const {
//        cout << "Автор: " << author << ", Назва: " << title
//            << ", Видавництво: " << publisher << ", Рік: " << year
//            << ", Сторінок: " << pages << endl;
//    }
//
//    string getAuthor() const { return author; }
//    string getPublisher() const { return publisher; }
//    int getYear() const { return year; }
//};
//
//int main() {
//    const int SIZE = 5;
//    Book books[SIZE] = {
//        Book("Шевченко", "Кобзар", "Веселка", 1840, 300),
//        Book("Ліна Костенко", "Маруся Чурай", "А-БА-БА-ГА-ЛА-МА-ГА", 1979, 250),
//        Book("Шевченко", "Поезії", "Веселка", 1850, 280),
//        Book("Франко", "Захар Беркут", "Основи", 1883, 320),
//        Book("Ліна Костенко", "Поезії", "Веселка", 2005, 200)
//    };
//
//    string searchAuthor, searchPublisher;
//    int searchYear;
//
//    cout << "\nВведіть автора для пошуку: ";
//    getline(cin, searchAuthor);
//    cout << "\nКниги автора \"" << searchAuthor << "\":" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        if (books[i].getAuthor() == searchAuthor) {
//            books[i].print();
//        }
//    }
//
//    cout << "\nВведіть назву видавництва для пошуку: ";
//    getline(cin, searchPublisher);
//    cout << "\nКниги видавництва \"" << searchPublisher << "\":" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        if (books[i].getPublisher() == searchPublisher) {
//            books[i].print();
//        }
//    }
//
//    cout << "\nВведіть рік для пошуку книг, виданих пізніше: ";
//    cin >> searchYear;
//    cout << "\nКниги, видані після " << searchYear << " року:" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        if (books[i].getYear() > searchYear) {
//            books[i].print();
//        }
//    }
//
//    return 0;
//}
