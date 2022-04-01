#include<iostream>
#include<windows.h>


using namespace std;

struct Profile
	{
		//string FIO[50];
		char gender;
		int group;
		int id;
		int grades[8];
		char depart;
		int topgrades;
	} Student;

	Profile* AddStruct(Profile * Obj, const int amount);
	void setData(Profile * Obj, const int amount);
	void showData(const Profile * Obj, const int amount);
	//void viewStgroup(Profile* Obj, const int amount);
	void viewStgender(Profile* Obj, const int amount);
	//void viewStnumber(Profile* Obj, const int amount);
	void topGrades(const Profile* Obj, const int amount);
	void editprofile(const Profile* Obj, const int amount);

	int main()
	{
		setlocale(LC_ALL, "Russian");

		Profile* StudentInfo = 0;
		int StudentAmount = 0;
		int YesOrNot = 0; //  продолжить или остановить ввод данных

		do
		{
			StudentInfo = AddStruct(StudentInfo, StudentAmount);
			setData(StudentInfo, StudentAmount);

			StudentAmount++;

			cout << "Продолжить ввод данных (1 - да, 0 - нет): "<<endl;
			cin >> YesOrNot;
			cin.get();
		} while (YesOrNot != 0);

		showData(StudentInfo, StudentAmount);
		//viewStgroup(StudentInfo, StudentAmount);
		viewStgender(StudentInfo, StudentAmount);
		//viewStnumber(StudentInfo, StudentAmount);
		delete[] StudentInfo;
		return 0;
	}

	Profile* AddStruct(Profile * Obj, const int amount)
	{
		if (amount == 0)
		{
			Obj = new Profile[amount + 1]; // выделение памяти для первой структуры
		}
		else
		{
			Profile* tempObj = new Profile[amount + 1];

			for (int i = 0; i < amount; i++)
			{
				tempObj[i] = Obj[i]; // копируем во временный объект
			}
			delete[] Obj;

			Obj = tempObj;
		}
		return Obj;
	}

	void setData(Profile * Obj, const int amount)
	{
		cout << "Id студента: ";
		cin >> Obj[amount].id;
		cout << Obj[amount].id;
		/*cout << "ФИО: ";
		cin>>Obj[amount].FIO;*/
		//cout << Obj[amount].FIO;
		cout << "Пол студента: ";
		cout << Obj[amount].gender;
		cout << "Номер группы: ";
		cout << Obj[amount].group;
		cout << "Оценки за экзамен и диф.зачеты: ";
		for (int i = 0; i < 8; i++) {
			cin >> Obj[i].grades[i];
		}
		cout << "Форма обучения: ";
		cin >> Obj[amount].depart;
		cin.get();
		cout << endl;
	}

	void showData(const Profile* Obj, const int amount)
	{
		cout << "Id " << "ФИО\t" << "Пол\t" << "Группа\t" << "Оценки за экзамены и диф.зачеты\t" << "Форма обучения\t"<< endl;
		for (int i = 1; i < amount+1; i++)
		{
			cout << Obj[i].id<<'\t'<<'\t' << Obj[i].gender << '\t' << Obj[i].group<< '\t' << Obj[i].grades[i] << '\t' << Obj[i].depart << endl;
		}
		
	}
    
	void viewStgroup(const Profile* Obj, const int amount) {
		int N;
		cout << "Введите номер группы студентов, которых хотите просмотреть " << endl;
		cin >> N;
		for (int i = 1; i < amount + 1; i++)
		{
			if (Obj->group == N) {
				cout << Obj[i].id << '\t'  << '\t' << Obj[i].gender << Obj[i].group << '\t' << Obj[i].grades << Obj[i].depart << endl;
			}
		}
	}
	void viewStgender(Profile* Obj, const int amount) {
		int k, c1 = 0, c2 = 0;;
		char M='м', F='ж';
		cout << "Какой пол студентов, которых вы хотите просмотреть? (1-мужской, 0-женский) " << endl;
		cin >> k;
		for (int i = 1; i < amount + 1; i++){
			char M='м', F='ж';
			if (Obj[i].gender = F) {
				c1 += 1;
			}
			else{
				c2 += 2;
			}
		}
		if (k == 0) {
			cout << c1;
		}
		else {
			cout << c2;
		}
	}
	
	void viewStnumber(const Profile* Obj, const int amount) {
		int N;
		cout << "Введите id студента, которого хотите просмотреть " << endl;
		cin >> N;
		for (int i = 1; i < amount + 1; i++)
		{
			if (Obj->id == N) {
				cout << Obj[i].id << '\t'  << '\t' << Obj[i].gender << Obj[i].group << '\t' << Obj[i].grades << Obj[i].depart << endl;
			}
			else {
				cout << "Студент с id " << N << " не найден" << endl;
			}
		}
	}
	void topGrades(const Profile* Obj, const int amount) {
		int k = 0, sum;
		for (int j = 1; j < amount + 1; j++) {
			for (int i = 1; i < amount + 1; i++) {
				k = k + Obj[i].grades[i];
			}
			sum = k / 8;
			Obj[j].topgrades == sum;
		}
		for (int f = 1; f < amount + 1; f++) {
			int top=0;
			if (Obj[f].topgrades < Obj[f + 1].topgrades) {
				top = Obj[f + 1].topgrades;
			}
			else {
				top = Obj[f].topgrades;
			}
			cout << "Самый высокий рейтинг "<<top;
		}
	}
	void editprofile(const Profile* Obj, const int amount) {
		int N;
		cout << "Введите id студента, запись которого вы хотите изменить " << endl;
		cin >> N;
		for (int i = 1; i < amount + 1; i++)
		{
			if (Obj->id == N) {

			}
			else {
				cout << "Студент с id " << N << " не найден" << endl;
			}
		}
	}