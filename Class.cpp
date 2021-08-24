#include <iostream>
#include <sstream>
using namespace std;

class pessoa{
  public:
  
  void set_age(int age);
  void set_standard(int standart);
  void set_first_name(string fn);
  void set_last_name(string ln);
  int get_age();
  int get_standard();
  string get_first_name();
  string get_last_name();
  string to_string();
  private:
  int a;
  int s;
  string ln;
  string fn;
  
};

void pessoa::set_age(int age){
    a = age;
}
void pessoa::set_standard(int standart){
    s = standart;
}
void pessoa::set_first_name(string fn1){
    fn = fn1;
}
void pessoa::set_last_name(string ln1){
    ln = ln1;
}
int pessoa::get_age(){
    return a;
}
int pessoa::get_standard(){
    return s;
}
string pessoa::get_first_name(){
    return fn;
}
string pessoa::get_last_name(){
    return ln;
}

string pessoa::to_string(){
    string valor;
    valor = std::to_string(a)+ "," + fn + "," + ln + "," + std::to_string(s);
    return valor;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    pessoa *st = new pessoa();
    st->set_age(age);
    st->set_standard(standard);
    st->set_first_name(first_name);
    st->set_last_name(last_name);
    
    cout << st->get_age() << "\n";
    cout << st->get_last_name() << ", " << st->get_first_name() << "\n";
    cout << st->get_standard() << "\n";
    cout << "\n";
    cout << st->to_string();
    
    return 0;
}

