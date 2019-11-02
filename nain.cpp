#include "input.h"

#define B "\e[34m"
#define V "\e[35m"
#define BB "\e[36m"
#define R "\e[31m"
#define N "\e[0m"

void to_bit(int a);
void to_bit(short int a);
void to_bit(long int a);
void to_bit(double a);
void to_bit(long double a);
void to_bit(float a);
void easter();

union Double 
{
	double num;
	long inum;
};

union Float 
{
	float num;
	int inum;
};

union LDouble 
{
	long double num;
	unsigned char inum[sizeof(num)];
};

int main()
{
	setlocale(0, "");
	short typevar;
	
	/*
	cout << B << "COLOR" << endl;
	cout << V << "COLOR" << endl;
	cout << BB << "COLOR" << endl;
	cout << R << "COLOR" << endl;
	cout << N << "COLOR" << endl;
	*/
	cout << sizeof(long double) << endl;
	while(true)
	{
		cout << BB;
		cout << "+====Выберите тип данных====+" << endl;
		cout << "|1    Integer (32 bits)    1|" << endl;
		cout << "|2 Short integer (16 bits) 2|" << endl;
		cout << "|3 Long  integer (64 bits) 3|" << endl;
		cout << "|4     Double (64 bits)    4|" << endl;
		cout << "|5     Float  (32 bits)    5|" << endl;
		//cout << "|6 Long double  (128 bits) 6|" << endl;
		cout << R;
		cout << "|0         Выход           0|" << endl;
		cout << BB;
		cout << "+===========================+" << endl;
		cout << N;
		
		input(&typevar, "Ввод");
		
		switch(typevar)
		{
			case 1: //int
			int ai;
			input(&ai, "Введите число");
			cout << "Число " << ai << " в двоичном представлении: " << endl;
			cout << V;
			to_bit(ai);
			cout << N << endl;
			break;
			
			case 2: //short
			short int as;
			input(&as, "Введите число");
			cout << "Число " << as << " в двоичном представлении: " << endl;
			cout << V;
			to_bit(as);
			cout << N << endl;
			break;
			
			case 3: //long
			long int al;
			input(&al, "Введите число");
			cout << "Число " << al << " в двоичном представлении: " << endl;
			cout << V;
			to_bit(al);
			cout << N << endl;
			break;
			
			case 4: //double
			double ad;
			input(&ad, "Введите число");
			cout << "Число " << ad << " в двоичном представлении: " << endl;
			cout << V;
			to_bit(ad);
			cout << N << endl;
			break;
			
			case 5: //float
			float af;
			input(&af, "Введите число");
			cout << "Число " << af << " в двоичном представлении: " << endl;
			cout << V;
			to_bit(af);
			cout << N << endl;
			break;
			
			case 12: //long double
			cout << R << "LONG DOUBLE" << endl <<
			"ВНИМАНИЕ! РАБОТАЕТ В ТЕСТОВОМ РЕЖИМЕ!" << N << endl;
			long double ald;
			input(&ald, "Введите число");
			cout << "Число " << ald << " в двоичном представлении: " << endl;
			cout << V;
			to_bit(ald);
			cout << N << endl;
			break;
			
			case 1302:
			easter();
			break;
			
			case 0:
			cout << "Завершение программы..." << endl;
			return 0;
			break;
			
			default:
			cout << R << "Неверный ввод. Попробуйте еще раз." << N << endl << endl;
			break;
		}
	}
}

void to_bit(int a)
{
	unsigned int mask = 1 << 31;
	
		for(int i = 1; i <= 32;i++)
		{
			char g = mask & a ? '1':'0';
			cout << g;
			mask >>= 1;
			if(i%8 == 0)
			cout << ' ';
		}
		
	cout << endl;
	
	int move;
	cout << BB;
	input(&move, "Введите смещение вправо");
	cout << "Число " << a << " со смещением " << move << " вправо: " << endl;
	
	cout << V;
	mask = 1 << 31;
		for(int i = 1; i <= 32;i++)
		{
			char g = mask & a>>move ? '1':'0';
			cout << g;
			mask >>= 1;
			if(i%8 == 0)
			cout << ' ';
		}
	cout << " = " << (a>>move);
	cout << N;
	cout << endl;
}

void to_bit(short int a)
{
	unsigned short int mask = 1 << 15;
	
		for(int i = 1; i <= 16;i++)
		{
			char g = mask & a ? '1':'0';
			cout << g;
			mask >>= 1;
			if(i%8 == 0)
			cout << ' ';
		}
		
	cout << endl;
	
	int move;
	cout << BB;
	input(&move, "Введите смещение вправо");
	cout << "Число " << a << " со смещением " << move << " вправо: " << endl;
	
	mask = 1 << 15;
	cout << V;
		for(int i = 1; i <= 16;i++)
		{
			char g = mask & a>>move ? '1':'0';
			cout << g;
			mask >>= 1;
			if(i%8 == 0)
			cout << ' ';
		}
	cout << " = " << (a>>move);
	cout << N;	
	cout << endl;
}

void to_bit(long int a)
{
	unsigned long int mask = 1UL << 63;
	
		for(int i = 1; i <= 64;i++)
		{
			char g = mask & a ? '1':'0';
			cout << g;
			mask >>= 1;
			if(i%8 == 0)
			cout << ' ';
		}
		
	cout << endl;
	
	int move;
	cout << BB;
	input(&move, "Введите смещение вправо");
	cout << "Число " << a << " со смещением " << move << " вправо: " << endl;
	
	mask = 1UL << 63;
	cout << V;
		for(int i = 1; i <= 64;i++)
		{
			char g = mask & a>>move ? '1':'0';
			cout << g;
			mask >>= 1;
			if(i%8 == 0)
			cout << ' ';
		}
	cout << " = " << (a>>move);
	cout << N;
	cout << endl;
}

void to_bit(double a)
{
	unsigned long int mask = 1UL << 63;
	
	Double d;
	d.num = a;
	
	short j = 0;
	for(mask; mask > 0; mask >>= 1)
	{
		cout << (mask & d.inum ? '1' : '0');
		++j;
		if(j%8 == 0)
		cout << ' ';
	}	
	cout << endl;
	
	int move;
	cout << BB;
	input(&move, "Введите смещение вправо");
	cout << "Число " << a << " со смещением " << move << " вправо: " << endl;
	
	mask = 1UL << 63;
	j = 0;
	cout << V;
	for(mask; mask > 0; mask >>= 1)
	{
		cout << (mask & d.inum>>move ? '1' : '0');
		++j;
		if(j%8 == 0)
		cout << ' ';
	}
	cout << " = " << (d.inum>>move);
	cout << N;	
	cout << endl;
}

void to_bit(float a)
{
	unsigned int mask = 1U << 31;
	
	Float f;
	f.num = a;
	
	short j = 0;
	for(mask; mask > 0; mask >>= 1)
	{
		cout << (mask & f.inum ? '1' : '0');
		++j;
		if(j%8 == 0)
		cout << ' ';
	}	
	cout << endl;
	
	int move;
	cout << BB;
	input(&move, "Введите смещение вправо");
	cout << "Число " << a << " со смещением " << move << " вправо: " << endl;
	
	mask = 1U << 31;
	j = 0;
	cout << V;
	for(mask; mask > 0; mask >>= 1)
	{
		cout << (mask & f.inum>>move ? '1' : '0');
		++j;
		if(j%8 == 0)
		cout << ' ';
	}
	cout << " = " << (f.inum>>move);
	cout << N;
	cout << endl;
}

void to_bit(long double a)
{
	unsigned long mask;
	LDouble ald;
	ald.num = a;
	unsigned char gum;
	short j = 0;

		for(int i = 15; i >= 0; i--)
        {
			gum = ald.inum[i];
            for(mask = 1UL << 7; mask > 0; mask >>= 1)
            {
                cout << (mask & gum ? '1' : '0');
                ++j;
                if(j%8 == 0)
                cout << ' ';
            }
        } 			

		cout << endl;
		
}
//-1
//00000000 00000000 00000000 00000000 00000000 00000000 00000000 10000000 11111111 10111111 01000000 00000000 00000000 00000000 00000000 00000000
//00000000 00000000 00000000 00000000 00000000 00000000 00000000 10000000 11111111 10111111 01000000 00000000 00000000 00000000 00000000 00000000


void easter()
{
cout << R;
cout << "NNNNNNNNNNNNNNNN               WOW!!! YOU HAVE FOUND AN EWASTER EGG!!!            NNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXNNK0kxxxdxkO0KXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNX0xlc::ccclllodk0XNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNX0o:;;;;::::ccclllox0XNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXkc;,;;;::::ccllllolldOXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXKd,',,,;,;::::clllolllllxKNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXKo,'',,';:;;:lollldollocclxXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXKd,';,,;;;::cloooddddddollllkXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXk;.'''',,,,;cclllodoooolccc:lONXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXKl'',,;;,;:::cloodoodxdooolcccxXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXk;',;;,;:;;:clllloddddddolclc:o0NXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXKd'.''',,,,,;:cclolloooollc:::;:kXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXKo',,,;;;;;:::clooooodddolllc:ccxXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXX0l'',;,,::;,;clccllodoloolc:cc::xXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXKo..'',,,,,,,,;:ccccllcc::;;;;,;dXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXKx,',,;;;,;:;;;:cccccccc:;:;;;;:kNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXKOc'',,,;;;,,;;;,,;:::;;:;,,;,,oKNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXKKk;.''',,',,'',;;,'',,'',,''':ONXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXKKkl,'',,,,,,,,,,,,,,,,',,',l0NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXKK0d:,..'''''''''''''''.,:xKNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXK0koc:,,'''...''',;cdOXNXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXXKK0OkxddddddxkOKXXNXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXXXXXXXXXXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << endl;
cout << N;
}