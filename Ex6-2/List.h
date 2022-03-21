#pragma once
class List
{
protected:
	class Link
	{
	public:
		Link(const Link&); // constructor
		Link(int linkValue, Link* nextPtr);
		int value;  // data areas
		Link* next;
	};	 //end of class Link
public:	
	  List();  // constructors
	  List(const List&);
	  ~List();
	  int firstElement()  const;  // operations
	  void add(int value);   
	  void clear();
	  bool search(const int& value) const;
	  bool isEmpty() const; 	
	  void removeFirst();

protected: 	Link* head;  // data field	
};
