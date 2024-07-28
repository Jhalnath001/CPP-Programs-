//Access Specifier
#include<iostream>
using namespace std;
class Book{
	private:
		int book_id;
		string book_name;
		string author_name;
		float price;
	public:
		void setData(int book_id,string name,string author,float p){
			this->book_id=book_id;
			book_name=name;
			author_name=author;
			price=p;	
		}
		void getData(){
			cout<<"Book Id:"<<book_id<<endl;
			cout<<"Book Name:"<<book_name<<endl;
			cout<<"Author Name:"<<author_name<<endl;
			cout<<"Book Price:"<<price<<endl;
		}
		
};
int main(){
	Book b1,b2;
	b1.setData(101,"C++","Jack",534.56f);
	b1.getData();
	return 0;
}
