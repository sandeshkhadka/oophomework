#include <iostream>

using namespace std;

class book {
protected:
  char author[20];
  int edition;
  char publicationdate[20];
  int isbn;

public:
  void getdata() {
    cout << "Enter the author name : ";
    cin >> author;
    cout << "Enter the edition : ";
    cin >> edition;
    cout << "Enter the publication date : ";
    cin >> publicationdate;
    cout << "Enter the ISBN number : ";
    cin >> isbn;
  }
};
class recording {
protected:
  char speaker[20];
  int duration;
  char date[20];

public:
  void getdata() {
    cout << "Enter the speaker name : ";
    cin >> speaker;
    cout << "Enter the duration : ";
    cin >> duration;
    cout << "Enter the date : ";
    cin >> date;
  }
};

class talkingbook : public book, public recording {
public:
  void display() {
    cout << "The author name is : " << author << endl;
    cout << "The edition is : " << edition << endl;
    cout << "The publication date is : " << publicationdate << endl;
    cout << "The ISBN number is : " << isbn << endl;
    cout << "The speaker name is : " << speaker << endl;
    cout << "The duration is : " << duration << endl;
    cout << "The date is : " << date << endl;
  }
  void getdata() {
    book::getdata();
    recording::getdata();
  }
};

int main() {
  talkingbook tb;
  tb.getdata();
  tb.display();
  cout << "Submitted by Sandesh Khadaka" << endl;
  return 0;
}
