#ifndef HUMAN_H
#define HUMAN_H

class Human
{
private:
	string name;
	int age;

public:
	Human(string, int);
	~Human(void);
	string& GetName(void);
	int& GetAge(void);
	void Display(void);
};

#endif // !HUMAN_H