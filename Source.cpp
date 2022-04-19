#include<iostream>
#include<windows.h>
#include <string>


using namespace std;

struct Profile
	{
		int number;
		char FIO[100];
		char gender[2];
		int group;
		int id;
		int exam1;
		int exam2;
		int exam3;
		int test1;
		int test2;
		int test3;
		int test4;
		int test5;
		char depart[20];
	} Student;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Profile* StudentInfo = 0;
	int StudentAmount;
	cout << "Введите кол-во студентов ";
	cin >> StudentAmount;
	cout << std::endl;
	int s;
	s = sizeof(Profile);
	cout << s;
	Profile* arr = new Profile[StudentAmount];
	for (int i = 0; i < StudentAmount; i++) {
		cout << "Id студента: ";
		cin >> arr[i].id;
		cout << "ФИО: ";
		cin.getline(arr[i].FIO, 100, '\n');
		cin.getline(arr[i].FIO, 100, '\n');
		cout << "Пол студента: ";
		cin.getline(arr[i].gender, 2, '\n');
		cout << "Номер группы: ";
		cin >> arr[i].group;
		cout << "Оценки за экзамен и диф.зачеты: ";
		cin >> arr[i].exam1;
		cin >> arr[i].exam2;
		cin >> arr[i].exam3;
		cin >> arr[i].test1;
		cin >> arr[i].test2;
		cin >> arr[i].test3;
		cin >> arr[i].test4;
		cin >> arr[i].test5;
		cout << "Форма обучения: ";
		cin.getline(arr[i].depart, 20, '\n');
		cin.getline(arr[i].depart, 20, '\n');
		cout << endl;
	}
	cout << "Вывод данных обо всех студентах " << endl;
	cout << "№\t " << "Id\t " << "ФИО\t " << "Пол\t" << "Группа\t" << "Оценки за экзамены и диф.зачеты\t" << "Форма обучения\t" << endl;
	for (int i = 0; i < StudentAmount; ++i)
	{
		cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
	}
	cout << "Просмотреть данные по номеру группы студента? (1-да, 0-нет) ";
	int yon;
	cin >> yon;
	if (yon == 1) {
		int N;
		cout << "Введите номер группы студентов, которых хотите просмотреть " << endl;
		cin >> N;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].group == N) {
				cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
	}
	else
	{
	}
	cout << "Просмотреть количество студентов мужского или женского пола? (1-да, 0-нет) ";
	cin >> yon;
	if (yon == 1) {
		int c1 = 0, c2 = 0;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (int(arr[i].gender[0]) == -52 || arr[i].gender == "М")
			{
				c1++;
			}
			if (int(arr[i].gender[0]) == -58 || arr[i].gender == "Ж")
			{
				c2++;
			}
		}
		cout << "Студентов мужского пола: " << c1 << "\tСтудентов женского пола: " << c2 << endl;
	}
	else {
	}
	cout << "Просмотреть данные по id студента? (1-да, 0-нет) ";
	cin >> yon;
	if (yon == 1) {
		int N;
		cout << "Введите id студента, которого хотите просмотреть " << endl;
		cin >> N;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].id == N) {
				cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
			else {
			}
		}
	}
	else {
	}
	cout << "Изменить данные студента? (1-да, 0-нет) ";
	cin >> yon;
	if (yon == 1) {
		int k;
		cout << "Введите id студента которого хотите изменить ";
		cin >> k;
		for (int i = 0; i < StudentAmount; i++) {
			if (arr[i].id == k) {
				cout << "Id студента: ";
				cin >> arr[i].id;
				cout << "ФИО: ";
				cin.getline(arr[i].FIO, 100, '\n');
				cin.getline(arr[i].FIO, 100, '\n');
				cout << "Пол студента: ";
				cin.getline(arr[i].gender, 2, '\n');
				cout << "Номер группы: ";
				cin >> arr[i].group;
				cout << "Оценки за экзамен и диф.зачеты: ";
				cin >> arr[i].exam1;
				cin >> arr[i].exam2;
				cin >> arr[i].exam3;
				cin >> arr[i].test1;
				cin >> arr[i].test2;
				cin >> arr[i].test3;
				cin >> arr[i].test4;
				cin >> arr[i].test5;
				cout << "Форма обучения: ";
				cin.getline(arr[i].depart, 20, '\n');
				cin.getline(arr[i].depart, 20, '\n');
				cout << endl;
			}
		}
	}
	cout << "Вывести данные о студентах, которые не получают стипендию, учатся только на «хорошо» и «отлично», учатся только на «отлично»? (1-да, 0-нет) ";	
	cin >> yon;
	if (yon == 1) {
		cout << "Не получают стипендию" << endl << endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].exam1 < 4 || arr[i].exam2 < 4 || arr[i].exam3 < 4 || arr[i].test1 < 4 || arr[i].test2 < 4 || arr[i].test3 < 4 || arr[i].test4 < 4 || arr[i].test5 < 4)
			{
				{
					cout << i + 1 << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
				}
			}
		}
		cout << "Учатся на хорошо и отлично" << endl << endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].exam1 > 3 && arr[i].exam2 > 3 && arr[i].exam3 > 3 && arr[i].test1 > 3 && arr[i].test2 > 3 && arr[i].test3 > 3 && arr[i].test4 > 3 && arr[i].test5 > 3)
			{
				cout << i + 1 << '\t' << arr[i].FIO << '\t'  << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2  << arr[i].exam3  << arr[i].test1 << arr[i].test2 << arr[i].test3  << arr[i].test4  << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
		cout << "Получают стипендию" << endl<<endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].exam1 == 5 && arr[i].exam2 == 5 && arr[i].exam3 == 5 && arr[i].test1 == 5 && arr[i].test2 == 5 && arr[i].test3 == 5 && arr[i].test4 == 5 && arr[i].test5 == 5)
			{
				cout << i + 1 << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
	}
		cout << "Вывести топ студентов? (1-да, 0-нет) ";
		cin >> yon;
		if (yon == 1) {
			for (int i = 0; i < StudentAmount; i++)
			{
				for (int j = 1; j < (StudentAmount - i); j++)
				{
					if ((arr[j - 1].exam1 + arr[j - 1].exam2 + arr[j - 1].exam3 + arr[j - 1].test1 + arr[j - 1].test2 + arr[j - 1].test3 + arr[j - 1].test4 + arr[j - 1].test5) / double(8) < (arr[j].exam1 + arr[j].exam2 + arr[j].exam3 + arr[j].test1 + arr[j].test2 + arr[j].test3 + arr[j].test4 + arr[j].test5) / double(8))
					{
						swap(arr[j - 1], arr[j]);
					}
				}
			}
			cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
			for (int i = 0; i < StudentAmount; i++)
			{
				cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
		delete[] arr;
		return 0;
	}
