//����� 6  ����� 1
//����� ������ 
//������ ����, ��� ������ ����� �����

class Line
{
	int color;
	class Point//����� ������ ������ ����� - ��� ����� �� �� ������ �������?
	{
		int x;
		int y;
	public:
		Point(int myX = 0, int myY = 0) {};
		int getX() { return x; };
		void setX(int myX) { x = myX; }
		int getY();

	};
	Point rightEdge;//���� ���� ������ �������
	Point leftEdge;
public:
	Line()//����
	{
		color = 0;
		leftEdge.x = 0; //error
		leftEdge.setX(0);
	}
	Line(int myColor, int myX1, int myY1, int myX2, int myY2)
		:color(myColor), rightEdge(myX1, myY1), leftEdge(myX2, myY2)
	{  }
};

Line::Point::Point(int myX, int myY)//�� ���� �� �� �����?
{
	x = myX; y = myY;
}

int Point::getY() {} //error

int Line::Point::getY() //ok
{
	return y;
};


int main()
{
	Point p1;//error
	Line::Point p1;//error
}
