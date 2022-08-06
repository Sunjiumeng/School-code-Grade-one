#include <iostream>
using namespace std;
class Student
{
	public:
		Student(){};
		Student(float s)
			{score = s;}
		void stc(float s);
		static float sum();
		static void avg();
	private:
		float score;
		static float total;
		static int count;
};
float Student::total = 0;
int Student::count = 0;
void Student::stc(float s)
{
	score = s;
	total = total + s;
	count++;
}
float Student::sum()
{
	return total;
}
void Student::avg()
{
	cout << "学生平均分是：" << total / count << endl;
}
int main()
{
	Student sc[10];
	int i = 0;
	int num_stu;
	cout << "请输入学生人数(1-10)：";
	cin >> num_stu;
	float r[num_stu];
	for (i = 0; i < num_stu; i++)
	{
		cout << "请输入第" << i + 1 << "号学生成绩：";
		cin >> r[i];
		sc[i] = Student(r[i]);
		sc[i].stc(r[i]);
	}
	cout << "学生总分是：" << sc[num_stu].sum() << endl;
	sc[num_stu].avg(); //也可以用sc->sum()或 sc->sum();
	return 0;
}
