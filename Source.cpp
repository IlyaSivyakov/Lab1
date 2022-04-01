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
		int YesOrNot = 0; //  ���������� ��� ���������� ���� ������

		do
		{
			StudentInfo = AddStruct(StudentInfo, StudentAmount);
			setData(StudentInfo, StudentAmount);

			StudentAmount++;

			cout << "���������� ���� ������ (1 - ��, 0 - ���): "<<endl;
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
			Obj = new Profile[amount + 1]; // ��������� ������ ��� ������ ���������
		}
		else
		{
			Profile* tempObj = new Profile[amount + 1];

			for (int i = 0; i < amount; i++)
			{
				tempObj[i] = Obj[i]; // �������� �� ��������� ������
			}
			delete[] Obj;

			Obj = tempObj;
		}
		return Obj;
	}

	void setData(Profile * Obj, const int amount)
	{
		cout << "Id ��������: ";
		cin >> Obj[amount].id;
		cout << Obj[amount].id;
		/*cout << "���: ";
		cin>>Obj[amount].FIO;*/
		//cout << Obj[amount].FIO;
		cout << "��� ��������: ";
		cout << Obj[amount].gender;
		cout << "����� ������: ";
		cout << Obj[amount].group;
		cout << "������ �� ������� � ���.������: ";
		for (int i = 0; i < 8; i++) {
			cin >> Obj[i].grades[i];
		}
		cout << "����� ��������: ";
		cin >> Obj[amount].depart;
		cin.get();
		cout << endl;
	}

	void showData(const Profile* Obj, const int amount)
	{
		cout << "Id " << "���\t" << "���\t" << "������\t" << "������ �� �������� � ���.������\t" << "����� ��������\t"<< endl;
		for (int i = 1; i < amount+1; i++)
		{
			cout << Obj[i].id<<'\t'<<'\t' << Obj[i].gender << '\t' << Obj[i].group<< '\t' << Obj[i].grades[i] << '\t' << Obj[i].depart << endl;
		}
		
	}
    
	void viewStgroup(const Profile* Obj, const int amount) {
		int N;
		cout << "������� ����� ������ ���������, ������� ������ ����������� " << endl;
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
		char M='�', F='�';
		cout << "����� ��� ���������, ������� �� ������ �����������? (1-�������, 0-�������) " << endl;
		cin >> k;
		for (int i = 1; i < amount + 1; i++){
			char M='�', F='�';
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
		cout << "������� id ��������, �������� ������ ����������� " << endl;
		cin >> N;
		for (int i = 1; i < amount + 1; i++)
		{
			if (Obj->id == N) {
				cout << Obj[i].id << '\t'  << '\t' << Obj[i].gender << Obj[i].group << '\t' << Obj[i].grades << Obj[i].depart << endl;
			}
			else {
				cout << "������� � id " << N << " �� ������" << endl;
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
			cout << "����� ������� ������� "<<top;
		}
	}
	void editprofile(const Profile* Obj, const int amount) {
		int N;
		cout << "������� id ��������, ������ �������� �� ������ �������� " << endl;
		cin >> N;
		for (int i = 1; i < amount + 1; i++)
		{
			if (Obj->id == N) {

			}
			else {
				cout << "������� � id " << N << " �� ������" << endl;
			}
		}
	}