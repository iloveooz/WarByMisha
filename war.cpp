#include <ctime>
#include <windows.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <conio.h>

// TODO rename all variables
// TODO rename all matrixes
// TODO rename all functions
// TODO create std::map with typeForce and std::string name force\

// TODO replace SRAND by c++11 random generator

// TODO logic understanding

// TODO add OOP and patterns

enum ConsoleColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

// functions
void keyInput(); // input value by key push
void clearScreenArea(long x1, long y1, long x2, long y2); // clear screen area
void ds(long m1, long n1);
void div();
void step();
void chk();
void gfr(long qr, long qt);
void qsd(long r, long y);
void sec();
void bat(long o, long k1, long k2);
void kik(long o, long k1, long k2);
void sqd(long w, long s, long z, long x);
void stt();
void stt0();
void mine();
void fds();
void bld();
void cst(long ac1, long ac2, long ac3);
void div1();
void pro(); // mining of resources
void pro1(); // army prodaction
void pls(int a1, int a2, int a3, int a4);
void fas(int r1, int y1);
void bat0(int r2, int y2);
void kik0(int r2, int y2, int rvg);

void gotoxy(int xpos, int ypos);
void delay(int duration);
void textbackground(int background);
void textcolor(int text);

// variables
char d;

long i, j, k;

long g, ab;

long ii1, jj1, ii3, jj3;

long m = 30, n = 20;

long t, u, qsa = 0, qs, qd, dw, j5, t5, g3, fl, q4, q5, lk;

long as, sce, sl, ce, p, au, sxz, f2, f3, f4, a4, a5, rv, i7, i8, j8, o, k1, k2, fa0, fa1, k4, i9;

long sce1, i10, fr0, fr1, fg1, fg0, asc, j13, sdh, aw0, aw1, aw2, aw3, i14, j14, c5, c6, c7, c8, i2;

long sd1, sd2, sd3, scx, wq, wq1, dwq, sf1, sf2, sf3, sh1, sh2, sh3, qw, qa, fnb;

int afg1, afg2, afg3, sms;

float ss, ha0, ha1, h2, h3, ha00, ha01;

int sw, sv, qs0, qs1, i15;

// arrays
int a[2][200][20];

int dg[8][16];

int b[8][4] = {
	{ 1, 40,  40,  20  },
	{ 2, 60,  20,  120 },
	{ 3, 120, 20,  200 },
	{ 4, 160, 60,  220 },
	{ 5, 130, 60,  170 },
	{ 6, 30,  50,  80  },
	{ 7, 150, 150, 200 },
	{ 8, 30,  20,  40  }
};

int c[10][2] = {
	{ 3, 5 },
	{ 0, 1 },
	{ 4, 7 },
	{ 3, 6 },
	{ 1, 3 },
	{ 0, 1 },
	{ 0, 1 },
	{ 5, 8 },
	{ 0, 2 },
	{ 0, 2 }
};

int d2[6][3] = {
	{ 80,   200, 50   },
	{ 200,  100, 400  },
	{ 200,  100, 300  },
	{ 1400, 400, 1000 },
	{ 400,  600, 100  },
	{ 1000, 600, 800  }
};

int d1[3][3] = {
	{ 1,  2, 4 },
	{ 10, 1, 7 },
	{ 4,  3, 1 }
};

int a0[2][50][7];

int ll[6] = { 10, 4, 7, 30, 20, 25 };

float c1[10][4] = {
	{ 1.5, 1,   0.8, 0.4 },
	{ 3,   4,   1.2, 1.5 },
	{ 4,   2,   2,   1   },
	{ 7,   4,   2,   2   },
	{ 5,   6,   3,   3   },
	{ 3.5, 5,   2.5, 3   },
	{ 4,   8,   2.5, 3.5 },
	{ 0,   1,   0,   1   },
	{ 2,   1.5, 0.5, 0.9 },
	{ 3.5, 3.5, 1.8, 2.5 }
};

long force[2][8] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 }
};

long resource[2][3] = {
	{ 0, 0, 0 },
	{ 0, 0, 0 }
};

long dm1[2][3];

int l[81][41];

int mn[8] = { 5, 4, 5, 5, 4, 5, 6, 5 };

int fn[2][8][200];

int fn0[2][6][20];

int lf[8] = { 4, 5, 6, 9, 10, 7, 9, 3 };

int l1[2][80][40];

int l8[2][16][8];

int e8[2][8];

int f8[2][8];

char typeForce[9] = "CATZD45L";

char e1[7] = "ЭЛРТКО";

int mi[2][16][8];

// main
int main() {
	srand(time(nullptr));
	setlocale(LC_ALL, "Russian");

	system("cls");

	for (i = 0; i <= 1; i++) {
		while (d != 'q') {
			gotoxy(15, 1);
			std::cout << "Игрок " << (i + 1) << ", наберите количество дивизий, имеющихся изначально...";

			gotoxy(15, 3);
			std::cout << "1 - С(" << force[i][0] << ")";

			gotoxy(30, 3);
			std::cout << "2 - A(" << force[i][1] << ")";

			gotoxy(45, 3);
			std::cout << "3 - T(" << force[i][3] << ")";

			gotoxy(60, 3);
			std::cout << "4 - Z(" << force[i][3] << ")";

			gotoxy(15, 5);
			std::cout << "5 - D(" << force[i][4] << ")";

			gotoxy(30, 5);
			std::cout << "6 - 4(" << force[i][5] << ")";

			gotoxy(45, 5);
			std::cout << "7 - 5(" << force[i][6] << ")";

			gotoxy(60, 5);
			std::cout << "8 - L(" << force[i][7] << ")";

			gotoxy(35, 7);
			std::cout << "q - конец";
		zb:
			gotoxy(27, 9);
			std::cout << "Ваш выбор (1 - 8 или q): ";

			keyInput();

			if (d == 'q')
				goto za;

			ab = atoi(&d) - 1;

			if (ab < 0 || ab > 7) {
				clearScreenArea(0, 9, 70, 5);
				goto zb;
			}

			gotoxy(27, 10);
			std::cout << "Введите количество дивизий типа " << typeForce[ab] << ": ";
			std::cin >> g;

			force[i][ab] = g;

			clearScreenArea(0, 9, 70, 5);
		}
	za:
		d = ' ';
		gotoxy(15, 13);
		std::cout << "Введите количество начальных единиц энергии: ";
		std::cin >> resource[i][0];

		clearScreenArea(1, 13, 70, 1);

		gotoxy(15, 13);
		std::cout << "Введите количество начальных единиц дерева: ";
		std::cin >> resource[i][1];

		clearScreenArea(1, 13, 70, 1);

		gotoxy(15, 13);
		std::cout << "Введите количество начальных единиц руды: ";
		std::cin >> resource[i][2];

		clearScreenArea(1, 13, 70, 1);

		gotoxy(18, 11);
		std::cout << "Энергия(" << resource[i][0] << ")";

		gotoxy(38, 11);
		std::cout << "Дерево(" << resource[i][1] << ")";

		gotoxy(58, 11);
		std::cout << "Руда(" << resource[i][2] << ")";

		dm1[i][0] = 0.1 * resource[i][0];
		dm1[i][1] = 0.1 * resource[i][1];
		dm1[i][2] = 0.1 * resource[i][2];

		delay(300);
		d = _getch();
		system("cls");;
	}

	/*
	dm1[0][0] = 10000;
	dm1[0][1] = 20000;
	dm1[0][2] = 30000;

	dm1[1][0] = 10000;
	dm1[1][1] = 20000;
	dm1[1][2] = 30000;

	dm[0][0] = 100000;
	dm[0][1] = 450;
	dm[0][2] = 700;

	dm[1][0] = 10000;
	dm[1][1] = 20000;
	dm[1][2] = 3000;
	*/

	mine();
	/*
	force[0][0] = 0;
	force[0][1] = 1;
	force[0][2] = 0;
	force[0][3] = 0;
	force[0][4] = 0;
	force[0][5] = 0;
	force[0][6] = 0;
	force[0][7] = 4;

	force[1][0] = 0;
	force[1][1] = 0;
	force[1][2] = 0;
	force[1][3] = 1;
	force[1][4] = 0;
	force[1][5] = 0;
	force[1][6] = 0;
	force[1][7] = 0;
	*/

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 8; j++) {
			for (t = 0; t < force[i][j]; t++) {
				gotoxy(66, 13);
				std::cout << "Игрок " << (i + 1) << "задай-";

				gotoxy(66, 14);
				std::cout << "те место диви-";

				gotoxy(66, 15);
				std::cout << "зии " << typeForce[j] << (t + 1);
			zc:
				ds(m, n);
			ze:
				keyInput();

				if (d == 'a' && n > 1) {
					n++;
					d = ' ';
					goto zc;
				}

				if (d == 'q' && n < 40) {
					n--;
					d = ' ';
					goto zc;
				}

				if (d == 'o' && m > 1) {
					m--;
					d = ' ';
					goto zc;
				}

				if (d == 'p' && m < 80) {
					m++;
					d = ' ';
					goto zc;
				}

				if (d == 'c')
					goto zc;

				if (d == 's') {
					if (l[m][n] != 0) {
						gotoxy(66, 17);
						std::cout << "место занято";
						delay(500);
						clearScreenArea(66, 17, 12, 1);
						goto zc;
					}

					d = ' ';
					l[m][n] = 10 * i + j + 1;
					div();
					ds(m, n);
					goto zf;
				}

				if (d == 'e')
					goto zd;
				goto ze;
			zf:
				delay(500);
			}
		}
	}
vf:
	clearScreenArea(66, 13, 15, 11);

	for (i = 0; i < 2; i++) {
		j5 = 0;
		t5 = 0;
		j = 7;

		for (t = 0; t < 200; t++) {
			if (a[i][t][0] == 1 && a[i][t][1] == j) {
				gotoxy(65, 12);
				std::cout << "Игрок " << (i + 1);

				gotoxy(66, 13);
				std::cout << "ходит ди-";

				gotoxy(66, 14);
				std::cout << "визия " << typeForce[j] << a[i][t][4];

				step();

				keyInput();

				if (d == 'e')
					goto zd;
			}
		}

		for (j = 0; j < 7; j++) {
			for (t = 0; t < 200; t++) {
				if (a[i][t][0] == 1 && a[i][t][1] == j) {
					gotoxy(65, 12);
					std::cout << "Игрок " << (i + 1);

					gotoxy(66, 13);
					std::cout << "ходит ди-";

					gotoxy(66, 14);
					std::cout << "визия " << typeForce[j] << a[i][t][4];

					step();

					keyInput();

					if (d == 'e')
						goto zd;
				}
			}
		}

		gotoxy(65, 15);
		std::cout << "добыча";

		gotoxy(65, 16);
		std::cout << "ресурсов";

		pro();

		gotoxy(65, 15);
		std::cout << "ставьте здания";

		bld();

		gotoxy(65, 15);
		std::cout << "производите";

		gotoxy(65, 16);
		std::cout << "войска";

		pro1();

		for (j = 0; j < 7; j++) {
			for (t = 0; t < 200; t++) {
				if (a[i][t][0] == 1 && a[i][t][1] == j) {
					qsd(i, t);
					bat(i, t, p);
					ce = 0;
					sec();
				}
				// if (a[!i][t][0] == 1 && a[!i][t][1] == j) { qsd(!i); }
			}
		}
	zu:
		if (j5 < 7 && j >= 7) {
			sec();
		}

		if (j5 >= 7) {
			goto zv;
		}
		goto zu;
	zv:
		for (i9 = 0; i9 < 200; i9++) {
			if (a[!i][i9][0] == 1 &&
				a[!i][i9][5] <= 0 &&
				a[!i][i9][6] <= 0 &&
				a[!i][i9][7] <= 0 &&
				a[!i][i9][8] <= 0 &&
				a[!i][i9][9] <= 0 &&
				a[!i][i9][10] <= 0)
			{
				l[a[!i][i9][2]][a[!i][i9][3]] = 0;
				force[!i][i9]--;
				fn[!i][i9][a[!i][i9][4]] = 0;

				for (i15 = 0; i15 < 15; i15++)
					a[!i][i9][i15] = 0;
			}
		}

		ds(m, n);

		for (i15 = 0; i15 < 8; i15++) {
			f8[0][i15] = f8[0][i15] + e8[0][i15];
			f8[1][i15] = f8[1][i15] + e8[1][i15];
		}

	vg:
		gotoxy(66, 11);
		std::cout << "ход окончен";

		gotoxy(66, 13);
		std::cout << "потери за ход - х";

		gotoxy(66, 14);
		std::cout << "общие потери - y";

		d = _getch();

		if (d == 'x') {
			d = ' ';
			stt();
			goto vg;
		}

		if (d == 'y') {
			d = ' ';
			stt0();
			goto vg;
		}

		for (i15 = 0; i15 < 8; i15++) {
			e8[0][i15] = 0;
			e8[1][i15] = 0;
		}

		clearScreenArea(65, 10, 16, 5);
	}
	goto vf;
zd:
	delay(300);
}


void keyInput() {
	d = _getch();
}

void clearScreenArea(long x1, long y1, long x2, long y2) {
	for (ii3 = x1; ii3 <= x1 + x2 - 1; ii3++) {
		for (jj3 = y1; jj3 <= y1 + y2 - 1; jj3++) {
			gotoxy(ii3, jj3);
			std::cout << ' ';
		}
	}
}

void ds(long m1, long n1) {
	long re, rw, rr, rt, tt, de, df, gt, gy;

	for (i14 = 0; i14 < 16; i14++) {
		for (j14 = 0; j14 < 8; j14++) {
			l8[0][i14][j14] = 0;
			l8[1][i14][j14] = 0;
		}
	}

	re = m1 - 30;
	rw = n1 - 10;

	if (m1 < 30)
		re = 0;

	if (m1 > 50)
		re = 20;

	if (n1 < 10)
		rw = 0;

	if (n1 > 30)
		rw = 20;

	rr = m1 % 5;
	rt = n1 % 5;

	clearScreenArea(1, 1, 64, 1);

	for (ii1 = 1; ii1 <= 60; ii1++) {
		gotoxy(3 + ii1, 2);
		tt = (ii1 + re) % 5;

		if (tt == 0)
			tt = 5;

		std::cout << tt;

		gotoxy(3 + ii1, 1);

		if (tt == 3) {
			textcolor(2);
			std::cout << ((ii1 + re - 3) / 5 + 1);
			textcolor(7);
		}
	}

	clearScreenArea(1, 1, 1, 25);

	for (ii1 = 1; ii1 <= 20; ii1++)
	{
		gotoxy(2, 3 + ii1);
		tt = (ii1 + rw) % 5;
		if (tt == 0)
			tt = 5;
		std::cout << tt;

		gotoxy(1, 3 + ii1);
		if (tt == 3) {
			textcolor(3);
			std::cout << ((ii1 + rw - 3) / 5 + 1);
			textcolor(7);
		}
	}

	gotoxy(68, 2);
	std::cout << "текущие";

	gotoxy(67, 3);
	std::cout << "координаты";

	gt = m / 5 + 1;
	gy = n / 5 + 1;

	if (m % 5 == 0) {
		de = 5;
		gt--;
	}
	else
		de = m % 5;

	if (n % 5 == 0) {
		df = 5;
		gy--;
	}
	else
		df = n % 5;

	gotoxy(69, 4);
	std::cout << m << "   " << n;

	gotoxy(67, 5);
	std::cout << "Х: s " << gt << ", c " << de << ' ';

	gotoxy(67, 6);
	std::cout << "Y: s " << gy << ", c " << df << ' ';

	for (ii1 = 4; ii1 <= 63; ii1++) {
		for (jj1 = 4; jj1 <= 23; jj1++) {
			if (re + ii1 - 3 == m) {
				clearScreenArea(3, jj1 - 1, 1, 1);
				gotoxy(ii1 - 1, 3);
				std::cout << " | ";
			}

			if (rw + jj1 - 3 == n) {
				clearScreenArea(3, jj1 + 1, 1, 1);
				gotoxy(3, jj1);
				std::cout << '-';
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] == 0) {
				if (rw + jj1 - 3 > 20) {
					if (((re + ii1 - 4) % 10 >= 5 && (rw + jj1 - 4) % 10 >= 5) ||
						((re + ii1 - 4) % 10 < 5 && (rw + jj1 - 4) % 10 < 5)) {
						textbackground(7);
						gotoxy(ii1, jj1);
						std::cout << ' ';
						textbackground(0);
					}
					else {
						textbackground(0);
						gotoxy(ii1, jj1);
						std::cout << ' ';
						textbackground(0);
					}
				}

				if (rw + jj1 - 3 <= 20) {
					if (((re + ii1 - 4) % 10 >= 5 && (rw + jj1 - 4) % 10 >= 5) ||
						((re + ii1 - 4) % 10 < 5 && (rw + jj1 - 4) % 10 < 5)) {
						textbackground(6);
						gotoxy(ii1, jj1);
						std::cout << ' ';
						textbackground(0);
					}
					else {
						textbackground(0);
						gotoxy(ii1, jj1);
						std::cout << ' ';
						textbackground(0);
					}
				}
			}

			if (re + ii1 - 3 == m && rw + jj1 - 3 == n) {
				textbackground(4);
				gotoxy(ii1, jj1);
				std::cout << ' ';
				textbackground(0);
				gotoxy(80, 25);
				delay(300);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 0 && l[re + ii1 - 3][rw + jj1 - 3] < 10) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3];
				textcolor(0);
				textbackground(1);
				std::cout << typeForce[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 10 && l[re + ii1 - 3][rw + jj1 - 3] < 20) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 10;
				textcolor(0);
				textbackground(2);
				std::cout << typeForce[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 60 && l[re + ii1 - 3][rw + jj1 - 3] < 70) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 60;
				textcolor(0);
				textbackground(4);
				std::cout << typeForce[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 70 && l[re + ii1 - 3][rw + jj1 - 3] < 80) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 70;
				textcolor(0);
				textbackground(5 + f3 / 2);
				std::cout << typeForce[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 80 && l[re + ii1 - 3][rw + jj1 - 3] < 90) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 80;
				textcolor(0);
				textbackground(7 - f4 / 2);
				std::cout << typeForce[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 20 && l[re + ii1 - 3][rw + jj1 - 3] < 30) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 20;
				textcolor(0);
				textbackground(3);
				std::cout << e1[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 30 && l[re + ii1 - 3][rw + jj1 - 3] < 40) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 30;
				textcolor(0);
				textbackground(4);
				std::cout << e1[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 100 && l[re + ii1 - 3][rw + jj1 - 3] < 110) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 100;
				textcolor(0);
				textbackground(5);
				std::cout << e1[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			if (l[re + ii1 - 3][rw + jj1 - 3] > 110 && l[re + ii1 - 3][rw + jj1 - 3] < 120) {
				gotoxy(ii1, jj1);
				rr = l[re + ii1 - 3][rw + jj1 - 3] - 110;
				textcolor(0);
				textbackground(6);
				std::cout << e1[rr - 1];
				textcolor(7);
				textbackground(0);
			}

			aw0 = re + ii1 - 3;
			aw1 = rw + jj1 - 3;

			aw2 = aw0 / 5;

			if (aw0 % 5 == 0)
				aw2--;

			aw3 = aw1 / 5;

			if (aw1 % 5 == 0)
				aw3--;

			if (l[aw0][aw1] % 10 == 8 && l[aw0][aw1] / 10 == 0) {
				l8[0][aw2][aw3] = 1;
			}

			if (l[aw0][aw1] % 10 == 8 && l[aw0][aw1] / 10 == 1) {
				l8[1][aw2][aw3] = 1;
			}
		}
	}

	delay(50);
}

void div() {
	for (k = 0; k <= 300; k++) {
		if (a[i][k][0] == 0) {
			a[i][k][0] = 1;
			a[i][k][1] = b[j][0] - 1;
			a[i][k][2] = m;
			a[i][k][3] = n;

			for (u = 0; u <= 200; u++) {
				if (fn[i][j][u] == 0) {
					fn[i][j][u] = 1;
					a[i][k][4] = u + 1;
					goto zl;
				}
			}
		zl:
			for (u = 5; u <= 10; u++) {
				if (mn[j] + 4 >= u)
					a[i][k][u] = lf[j];
				else
					a[i][k][u] = -9;
			}

			a[i][k][11] = mn[j];
			a[i][k][14] = 0;

			if (b[j][0] == 4) {
				a[i][k][12] = 1;
				break;
			}

			if (b[j][0] == 2 || b[j][0] >= 5) {
				a[i][k][12] = 0;
				break;
			}

			if (b[j][0] == 1 || b[j][0] == 3) {
				gotoxy(66, 18);
				std::cout << "Задайте";

				gotoxy(66, 19);
				std::cout << "нападение (0 / 1)";

				delay(300);
			zn:
				d = _getch();
				if (d == '0' || d == '1') {
					a[i][k][12] = atoi(&d);
					d = ' ';
					clearScreenArea(66, 18, 14, 2);
					break;
				}
				else
					goto zn;
			}
		}
	}
}

void step() {
	m = a[i][t][2];
	n = a[i][t][3];

	l[m][n] = 60 + j + 1;

	clearScreenArea(1, 3, 65, 1);
	clearScreenArea(3, 1, 1, 25);

	ds(m, n);

	l[m][n] = 10 * i + j + 1;

	aw0 = a[i][t][2] / 5;

	if (a[i][t][2] % 5 == 0)
		aw0--;

	aw1 = a[i][t][3] / 5;

	if (a[i][t][3] % 5 == 0)
		aw1--;

	qsa = static_cast<long>(c[j][1] - c[j][0]);
	qs = static_cast<long>(c[j][0]);

	if (l8[i][aw0][aw1] == 1 && a[i][t][12] == 0) {
		qsa = 3;
		qs = 5;
	}

	if ((a[i][t][1] == 0 || a[i][t][1] == 2) && a[i][t][12] == 0) {
		qsa = 2;
		qs = 0;
	}

	qd = rand() % (qsa + 1) + qs;

	if (qd == 0) {
		gotoxy(66, 16);
		std::cout << qs << " ходов";
		d = _getch();
	}

	for (u = 5; u <= 10; u++) {
		gotoxy(66 + 2 * (u - 5), 18);
		textcolor(u - 4);

		if (u - 4 <= mn[j] && a[i][t][u] > 0)
			std::cout << a[i][t][u];
		else
			std::cout << "  ";
		textcolor(7);
	}

	for (dw = qd; dw > 0; dw--) {
		gotoxy(66, 16);
		std::cout << dw << " ходов";

		d = _getch();

		if (d == '8' && a[i][t][3] > 1) {
			if (l[a[i][t][2]][a[i][t][3] - 1] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2]][a[i][t][3] - 1] = 10 * i + j + 1;
			a[i][t][3]--;
			ds(m, n);
			chk();
		}

		if (d == '2' && a[i][t][3] < 40) {
			if (l[a[i][t][2]][a[i][t][3] + 1] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2]][a[i][t][3] + 1] = 10 * i + j + 1;
			a[i][t][3]++;
			ds(m, n);
			chk();
		}

		if (d == '4' && a[i][t][2] > 1) {
			if (l[a[i][t][2] - 1][a[i][t][3]] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2] - 1][a[i][t][3]] = 10 * i + j + 1;
			a[i][t][2]--;
			ds(m, n);
			chk();
		}

		if (d == '6' && a[i][t][2] < 80) {
			if (l[a[i][t][2] + 1][a[i][t][3]] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2] + 1][a[i][t][3]] = 10 * i + j + 1;
			a[i][t][2]++;
			ds(m, n);
			chk();
		}

		if (d == '7' && a[i][t][2] > 0 && a[i][t][3] > 1) {
			if (l[a[i][t][2] - 1][a[i][t][3] - 1] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2] - 1][a[i][t][3] - 1] = 10 * i + j + 1;
			a[i][t][2]--;
			a[i][t][3]--;
			ds(m, n);
			chk();
		}

		if (d == '9' && a[i][t][2] < 80 && a[i][t][3]>1) {
			if (l[a[i][t][2] + 1][a[i][t][3] - 1] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2] + 1][a[i][t][3] - 1] = 10 * i + j + 1;
			a[i][t][2]++;
			a[i][t][3]--;
			ds(m, n);
			chk();
		}

		if (d == '1' && a[i][t][2] > 0 && a[i][t][3] < 40) {
			if (l[a[i][t][2] - 1][a[i][t][3] + 1] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2] - 1][a[i][t][3] + 1] = 10 * i + j + 1;
			a[i][t][2]--;
			a[i][t][3]++;
			ds(m, n);
			chk();
		}

		if (d == '3' && a[i][t][2] < 80 && a[i][t][3] < 40) {
			if (l[a[i][t][2] + 1][a[i][t][3] + 1] > 0) {
				dw++;
				goto zp;
			}
			l[a[i][t][2]][a[i][t][3]] = 0;
			l[a[i][t][2] + 1][a[i][t][3] + 1] = 10 * i + j + 1;
			a[i][t][2]++;
			a[i][t][3]++;
			ds(m, n);
			chk();
		}

		aw0 = a[i][t][2] / 5;

		if (a[i][t][2] % 5 == 0)
			aw0--;

		aw1 = a[i][t][3] / 5;

		if (a[i][t][3] % 5 == 0)
			aw1--;

		if (l8[i][aw0][aw1] == 0 && a[i][t][12] == 0) {
			d = ' ';
			break;
		}

		if (d == 's') {
			d = ' ';
			break;
		}

		if (d == 'e') {
			break;
		}

		if (d != '1' &&
			d != '2' &&
			d != '3' &&
			d != '4' &&
			d != '9' &&
			d != '6' &&
			d != '7' &&
			d != '8' &&
			d != 's')
			dw++;
	zp:
		gotoxy(66, 16);
		std::cout << (dw - 1) << " ходов";
	}
}

void chk() {
	gfr(1, 0);
	gfr(0, 1);
	gfr(-1, 0);
	gfr(0, -1);
	gfr(1, 1);
	gfr(1, -1);
	gfr(-1, 1);
	gfr(-1, -1);
}

void gfr(long qr, long qt) {
	if (l[a[i][t][2]][a[i][t][3]] < 10 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] > 10 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] < 20) {
		d = 's';
	}

	if (l[a[i][t][2]][a[i][t][3]] < 10 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] > 30 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] < 40) {
		d = 's';
	}

	if (l[a[i][t][2]][a[i][t][3]] > 10 &&
		l[a[i][t][2]][a[i][t][3]] < 20 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] < 10 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] > 0) {
		d = 's';
	}

	if (l[a[i][t][2]][a[i][t][3]] > 10 &&
		l[a[i][t][2]][a[i][t][3]] < 20 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] < 30 &&
		l[a[i][t][2] + qr][a[i][t][3] + qt] > 20) {
		d = 's';
	}
}

void qsd(long r, long y) {
	for (au = 0; au < 200; au++) {
		if (a[!r][au][0] == 1 && a[!r][au][14] == 0) {
			if (a[r][y][2] - a[!r][au][2] <= 1 &&
				a[r][y][2] - a[!r][au][2] >= -1 &&
				a[r][y][3] - a[!r][au][3] <= 1 &&
				a[r][y][3] - a[!r][au][3] >= -1) {
				sce++;
				if (a[!r][au][1] == 7)
					sce1++;
			}
		}
	}

	if (sce == 0) {
		fl = 0;
		fas(i, t);
	}

	if (sms == 0)
		goto zs;

	if (sce1 != 0 && sce1 != sce) {
		goto zsx;
	}

	if (sce1 != 0 && sce1 == sce)
		fas(i, t);

	sl = rand() % (sce + sms) + 1;
	sce = 0;
	fl = 1;
	ce = 0;

	if (sms == 1 && sl == sce + sms) {
		bat0(i, t);
		sms = 0;
		fl = 0;
		goto zs;
	}

	for (au = 0; au < 200; au++) {
		if (a[!r][au][0] == 1 && a[!r][au][14] == 0) {
			if (a[r][y][2] - a[!r][au][2] <= 1 &&
				a[r][y][2] - a[!r][au][2] >= -1 &&
				a[r][y][3] - a[!r][au][3] <= 1 &&
				a[r][y][3] - a[!r][au][3] >= -1) {
				ce++;
			}
		}
		if (ce >= sl) {
			p = au;
			ce = 0;
			goto zs;
		}
	}

	goto zs;
zsx:
	sl = rand() % (sce - sce1) + 1;
	sce = 0;
	fl = 1;
	sce1 = 0;
	ce = 0;

	for (au = 0; au < 200; au++) {
		if (a[!r][au][0] == 1 &&
			a[!r][au][14] == 0 &&
			a[!r][au][1] != 7) {
			if (a[r][y][2] - a[!r][au][2] <= 1 &&
				a[r][y][2] - a[!r][au][2] >= -1 &&
				a[r][y][3] - a[!r][au][3] <= 1 &&
				a[r][y][3] - a[!r][au][3] >= -1) {
				ce++;
			}
		}

		if (ce >= sl) {
			p = au;
			ce = 0;
			goto zs;
		}
	}
zs:
	ce = 0;
	sl = 0;
}

void sec() {
	while (j5 < 7) {
		while (t5 < 200) {
			if (a[!i][t5][0] == 1 && a[!i][t5][1] == j5) {
				qsd(!i, t5);
				bat(!i, t5, p);
				t5++;
				fl = 0;
				g3 = 1;
				break;
			}
			t5++;
		}

		if (g3 == 1) {
			g3 = 0;
			break;
		}

		if (t5 >= 200) {
			t5 = 0;
			j5++;
		}
	}
}

void bat(long o, long k1, long k2) {
	if (fl == 0)
		goto zz;

	for (i8 = 0; i8 < 80; i8++) {
		for (j8 = 0; j8 < 40; j8++) {
			if (l[i8][j8] > 0 && l[i8][j8] < 10) {
				l1[0][i8][j8] = 1;

				l1[0][i8 + 1][j8] = 1;
				l1[0][i8 - 1][j8] = 1;

				l1[0][i8][j8 - 1] = 1;
				l1[0][i8][j8 + 1] = 1;

				l1[0][i8 - 1][j8 - 1] = 1;
				l1[0][i8 - 1][j8 + 1] = 1;

				l1[0][i8 + 1][j8 - 1] = 1;
				l1[0][i8 + 1][j8 + 1] = 1;
			}

			if (l[i8][j8] > 10 && l[i8][j8] < 20) {
				l1[1][i8][j8] = 1;

				l1[1][i8 + 1][j8] = 1;
				l1[1][i8 - 1][j8] = 1;

				l1[1][i8][j8 - 1] = 1;
				l1[1][i8][j8 + 1] = 1;

				l1[1][i8 - 1][j8 - 1] = 1;
				l1[1][i8 - 1][j8 + 1] = 1;

				l1[1][i8 + 1][j8 - 1] = 1;
				l1[1][i8 + 1][j8 + 1] = 1;
			}
		}
	}

	a4 = a[o][k1][2];
	a5 = a[o][k1][3];

	sqd(a4, a5, !o, a[o][k1][12]);
	f3 = f2;
	f2 = 0;

	a4 = a[!o][k2][2];
	a5 = a[!o][k2][3];

	sqd(a4, a5, o, a[!o][k2][12]);
	f4 = f2;
	f2 = 0;

	clearScreenArea(65, 12, 14, 8);

	m = a[o][k1][2];
	n = a[o][k1][3];
	l[m][n] = 70 + a[o][k1][1] + 1;

	m = a[!o][k2][2];
	n = a[!o][k2][3];
	l[m][n] = 80 + a[!o][k2][1] + 1;

	clearScreenArea(1, 3, 65, 1);
	clearScreenArea(3, 1, 1, 25);

	ds(m, n);

	k4 = 5;

	gotoxy(65, 12);

	std::cout << "Удар " << typeForce[a[o][k1][1]] << a[o][k1][4] << " по " << typeForce[a[!o][k2][1]] << a[!o][k2][4];

	clearScreenArea(66, 14, 14, 2);

	fr0 = 0;
	fr1 = 0;
	fg0 = 0;
	fg1 = 0;

	for (i10 = 5; i10 <= 10; i10++) {
		if (a[o][k1][i10] > 0) {
			fr0 = fr0 + a[o][k1][i10];
		}

		if (a[!o][k2][i10] > 0) {
			fr1 = fr1 + a[!o][k2][i10];
		}
	}

	for (u = 5; u <= 10; u++) {
		gotoxy(66 + 2 * (u - 5), 14);
		textcolor(u - 4);

		if (u - 4 <= mn[a[o][k1][1]] && a[o][k1][u] > 0)
			std::cout << a[o][k1][u];
		else
			std::cout << ' ';

		gotoxy(66 + 2 * (u - 5), 15);

		if (u - 4 <= mn[a[!o][k2][1]] && a[!o][k2][u] > 0)
			std::cout << a[!o][k2][u];
		else
			std::cout << ' ';
		textcolor(7);
	}

	for (i7 = 5; i7 <= mn[a[o][k1][1]] + 4; i7++) {
		if (o == !i && a[o][k1][i7] <= 0 && a[o][k1][i7] != -9) {
			kik(o, k1, k2);
			a[o][k1][i7] = -9;
		}

		if (a[o][k1][i7] > 0) {
			kik(o, k1, k2);
		}

		if (a[o][k1][i7] <= 0)
			a[o][k1][i7] = -9;
	}

	for (i10 = 5; i10 <= 10; i10++) {
		if (a[o][k1][i10] > 0) {
			fg0 = fg0 + a[o][k1][i10];
		}
		if (a[!o][k2][i10] > 0) {
			fg1 = fg1 + a[!o][k2][i10];
		}
	}

	gotoxy(66, 20);
	std::cout << "До: " << fr0 << '-' << fr1;

	gotoxy(66, 21);
	std::cout << "Потери: " << (fr0 - fg0) << '-' << (fr1 - fg1);
	
	gotoxy(66, 22);
	std::cout << "После: " << fg0 << '-' << fg1;
	
	gotoxy(66, 23);
	std::cout << "статистика - x";

	qs0 = a[o][k1][1];
	qs1 = a[!o][k2][1];

	e8[o][qs0] = e8[o][qs0] + fr0 - fg0;
	e8[!o][qs1] = e8[!o][qs1] + fr1 - fg1;

	delay(1300);

	keyInput();

	if (d == 'x') {
		d = ' ';
		stt();
	}

	if (o == i &&
		a[o][k1][5] <= 0 &&
		a[o][k1][6] <= 0 &&
		a[o][k1][7] <= 0 &&
		a[o][k1][8] <= 0 &&
		a[o][k1][9] <= 0 &&
		a[o][k1][10] <= 0) {

		force[o][k1]--;
		fn[o][k1][a[o][k1][4]] = 0;
		l[a[o][k1][2]][a[o][k1][3]] = 0;
		for (i15 = 0; i < 15; i15++)
			a[o][k1][i15] = 0;
	}
	else {
		l[a[o][k1][2]][a[o][k1][3]] = 10 * o + a[o][k1][1] + 1;

		if (o == !i &&
			a[o][k1][5] <= 0 &&
			a[o][k1][6] <= 0 &&
			a[o][k1][7] <= 0 &&
			a[o][k1][8] <= 0 &&
			a[o][k1][9] <= 0 &&
			a[o][k1][10] <= 0) {

			a[o][k1][14] = 1;
		}
	}

	if (o == !i &&
		a[!o][k2][5] <= 0 &&
		a[!o][k2][6] <= 0 &&
		a[!o][k2][7] <= 0 &&
		a[!o][k2][8] <= 0 &&
		a[!o][k2][9] <= 0 &&
		a[!o][k2][10] <= 0) {

		force[!o][k2]--;
		fn[!o][k2][a[!o][k2][4]] = 0;
		l[a[!o][k2][2]][a[!o][k2][3]] = 0;

		for (i15 = 0; i < 15; i15++)
			a[!o][k2][i15] = 0;
	}
	else {
		l[m][n] = 10 * (!o) + a[!o][k2][1] + 1;
		if (o == i &&
			a[!o][k2][5] <= 0 &&
			a[!o][k2][6] <= 0 &&
			a[!o][k2][7] <= 0 &&
			a[!o][k2][8] <= 0 &&
			a[!o][k2][9] <= 0 &&
			a[!o][k2][10] <= 0) {

			a[!o][k2][14] = 1;
		}
	}

	ds(m, n);

	for (i8 = 0; i8 < 80; i8++) {
		for (j8 = 0; j8 < 80; j8++) {
			l1[0][i8][j8] = 0;
			l1[1][i8][j8] = 0;
		}
	}
zz:
	clearScreenArea(65, 12, 16, 13);
}

void kik(long o, long k1, long k2) {
	if (a[!o][k2][5] <= 0 &&
		a[!o][k2][6] <= 0 &&
		a[!o][k2][7] <= 0 &&
		a[!o][k2][8] <= 0 &&
		a[!o][k2][9] <= 0 &&
		a[!o][k2][10] <= 0) {

		goto vb;
	}

	rv = rand() % 6 + 1;
	sw = a[o][k1][1];

	if (sw == 0 && a[o][k1][12] == 0)
		sw = 8;

	if (sw == 2 && a[o][k1][12] == 0)
		sw = 9;

	sv = a[!o][k2][1];

	if (sv == 0 && a[!o][k2][12] == 0)
		sv = 8;

	if (sv == 2 && a[!o][k2][12] == 0)
		sv = 9;

	ss = c1[sw][0 + f3] / c1[sv][1 + f4];

	gotoxy(66, 19);
	std::cout << ss;

	while (a[!o][k2][k4] <= 0) {
		if (k4 >= 10) {
			k4 = 5;
			goto vc;
		}
		k4++;
	vc:
		;
	}

	if (k4 >= 10)
		k4 = 5;

	switch (rv) {
	case 1: {
		ha0 = ss;
		break;
	}

	case 2: {
		ha0 = static_cast<float>(2.0)* ss;
		break;
	}

	case 3: {
		ha0 = static_cast<float>(3.0)* ss;
		break;
	}

	case 4: {
		ha0 = 0;
		break;
	}

	case 5: {
		h2 = static_cast<float>(a[o][k1][i7])* ss;
		h3 = static_cast<float>(a[!o][k2][k4]);

		if (h2 > h3) {
			ha0 = a[!o][k2][k4];
			ha1 = a[!o][k2][k4] / ss;
		}
		else {
			ha1 = a[o][k1][i7];
			ha0 = a[o][k1][i7] * ss;
		}

		if (h2 == h3) {
			ha0 = a[!o][k2][k4];
			ha1 = a[o][k1][i7];
		}
		break;
	}

	case 6: {
		ha0 = 8.0 * ss;
		break;
	}

	default:
		break;
	}

	ha00 = ha0 - static_cast<long>(ha0);
	fa0 = static_cast<long>(ha0);
	if (ha00 >= 0.5)
		fa0++;

	ha01 = ha1 - static_cast<long>(ha1);
	fa1 = static_cast<long>(ha1);
	if (ha01 >= 0.5)
		fa1++;

	a[!o][k2][k4] = a[!o][k2][k4] - fa0;

	if (a[!o][k2][k4] < 0)
		a[!o][k2][k4] = 0;

	a[o][k1][i7] = a[o][k1][i7] - fa1;

	if (a[o][k1][i7] < 0)
		a[o][k1][i7] = 0;

	gotoxy(66, 20);
	std::cout << rv << ' ' << k4;

	gotoxy(66, 21);
	std::cout << ha0 << ' ' << ha1;
	
	gotoxy(66, 22);
	std::cout << fa0 << ' ' << fa1;

	gotoxy(66 + (i7 - 5) * 2, 16);
	std::cout << a[o][k1][i7];

	gotoxy(66 + (k4 - 5) * 2, 17);
	std::cout << a[!o][k2][k4];
	
	delay(700);
	clearScreenArea(66, 20, 15, 3);

	ha0 = 0;
	ha1 = 0;
	fa0 = 0;
	fa1 = 0;
	ha00 = 0;
	ha01 = 0;
	ss = 0;
	sw = 0;
	sv = 0;
	h2 = 0;
	h3 = 0;

vb:
	if (a[!o][k2][k4] <= 0 && o == !i)
		a[!o][k2][k4] = -9;

	if (a[!o][k2][k4] <= 0 && rv == 5)
		a[!o][k2][k4] = -9;

	if (a[o][k1][i7] <= 0 && rv == 5)
		a[o][k1][i7] = -9;

	k4++;
}

void sqd(long w, long s, long z, long x) {
	sxz =
		l1[z][w - 1][s] +
		l1[z][w + 1][s] +

		l1[z][w][s - 1] +
		l1[z][w][s + 1] +

		l1[z][w - 1][s - 1] +
		l1[z][w - 1][s + 1] +

		l1[z][w + 1][s - 1] +
		l1[z][w + 1][s + 1];

	if ((l[w - 1][s - 1 + 2 * z] - z * 10 > 0 && l[w - 1][s - 1 + 2 * z] - z * 10 < 10) ||
		(l[w][s - 1 + 2 * z] - z * 10 > 0 && l[w][s - 1 + 2 * z] - z * 10 < 10) ||
		(l[w + 1][s - 1 + 2 * z] - z * 10 > 0 && l[w + 1][s - 1 + 2 * z] - z * 10 < 10) ||
		(l[w][s - 2 + 4 * z] - z * 10 > 0 && l[w][s - 2 + 4 * z] - z * 10 < 10))
		sdh = 1;

	if (l[w - 1][s - 1 + 2 * z] - z * 10 > 0 &&
		l[w - 1][s - 1 + 2 * z] - z * 10 < 10 &&
		l[w + 1][s - 1 + 2 * z] - z * 10 > 0 &&
		l[w + 1][s - 1 + 2 * z] - z * 10 < 10)
		sdh = 1;

	if (z == 1 && s > 25 && x == 1) {
		sxz = 8;
		sdh = 1;
	}

	if (z == 1 && s < 21 && x == 0) {
		sxz = 8;
		sdh = 1;
	}

	if (z == 0 && s < 16 && x == 1) {
		sxz = 8;
		sdh = 1;
	}

	if (z == 0 && s > 20 && x == 0) {
		sxz = 8;
		sdh = 1;
	}

	if (sxz > 7 && sdh == 1) {
		sxz = 0;
		sdh = 0;
		f2 = 2;
	}
}

void stt() {
	clearScreenArea(65, 12, 16, 13);

	gotoxy(66, 12);
	std::cout << "  немцы русские";

	for (long i = 0; i < 8; i++) {
		gotoxy(66, 14 + i);
		std::cout << typeForce[i] << "   " << e8[0][i];

		gotoxy(76, 14 + i);
		std::cout << e8[1][i] << "  ";	
	}

	delay(100);
	d = _getch();

	clearScreenArea(65, 8, 16, 17);
}

void stt0() {
	clearScreenArea(65, 12, 16, 13);

	gotoxy(66, 12);
	std::cout << "  немцы русские";

	for (long i = 0; i < 8; i++) {
		gotoxy(66, 14 + i);
		std::cout << typeForce[i] << "   " << f8[0][i];

		gotoxy(76, 14 + i);
		std::cout << f8[1][i] << "  ";
	}

	delay(100);
	d = _getch();

	clearScreenArea(65, 8, 16, 17);
}

void mine() {
	long qc[3];

	for (i = 0; i < 1; i++) {
		qc[0] = resource[i][0];
		qc[1] = resource[i][1];
		qc[2] = resource[i][2];

	xa:
		gotoxy(2, 18);
		std::cout << "Игрок " << (i + 1) << ", введите месторождение, его координаты и код (1 - дерево, 2 - руда)";

		gotoxy(2, 19);
		std::cout << "У вас всего " << resource[i][1] << " ед. дерева и " << resource[i][2] << " ед. руды\n";

		std::cin >> c5;
		std::cin >> c6;
		std::cin >> c7;
		std::cin >> c8;

		if (resource[i][c8] >= c5) {
			mi[c8 - 1][c6 - 1][c7 + !i * 4 - 1] = c5;

			fds();

			resource[i][c8] = resource[i][c8] - c5;
		}
		else {
			gotoxy(2, 20);
			std::cout << "У вас нет столько ресурсов";
		}

		gotoxy(2, 21);
		std::cout << "Будете ставить месторождения еще (1 - да, 2 - нет)";

		d = _getch();
		clearScreenArea(1, 19, 80, 5);

		if (d == '1') {
			goto xa;
		}

		if (d == '2') {
			resource[i][0] = qc[0];
			resource[i][1] = qc[1];
			resource[i][2] = qc[2];
			goto xas;
		}
	}

xas:
	system("cls");;
}

void fds() {
	for (i2 = 0; i2 < 2; i2++) {
		for (ii1 = 0; ii1 < 16; ii1++) {
			for (jj1 = 0; jj1 < 8; jj1++)
				if (mi[i2][ii1][jj1] != 0) {
					gotoxy(ii1 * 5 + 1, jj1 * 2 + 1);
					std::cout << mi[i2][ii1][jj1];

					gotoxy(ii1 * 5 + 2, jj1 * 2);
					std::cout << (i2 + 1);
				}
		}
	}
	clearScreenArea(1, 19, 80, 5);
}

void bld() {
xc:
	delay(500);
	clearScreenArea(65, 9, 15, 13);

	gotoxy(65, 10);
	std::cout << "Эн." << dm1[i][0] / 10 << dm1[i][0] % 10 << ' ';

	gotoxy(65, 11);
	std::cout << "Дер." << dm1[i][1] / 10 << dm1[i][1] % 10 << ' ';

	gotoxy(65, 12);
	std::cout << "Руда." << dm1[i][2] / 10 << dm1[i][2] % 10 << ' ';
	
	gotoxy(65, 13);
	std::cout << "строительство?";
	delay(300);

	d = _getch();

	if (d == '2')
		goto xb;

	gotoxy(65, 13);
	std::cout << "координаты?   ";
	std::cin >> q4;

	gotoxy(65, 14);
	std::cin >> q5;

	q5 = !i * 4 + q5 - 1;
	q4--;

	if (l8[q4][q5] == 0) {
		gotoxy(63, 14);
		std::cout << "нет электрификации";
		goto xc;
	}

	if (
		(l[q4 * 5 + 2][q5 * 5 + 1 + i] == 10 * i + 8 &&
			l[q4 * 5 + 5][q5 * 5 + 1 + i] == 10 * i + 8 &&
			l[q4 * 5 + 2][q5 * 5 + 4 + i] == 10 * i + 8 &&
			l[q4 * 5 + 5][q5 * 5 + 4 + i] == 10 * i + 8 &&
			l[q4 * 5 + 2][q5 * 5 + 2 + i] == 10 * i + 8 &&
			l[q4 * 5 + 4][q5 * 5 + 1 + i] == 10 * i + 8 &&
			l[q4 * 5 + 5][q5 * 5 + 3 + i] == 10 * i + 8 &&
			l[q4 * 5 + 3][q5 * 5 + 4 + i] == 10 * i + 8 &&
			l[q4 * 5 + 3][q5 * 5 + 2 + i] == 0 &&
			l[q4 * 5 + 3][q5 * 5 + 3 + i] == 0 &&
			l[q4 * 5 + 4][q5 * 5 + 2 + i] == 0 &&
			l[q4 * 5 + 4][q5 * 5 + 3 + i + i] == 0 &&
			i == 0) ||

			(l[q4 * 5 + 2][q5 * 5 + 1 + i] == 10 * i + 8 &&
				l[q4 * 5 + 5][q5 * 5 + 1 + i] == 10 * i + 8 &&
				l[q4 * 5 + 2][q5 * 5 + 4 + i] == 10 * i + 8 &&
				l[q4 * 5 + 5][q5 * 5 + 4 + i] == 10 * i + 8 &&
				l[q4 * 5 + 2][q5 * 5 + 2 + i] == 10 * i + 8 &&
				l[q4 * 5 + 3][q5 * 5 + 1 + i] == 10 * i + 8 &&
				l[q4 * 5 + 5][q5 * 5 + 3 + i] == 10 * i + 8 &&
				l[q4 * 5 + 4][q5 * 5 + 4 + i] == 10 * i + 8 &&
				l[q4 * 5 + 3][q5 * 5 + 2 + i] == 0 &&
				l[q4 * 5 + 3][q5 * 5 + 3 + i] == 0 &&
				l[q4 * 5 + 4][q5 * 5 + 2 + i] == 0 &&
				l[q4 * 5 + 4][q5 * 5 + 3 + i] == 0 &&
				i == 1)) {
		gotoxy(65, 15);
		std::cout << "4-танковый";

		gotoxy(65, 16);
		std::cout << "5-казарма";

		gotoxy(65, 17);
		std::cout << "6-оборонный";

		d = _getch();

		if (d == '4') {
			sd1 = dm1[i][0] - d2[3][0];
			sd2 = dm1[i][1] - d2[3][1];
			sd3 = dm1[i][2] - d2[3][2];
			lk = 3;

			if (dm1[i][0] - d2[3][0] < 0 || dm1[i][1] - d2[3][1] < 0 || dm1[i][2] - d2[3][2] < 0) {
				gotoxy(65, 18);
				std::cout << "нет ресурсов";
				cst(sd1, sd2, sd3);

				if (scx == 1)
					goto xc;
			}

			if ((i == 0 && q5 <= 4) || (i == 1 && q5 >= 3)) {
				gotoxy(65, 18);
				std::cout << "нельзя строить";
				goto xc;
			}

			{
				l[q4 * 5 + 3][q5 * 5 + 2 + i] = i * 10 + 20 + 4;
				l[q4 * 5 + 4][q5 * 5 + 2 + i] = i * 10 + 20 + 4;
				l[q4 * 5 + 4][q5 * 5 + 3 + i] = i * 10 + 20 + 4;
				l[q4 * 5 + 3][q5 * 5 + 3 + i] = i * 10 + 20 + 4;

				ds(m, n);

				if (sce == 2) {
					sce = 0;
					goto xfq;
				}

				dm1[i][0] = sd1;
				dm1[i][1] = sd2;
				dm1[i][2] = sd3;
			xfq:
				div1();
			}
		}

		if (d == '5') {
			sd1 = dm1[i][0] - d2[4][0];
			sd2 = dm1[i][1] - d2[4][1];
			sd3 = dm1[i][2] - d2[4][2];
			lk = 4;

			if (dm1[i][0] - d2[4][0] < 0 || dm1[i][1] - d2[4][1] < 0 || dm1[i][2] - d2[4][2] < 0) {
				gotoxy(65, 18);
				std::cout << "нет ресурсов";
				cst(sd1, sd2, sd3);

				if (scx == 1)
					goto xc;
			}

			if ((i == 0 && q5 <= 4) || (i == 1 && q5 >= 3)) {
				gotoxy(65, 18);
				std::cout << "нельзя строить";
				goto xc;
			}

			{
				l[q4 * 5 + 3][q5 * 5 + 2 + i] = i * 10 + 20 + 5;
				l[q4 * 5 + 4][q5 * 5 + 2 + i] = i * 10 + 20 + 5;
				l[q4 * 5 + 4][q5 * 5 + 3 + i] = i * 10 + 20 + 5;
				l[q4 * 5 + 3][q5 * 5 + 3 + i] = i * 10 + 20 + 5;

				ds(m, n);

				if (sce == 2) {
					sce = 0;
					goto xfw;
				}

				dm1[i][0] = sd1;
				dm1[i][1] = sd2;
				dm1[i][2] = sd3;
			xfw:
				div1();
			}
		}

		if (d == '6') {
			sd1 = dm1[i][0] - d2[5][0];
			sd2 = dm1[i][1] - d2[5][1];
			sd3 = dm1[i][2] - d2[5][2];
			lk = 5;

			if (dm1[i][0] - d2[5][0] < 0 || dm1[i][1] - d2[5][1] < 0 || dm1[i][2] - d2[5][2] < 0) {
				gotoxy(65, 18);
				std::cout << "нет ресурсов";
				cst(sd1, sd2, sd3);

				if (scx == 1)
					goto xc;
			}

			if ((i == 0 && q5 <= 4) || (i == 1 && q5 >= 3)) {
				gotoxy(65, 18);
				std::cout << "нельзя строить";
				goto xc;
			}

			{
				l[q4 * 5 + 3][q5 * 5 + 2 + i] = i * 10 + 20 + 6;
				l[q4 * 5 + 4][q5 * 5 + 2 + i] = i * 10 + 20 + 6;
				l[q4 * 5 + 4][q5 * 5 + 3 + i] = i * 10 + 20 + 6;
				l[q4 * 5 + 3][q5 * 5 + 3 + i] = i * 10 + 20 + 6;

				ds(m, n);

				if (sce == 2) {
					sce = 0;
					goto xfe;
				}

				dm1[i][0] = sd1;
				dm1[i][1] = sd2;
				dm1[i][2] = sd3;
			xfe:
				div1();
			}
		}
		goto xb;
	}

	if (l[q4 * 5 + 2][q5 * 5 + 1 + i] == 10 * i + 8 &&
		l[q4 * 5 + 5][q5 * 5 + 1 + i] == 10 * i + 8 &&
		l[q4 * 5 + 2][q5 * 5 + 4 + i] == 10 * i + 8 &&
		l[q4 * 5 + 5][q5 * 5 + 4 + i] == 10 * i + 8 &&
		l[q4 * 5 + 3][q5 * 5 + 2 + i] == 0 &&
		l[q4 * 5 + 3][q5 * 5 + 3 + i] == 0 &&
		l[q4 * 5 + 4][q5 * 5 + 2 + i] == 0 &&
		l[q4 * 5 + 4][q5 * 5 + 3 + i] == 0) {

		gotoxy(65, 15);
		std::cout << "1-энергостанция";

		gotoxy(65, 16);
		std::cout << "2-лесопильня";

		gotoxy(65, 17);
		std::cout << "3-рудник";

		d = _getch();

		if (d == '1') {
			sd1 = dm1[i][0] - d2[2][0];
			sd2 = dm1[i][1] - d2[2][1];
			sd3 = dm1[i][2] - d2[2][2];
			lk = 2;

			if (dm1[i][0] - d2[2][0] < 0 || dm1[i][1] - d2[2][1] < 0 || dm1[i][2] - d2[2][2] < 0) {
				gotoxy(65, 18);
				std::cout << "нет ресурсов";
				cst(sd1, sd2, sd3);

				if (scx == 1)
					goto xc;
			}

			if ((i == 0 && q5 <= 4) || (i == 1 && q5 >= 3)) {
				gotoxy(65, 18);
				std::cout << "нельзя строить";
				goto xc;
			}

			{
				l[q4 * 5 + 3][q5 * 5 + 2 + i] = i * 10 + 20 + 1;
				l[q4 * 5 + 4][q5 * 5 + 2 + i] = i * 10 + 20 + 1;
				l[q4 * 5 + 4][q5 * 5 + 3 + i] = i * 10 + 20 + 1;
				l[q4 * 5 + 3][q5 * 5 + 3 + i] = i * 10 + 20 + 1;

				ds(m, n);

				if (sce == 2) {
					sce = 0;
					goto xfr;
				}

				dm1[i][0] = sd1;
				dm1[i][1] = sd2;
				dm1[i][2] = sd3;
			xfr:
				div1();
			}
		}

		if (d == '2') {
			sd1 = dm1[i][0] - d2[0][0];
			sd2 = dm1[i][1] - d2[0][1];
			sd3 = dm1[i][2] - d2[0][2];
			lk = 0;

			if (dm1[i][0] - d2[1][0] < 0 || dm1[i][1] - d2[1][1] < 0) {
				gotoxy(65, 18);
				std::cout << "нет ресурсов";
				cst(sd1, sd2, sd3);

				if (scx == 1)
					goto xc;
			}

			if ((i == 0 && q5 <= 4) || (i == 1 && q5 >= 3)) {
				gotoxy(65, 18);
				std::cout << "нельзя строить";
				goto xc;
			}

			if (mi[0][q4][q5] <= 0) {
				gotoxy(65, 18);
				std::cout << "нет месторождения";
				goto xc;
			}

			{
				l[q4 * 5 + 3][q5 * 5 + 2 + i] = i * 10 + 20 + 2;
				l[q4 * 5 + 4][q5 * 5 + 2 + i] = i * 10 + 20 + 2;
				l[q4 * 5 + 4][q5 * 5 + 3 + i] = i * 10 + 20 + 2;
				l[q4 * 5 + 3][q5 * 5 + 3 + i] = i * 10 + 20 + 2;
				ds(m, n);

				if (sce == 2) {
					sce = 0;
					goto xft;
				}

				dm1[i][0] = sd1;
				dm1[i][1] = sd2;
				dm1[i][2] = sd3;
			xft:
				div1();
			}
		}

		if (d == '3') {
			sd1 = dm1[i][0] - d2[1][0];
			sd2 = dm1[i][1] - d2[1][1];
			sd3 = dm1[i][2] - d2[1][2];

			lk = 1;

			if (dm1[i][0] - d2[1][0] < 0 || dm1[i][1] - d2[1][1] < 0) {
				gotoxy(65, 18);
				std::cout << "нет ресурсов";
				cst(sd1, sd2, sd3);
				if (scx == 1)
					goto xc;
			}

			if ((i == 0 && q5 <= 4) || (i == 1 && q5 >= 3)) {
				gotoxy(65, 18);
				std::cout << "нельзя строить";
				goto xc;
			}

			if (mi[1][q4][q5] <= 0) {
				gotoxy(65, 18);
				std::cout << "нет месторождения";
				goto xc;
			}

			{
				l[q4 * 5 + 3][q5 * 5 + 2 + i] = i * 10 + 20 + 3;
				l[q4 * 5 + 4][q5 * 5 + 2 + i] = i * 10 + 20 + 3;
				l[q4 * 5 + 4][q5 * 5 + 3 + i] = i * 10 + 20 + 3;
				l[q4 * 5 + 3][q5 * 5 + 3 + i] = i * 10 + 20 + 3;
				ds(m, n);

				if (sce == 2) {
					sce = 0;
					goto xfy;
				}

				dm1[i][0] = sd1;
				dm1[i][1] = sd2;
				dm1[i][2] = sd3;
			xfy:
				div1();
			}
		}
	}
	else {
		gotoxy(65, 18);
		std::cout << "нет условий";
	}
	goto xc;
xb:
	clearScreenArea(65, 9, 15, 13);
}

void cst(long ac1, long ac2, long ac3) {
	long ac[3];

	ac[0] = ac1;
	ac[1] = ac2;
	ac[2] = ac3;

xd:
	delay(500);
	clearScreenArea(65, 9, 15, 13);

	scx = 0;

	ac1 = ac[0];
	ac2 = ac[1];
	ac3 = ac[2];

	if (ac1 >= 0 && ac2 >= 0 && ac3 >= 0) {
		goto xg;
	}

	afg1 = (int)(labs(ac[0]) % 10);
	afg2 = (int)(labs(ac[1]) % 10);
	afg3 = (int)(labs(ac[2]) % 10);

	if (ac[0] > 10) {
		gotoxy(65, 10);
		std::cout << "Эн." << ac[0] / 10 << afg1 << "   ";
	}
	else {
		gotoxy(65, 10);
		std::cout << "Эн." << ac[0] << "   ";
	}

	if (ac[1] > 10) {
		gotoxy(65, 11);
		std::cout << "Дер." << ac[1] / 10 << afg2 << "   ";
	}
	else {
		gotoxy(65, 11);
		std::cout << "Эн." << ac[1] << "   ";
	}

	if (ac[2] > 10) {
		gotoxy(65, 12);
		std::cout << "Руда." << ac[2] / 10 << afg3 << "   ";
	}
	else {
		gotoxy(65, 12);
		std::cout << "Эн." << ac[2] << "   ";
	}

	gotoxy(65, 14);
	std::cout << "нехватка сырья  ";

	gotoxy(65, 15);
	std::cout << "Восполнять?     ";

	delay(300);
	d = _getch();

	if (d == '2') {
		scx = 1;
		goto xe;
	}

	if (ac1 < 0) {
		gotoxy(65, 14);
		std::cout << "нехватка энергии";

		gotoxy(65, 15);
		std::cout << "рес. и кол-во?";

		gotoxy(65, 16);
		std::cin >> wq;

		gotoxy(65, 17);
		std::cin >> wq1;

		if (wq == 0) {
			gotoxy(65, 14);
			std::cout << "нехватка энергии";
			goto xd;
		}

		dwq = wq1 / d1[wq][0];

		if (ac[wq] - wq1 < 0) {
			gotoxy(65, 14);
			std::cout << "нехватка ресурса";
			goto xd;
		}

		ac[0] = ac[0] + dwq;
		ac[wq] = ac[wq] - wq1;

		if (ac[0] > 0) {
			ac[wq] = ac[wq] + ac[0] * d1[wq][0];
			ac[0] = 0;
		}
		goto xd;
	}

	if (ac2 < 0) {
		gotoxy(65, 14);
		std::cout << "нехватка дерева ";

		gotoxy(65, 15);
		std::cout << "рес. и кол-во?";

		gotoxy(65, 16);
		std::cin >> wq;

		gotoxy(65, 17);
		std::cin >> wq1;

		if (wq == 1) {
			gotoxy(65, 14);
			std::cout << "нехватка дерева ";
			goto xd;
		}

		dwq = wq1 / d1[wq][1];

		if (ac[wq] - wq1 < 0) {
			gotoxy(65, 14);
			std::cout << "нехватка ресурса";
			goto xd;
		}

		ac[1] = ac[1] + dwq;
		ac[wq] = ac[wq] - wq1;

		if (ac[1] > 0) {
			ac[wq] = ac[wq] + ac[1] * d1[wq][1];
			ac[1] = 0;
		}
		goto xd;
	}

	if (ac3 < 0) {
		gotoxy(65, 14);
		std::cout << "нехватка руды   ";

		gotoxy(65, 15);
		std::cout << "ресурс и кол-во?";

		gotoxy(65, 16);
		std::cin >> wq;

		gotoxy(65, 17);
		std::cin >> wq1;

		if (wq == 2) {
			gotoxy(65, 14);
			std::cout << "нехватка руды   ";
			goto xd;
		}

		dwq = wq1 / d1[wq][2];

		if (ac[wq] - wq1 < 0) {
			gotoxy(65, 14);
			std::cout << "нехватка ресурса";
			goto xd;
		}

		ac[2] = ac[2] + dwq;
		ac[wq] = ac[wq] - wq1;

		if (ac[2] > 0) {
			ac[wq] = ac[wq] + ac[2] * d1[wq][2];
			ac[2] = 0;
		}
		goto xd;
	}
xg:
	if (ac[0] < 0 || ac[1] < 0 || ac[2] < 0) {
		goto xd;
	}
xe:
	if (sce == 1)
		goto xea;
	delay(500);

	dm1[i][0] = ac[0];
	dm1[i][1] = ac[1];
	dm1[i][2] = ac[2];
	sce = 2;
xea:
	clearScreenArea(65, 9, 15, 13);
}

void div1() {
	int dx;
	for (k = 0; k < 50; k++) {
		if (a0[i][k][0] == 1)
			goto xi;

		dx = atoi(&d);

		a0[i][k][0] = 1;
		a0[i][k][1] = dx;
		a0[i][k][2] = q4;
		a0[i][k][3] = q5;

		for (u = 0; u <= 20; u++) {
			if (fn0[i][dx][u] == 0) {
				fn[i][j][u] = 1;
				a0[i][k][4] = u + 1;
				goto xj;
			}
		}
	xj:
		a0[i][k][5] = ll[dx - 1];
		goto xk;

		dg[q5][q4] = dx;
	xi:
		;
	}
xk:
	;
}

// mining of resources
void pro() {
	int se[3];

	delay(500);
	clearScreenArea(65, 5, 15, 16);

	se[0] = 0;
	se[1] = 0;
	se[2] = 0;

	gotoxy(65, 5);
	std::cout << "ресурсы до";

	gotoxy(67, 6);
	std::cout << dm1[i][0] / 10 << dm1[i][0] % 10;

	gotoxy(67, 7);
	std::cout << dm1[i][1] / 10 << dm1[i][1] % 10;

	gotoxy(67, 8);
	std::cout << dm1[i][2] / 10 << dm1[i][2] % 10;

	for (int k3 = 0; k3 < 50; k3++) {
		if (a0[i][k3][0] == 1) {
			if ((a0[i][k3][1] == 2 || a0[i][k3][1] == 3) && mi[i][a0[i][k3][2]][a0[i][k3][3]] > 400) {

				resource[i][a0[i][k3][1] - 1] = resource[i][a0[i][k3][1] - 1] - 400;
				dm1[i][a0[i][k3][1] - 1] = dm1[i][a0[i][k3][1] - 1] + 400;
				se[a0[i][k3][1] - 1] = se[a0[i][k3][1] - 1] + 400;
				mi[i][a0[i][k3][2]][a0[i][k3][3]] = mi[i][a0[i][k3][2]][a0[i][k3][3]] - 400;
				goto xl;
			}

			if ((a0[i][k3][1] == 2 || a0[i][k3][1] == 3) && mi[i][a0[i][k3][2]][a0[i][k3][3]] <= 400 && mi[i][a0[i][k3][2]][a0[i][k3][3]] > 0) {
				resource[i][a0[i][k3][1] - 1] = resource[i][a0[i][k3][1] - 1] - mi[i][a0[i][k3][2]][a0[i][k3][3]];
				dm1[i][a0[i][k3][1] - 1] = dm1[i][a0[i][k3][1] - 1] + mi[i][a0[i][k3][2]][a0[i][k3][3]];
				se[a0[i][k3][1] - 1] = se[a0[i][k3][1] - 1] + mi[i][a0[i][k3][2]][a0[i][k3][3]];
				mi[i][a0[i][k3][2]][a0[i][k3][3]] = 0;

				l[a0[i][k3][2] * 5 + 3][a0[i][k3][3] * 5 + 2] = 0;
				l[a0[i][k3][2] * 5 + 4][a0[i][k3][3] * 5 + 2] = 0;
				l[a0[i][k3][2] * 5 + 4][a0[i][k3][3] * 5 + 3] = 0;
				l[a0[i][k3][2] * 5 + 3][a0[i][k3][3] * 5 + 3] = 0;

				for (k4 = 0; k4 < 10; k4++)
					a0[i][k3][k4] = 0;
			}

			if (a0[i][k3][1] == 1 && resource[i][0] > 400) {
				resource[i][0] = resource[i][0] - 400;
				dm1[i][0] = dm1[i][0] + 400;

				se[0] = se[0] + 400;
				goto xl;
			}

			if (a0[i][k3][1] == 1 && resource[i][0] > 0 && resource[i][0] <= 400) {
				dm1[i][0] = dm1[i][0] + resource[i][0];
				se[0] = se[0] + resource[i][0];
				resource[i][0] = 0;

				l[a0[i][k3][2] * 5 + 3][a0[i][k3][3] * 5 + 2] = 0;
				l[a0[i][k3][2] * 5 + 4][a0[i][k3][3] * 5 + 2] = 0;
				l[a0[i][k3][2] * 5 + 4][a0[i][k3][3] * 5 + 3] = 0;
				l[a0[i][k3][2] * 5 + 3][a0[i][k3][3] * 5 + 3] = 0;

				for (k4 = 0; k4 < 50; k4++) {
					if (a0[i][k4][1] == 3) {
						for (int k5 = 0; k5 < 10; k5++)
							a0[i][k4][k5] = 0;
					}
				}
			}
		}
	xl:
		;
	}

	gotoxy(65, 9);
	std::cout << "Добыча";

	gotoxy(67, 10);
	std::cout << se[0] / 10 << se[0] % 10;

	gotoxy(67, 11);
	std::cout << se[1] / 10 << se[1] % 10;

	gotoxy(67, 12);
	std::cout << se[2] / 10 << se[2] % 10;

	gotoxy(65, 13);
	std::cout << "Ресурсы после";

	gotoxy(67, 14);
	std::cout << dm1[i][0] / 10 << dm1[i][0] % 10;

	gotoxy(67, 15);
	std::cout << dm1[i][1] / 10 << dm1[i][1] % 10;

	gotoxy(67, 16);
	std::cout << dm1[i][2] / 10 << dm1[i][2] % 10;

	gotoxy(65, 17);
	std::cout << "Месторождения";

	gotoxy(67, 18);
	std::cout << resource[i][0] / 10 << resource[i][0] % 10;

	gotoxy(67, 19);
	std::cout << resource[i][1] / 10 << resource[i][1] % 10;

	gotoxy(67, 20);
	std::cout << resource[i][2] / 10 << resource[i][2] % 10;

	d = _getch();
	clearScreenArea(65, 5, 17, 16);

	ds(m, n);
}

// army prodaction
void pro1() {
	int wm[3] = { 0, 0, 0 };
	int bm = 0;

	gotoxy(65, 7);
	std::cout << "Эн." << dm1[i][0] / 10 << dm1[i][0] % 10 << ' ';

	gotoxy(65, 8);
	std::cout << "Дер." << dm1[i][1] / 10 << dm1[i][1] % 10 << ' ';

	gotoxy(65, 9);
	std::cout << "Руда." << dm1[i][2] / 10 << dm1[i][2] % 10 << ' ';

	gotoxy(65, 10);
	std::cout << "Ставить войска?";

	delay(500);

	d = _getch();
	if (d == '2')
		goto xn;

	for (k2 = 0; k2 < 50; k2++) {
		if (a0[i][k2][0] == 1) {
			if (a0[i][k2][1] == 4)
				wm[0]++;

			if (a0[i][k2][1] == 5)
				wm[1]++;

			if (a0[i][k2][1] == 6)
				wm[2]++;
		}

		if (7 * wm[0] < 4 * wm[1])
			bm = 7 * wm[0];
		else
			bm = 4 * wm[1];
	}

	for (k2 = 0; k2 < 50; k2++) {
		if (a0[i][k2][0] == 1) {
			if (a0[i][k2][1] == 4) {
			xpa:
				ds(a0[i][k2][2] * 5 + 1, a0[i][k2][3] * 5 + 2);
				clearScreenArea(65, 5, 17, 16);

				gotoxy(65, 10);
				std::cout << "1-A          ";

				gotoxy(65, 11);
				std::cout << "2-T";

				gotoxy(65, 12);
				std::cout << "3-Z";

				gotoxy(65, 13);
				std::cout << "4-D";

				gotoxy(65, 14);
				std::cout << "иное-отказ";

				d = _getch();

				if (d == '1' || d == '2' || d == '3' || d == '4') {
					qw = atoi(&d);

					gotoxy(65, 17);
					std::cout << typeForce[qw];
				}
				else
					goto xm;
			xoa:
				gotoxy(65, 14);
				std::cout << "сколько?   ";

				d = _getch();
				qa = atoi(&d);

				if (qa > 7) {
					gotoxy(65, 14);
					std::cout << "не больше 7";
					delay(500);
					clearScreenArea(65, 14, 16, 2);
					delay(300);
					goto xoa;
				}

				if ((qw == 3 || qw == 4) && bm < qa) {
					gotoxy(65, 14);
					std::cout << "нехватка";
					gotoxy(65, 15);
					std::cout << "комплексности";
					delay(1000);
					clearScreenArea(65, 14, 16, 3);
					delay(300);
					goto xoa;
				}

				sf1 = qa * b[qw][1];
				sf2 = qa * b[qw][2];
				sf3 = qa * b[qw][3];

				sh1 = dm1[i][0] - sf1;
				sh2 = dm1[i][1] - sf2;
				sh3 = dm1[i][2] - sf3;

				if (sh1 < 0 || sh2 < 0 || sh3 < 0) {
					gotoxy(65, 18);
					std::cout << "нет ресурсов";
					cst(sh1, sh2, sh3);

					if (scx == 1)
						goto xpa;
				}

				if (sce != 2) {
					dm1[i][0] = sh1;
					dm1[i][1] = sh2;
					dm1[i][2] = sh3;
				}

				j = qw;
				wm[0] = wm[0] - qa;

				if (qw == 3 || qw == 4)
					wm[1] = wm[1] - qa;

				pls(qa, qw, a0[i][k2][2], a0[i][k2][3]);
			}

			if (a0[i][k2][1] == 5) {
			xpb:
				ds(a0[i][k2][2] * 5 + 1, a0[i][k2][3] * 5 + 2);
				clearScreenArea(65, 5, 17, 16);

				gotoxy(65, 10);
				std::cout << "1-C ";

				gotoxy(65, 14);
				std::cout << "иное-отказ";

				d = _getch();

				if (d == '1') {
					qw = atoi(&d) - 1;
					gotoxy(65, 17);
					std::cout << typeForce[qw];
				}
				else
					goto xm;
			xob:
				gotoxy(65, 14);
				std::cout << "сколько?   ";

				d = _getch();
				qa = atoi(&d);

				if (qa > 4) {
					gotoxy(65, 14);
					std::cout << "не больше 4";
					delay(500);
					clearScreenArea(65, 14, 16, 2);
					delay(300);
					goto xob;
				}

				sf1 = qa * b[qw][1];
				sf2 = qa * b[qw][2];
				sf3 = qa * b[qw][3];

				sh1 = dm1[i][0] - sf1;
				sh2 = dm1[i][1] - sf2;
				sh3 = dm1[i][2] - sf3;

				if (sh1 < 0 || sh2 < 0 || sh3 < 0) {
					gotoxy(65, 18);
					std::cout << "нет ресурсов";
					cst(sh1, sh2, sh3);

					if (scx == 1)
						goto xpb;
				}

				if (sce != 2) {
					dm1[i][0] = sh1;
					dm1[i][1] = sh2;
					dm1[i][2] = sh3;
				}

				j = qw;

				wm[1] = wm[1] - qa;

				pls(qa, qw, a0[i][k2][2], a0[i][k2][3]);
			}

			if (a0[i][k2][1] == 6) {
			xpc:
				ds(a0[i][k2][2] * 5 + 1, a0[i][k2][3] * 5 + 2);
				clearScreenArea(65, 5, 17, 16);

				gotoxy(65, 10);
				std::cout << "1-4 ";

				gotoxy(65, 11);
				std::cout << "2-5";

				gotoxy(65, 12);
				std::cout << "3-L ";

				gotoxy(65, 14);
				std::cout << "иное-отказ";

				d = _getch();

				if (d == '1' || d == '2' || d == '3') {
					qw = atoi(&d) + 4;
					gotoxy(65, 17);
					std::cout << typeForce[qw];
				}
				else
					goto xm;
			xoc:
				gotoxy(65, 14);
				std::cout << "сколько?   ";

				d = _getch();
				qa = atoi(&d);

				if (qa > 6) {
					gotoxy(65, 14);
					std::cout << "не больше 6";
					delay(500);
					clearScreenArea(65, 14, 16, 2);
					delay(300);
					goto xoc;
				}

				sf1 = qa * b[qw][1];
				sf2 = qa * b[qw][2];
				sf3 = qa * b[qw][3];

				sh1 = dm1[i][0] - sf1;
				sh2 = dm1[i][1] - sf2;
				sh3 = dm1[i][2] - sf3;

				if (sh1 < 0 || sh2 < 0 || sh3 < 0) {
					gotoxy(65, 18);
					std::cout << "нет ресурсов";
					cst(sh1, sh2, sh3);

					if (scx == 1)
						goto xpc;
				}

				if (sce != 2) {
					dm1[i][0] = sh1;
					dm1[i][1] = sh2;
					dm1[i][2] = sh3;
				}

				j = qw;
				wm[2] = wm[2] - qa;

				pls(qa, qw, a0[i][k2][2], a0[i][k2][3]);
			}
		}
	xm:
		;
	}
xn:
	;
}

void pls(int a1, int a2, int a3, int a4) {
	int vax, vay, b1, b2, n1, l4;

	if (i == 0)
		n1 = -1;
	else
		n1 = 1;

	for (l4 = 0; l4 < a1; l4++) {
		vax = 0;
		vay = 0;
	xq:
		if (l[a3 * 5 + 2 + vax][a4 * 5 + 1 + 4 * i + vay * n1] != 0) {
			vax++;
			if (vax > 3) {
				vax = 0;
				vay++;
			}
			goto xq;
		}

		b1 = a3 * 5 + 2 + vax;
		b2 = a4 * 5 + 1 + 4 * i + vay * n1;

		div();

		a[i][k][2] = b1;
		a[i][k][3] = b2;

		l[b1][b2] = 10 * i + j + 1;

		ds(a3 * 5 + 3, a4 * 5 + 2);
	}
}

void fas(int r1, int y1) {
	int wx = a[r1][y1][2];
	int wy = a[r1][y1][3];

	sms = 0;

	if (r1 == 1 && l[wx - 1][wy] > 20 && l[wx - 1][wy] < 30)
		sms = 1;

	if (r1 == 1 && l[wx + 1][wy] > 20 && l[wx + 1][wy] < 30)
		sms = 1;

	if (r1 == 1 && l[wx][wy - 1] > 20 && l[wx][wy - 1] < 30)
		sms = 1;

	if (r1 == 1 && l[wx][wy + 1] > 20 && l[wx][wy + 1] < 30)
		sms = 1;

	if (r1 == 1 && l[wx - 1][wy - 1] > 20 && l[wx - 1][wy - 1] < 30)
		sms = 1;

	if (r1 == 1 && l[wx - 1][wy + 1] > 20 && l[wx - 1][wy + 1] < 30)
		sms = 1;

	if (r1 == 1 && l[wx + 1][wy - 1] > 20 && l[wx + 1][wy - 1] < 30)
		sms = 1;

	if (r1 == 1 && l[wx + 1][wy + 1] > 20 && l[wx + 1][wy + 1] < 30)
		sms = 1;

	if (r1 == 0 && l[wx - 1][wy] > 30 && l[wx - 1][wy] < 40)
		sms = 1;

	if (r1 == 0 && l[wx + 1][wy] > 30 && l[wx + 1][wy] < 40)
		sms = 1;

	if (r1 == 0 && l[wx][wy - 1] > 30 && l[wx][wy - 1] < 40)
		sms = 1;

	if (r1 == 0 && l[wx][wy + 1] > 30 && l[wx][wy + 1] < 40)
		sms = 1;

	if (r1 == 0 && l[wx - 1][wy - 1] > 30 && l[wx - 1][wy - 1] < 40)
		sms = 1;

	if (r1 == 0 && l[wx - 1][wy + 1] > 30 && l[wx - 1][wy + 1] < 40)
		sms = 1;

	if (r1 == 0 && l[wx + 1][wy - 1] > 30 && l[wx + 1][wy - 1] < 40)
		sms = 1;

	if (r1 == 0 && l[wx + 1][wy + 1] > 30 && l[wx + 1][wy + 1] < 40)
		sms = 1;
}

void bat0(int r2, int y2) {
	long we, wr, gt1, gy1, de1, df1, rvg = 0, i20, s7;

	we = a[r2][y2][2];
	wr = a[r2][y2][3];

	gt1 = we / 5;
	gy1 = wr / 5;

	if (we % 5 == 0) {
		de1 = 5;
		gt1--;
	}
	else
		de1 = we % 5;

	if (wr % 5 == 0) {
		df1 = 5;
		gy1--;
	}
	else
		df1 = wr % 5;

	for (i20 = 0; i20 < 50; i20++) {
		if (a0[!r2][i20][2] == gt1 && a0[!r2][i20][3] == gy1) {
			rvg = i20;
			goto ca;
		}
	}
ca:
	s7 = a0[!r2][rvg][1] - 1;

	l[gt1 * 5 + 3][gy1 * 5 + 2 + !r2] = r2 * 10 + 100 + s7 + 1;
	l[gt1 * 5 + 4][gy1 * 5 + 2 + !r2] = r2 * 10 + 100 + s7 + 1;
	l[gt1 * 5 + 4][gy1 * 5 + 3 + !r2] = r2 * 10 + 100 + s7 + 1;
	l[gt1 * 5 + 3][gy1 * 5 + 3 + !r2] = r2 * 10 + 100 + s7 + 1;

	l[we][wr] = l[we][wr] + 60;

	m = we;
	n = wr;

	ds(m, n);

	delay(200);

	gotoxy(65, 12);
	std::cout << "Удар " << typeForce[a[r2][y2][1]] << a[r2][y2][4] << " по " << e1[s7];

	clearScreenArea(66, 14, 14, 2);

	fr0 = 0;
	fr1 = 0;

	fg0 = 0;
	fg1 = 0;

	for (i10 = 5; i10 <= 10; i10++) {
		if (a[r2][y2][i10] > 0) {
			fr0 = fr0 + a[r2][y2][i10];
		}

		fr1 = a0[!r2][rvg][5];
	}

	for (u = 5; u <= 10; u++) {
		gotoxy(66 + 2 * (u - 5), 14);

		textcolor(u - 4);

		if (u - 4 <= mn[a[r2][y2][1]] && a[r2][y2][u] > 0)
			std::cout << a[r2][y2][u];
		else
			std::cout << " ";
		d = _getch();
	}

	gotoxy(66, 14);
	std::cout << a0[!r2][rvg][5];

	fnb = 0;

	for (i7 = 5; i7 <= mn[a[r2][y2][1]] + 4; i7++) {
		if (r2 == !i && a[r2][y2][i7] <= 0 && a[r2][y2][i7] != -9) {
			kik0(r2, y2, rvg);
			a[r2][y2][i7] = -9;
		}

		if (a[r2][y2][i7] > 0) {
			kik0(r2, y2, rvg);
		}

		if (a[r2][y2][i7] <= 0)
			a[r2][y2][i7] = -9;
	}

	fnb = 0;

	for (i10 = 5; i10 <= 10; i10++) {
		if (a[r2][y2][i10] > 0) {
			fg0 = fg0 + a[r2][y2][i10];
		}

		fg1 = a0[!r2][rvg][5];
	}

	gotoxy(66, 20);
	std::cout << "До: " << fr0 << "-" << fr1;

	gotoxy(66, 21);
	std::cout << "Потери: " << (fr0 - fg0) << "-" << (fr1 - fg1);

	gotoxy(66, 22);
	std::cout << "После: " << fg0 << "-" << fg1;

	gotoxy(66, 23);
	std::cout << "статистика - x";

	qs0 = a[r2][y2][1];
	qs1 = 0;

	e8[r2][qs0] = e8[r2][qs0] + fr0 - fg0;

	delay(1300);

	keyInput();

	if (d == 'x') {
		d = ' ';
		stt();
	}

	if (r2 == i &&
		a[r2][y2][5] <= 0 &&
		a[r2][y2][6] <= 0 &&
		a[r2][y2][7] <= 0 &&
		a[r2][y2][8] <= 0 &&
		a[r2][y2][9] <= 0 &&
		a[r2][y2][10] <= 0) {

		force[r2][y2]--;
		fn[r2][y2][a[r2][y2][4]] = 0;
		l[a[r2][y2][2]][a[r2][y2][3]] = 0;

		for (i15 = 0; i < 15; i15++)
			a[r2][y2][i15] = 0;
	}
	else {
		l[a[r2][y2][2]][a[r2][y2][3]] = 10 * r2 + a[r2][y2][1] + 1;

		if (r2 == !i &&
			a[r2][y2][5] <= 0 &&
			a[r2][y2][6] <= 0 &&
			a[r2][y2][7] <= 0 &&
			a[r2][y2][8] <= 0 &&
			a[r2][y2][9] <= 0 &&
			a[r2][y2][10] <= 0)

			a[r2][y2][14] = 1;
	}

	if (r2 == !i && a0[!r2][rvg][5] <= 0) {
		l[gt1 * 5 + 3][gy1 * 5 + 2 + !r2] = 0;
		l[gt1 * 5 + 4][gy1 * 5 + 2 + !r2] = 0;
		l[gt1 * 5 + 4][gy1 * 5 + 3 + !r2] = 0;
		l[gt1 * 5 + 3][gy1 * 5 + 3 + !r2] = 0;

		for (i15 = 0; i < 6; i15++)
			a0[!r2][y2][i15] = 0;
	}
	else {
		l[gt1 * 5 + 3][gy1 * 5 + 2 + !r2] = r2 * 10 + 20 + s7 + 1;
		l[gt1 * 5 + 4][gy1 * 5 + 2 + !r2] = r2 * 10 + 20 + s7 + 1;
		l[gt1 * 5 + 4][gy1 * 5 + 3 + !r2] = r2 * 10 + 20 + s7 + 1;
		l[gt1 * 5 + 3][gy1 * 5 + 3 + !r2] = r2 * 10 + 20 + s7 + 1;

		ds(m, n);

		clearScreenArea(65, 12, 16, 13);
	}
}


void kik0(int r2, int y2, int rvg) {
	if (a0[!r2][rvg][5] <= 0)
		goto vbi;

	///*
	rv = rand() % 6 + 1;

	fnb++;

	switch (rv) {
	case 1:
		fa0 = 1;
		break;
	case 2:
		fa0 = 2;
		break;
	case 3:
		fa0 = 3;
		break;
	case 4:
		fa0 = 0;
		break;
	case 5:
		if (a[r2][y2][i7] <= a0[!r2][rvg][5]) {
			fa0 = a[r2][y2][i7];
			fa1 = fa0;
		}
		else {
			fa0 = a0[!r2][y2][5];
			fa1 = fa0;
		}
		break;
	case 6:
		fa0 = 8;
		break;
	default:
		break;
	}

	a0[!r2][rvg][5] = a0[!r2][rvg][5] - fa0;

	if (a0[!r2][rvg][i7] < 0)
		a0[!r2][y2][rvg] = 0;

	a[r2][y2][i7] = a[r2][y2][i7] - fa1;

	if (a[r2][y2][i7] < 0)
		a[r2][y2][i7] = 0;

	gotoxy(72, 21);
	std::cout << rv;

	gotoxy(72, 22);
	std::cout << fa0 << ' ' << fa1;

	gotoxy(66 + (i7 - 5) * 2, 16);
	std::cout << a[r2][y2][i7];

	gotoxy(66, 17 + fnb);
	std::cout << a0[!r2][rvg][5];

	delay(700);
	clearScreenArea(66, 20, 15, 3);

	fa0 = 0;
	fa1 = 0;

	//*/
vbi:
	if (a0[!r2][rvg][5] <= 0)
		a0[!r2][rvg][5] = 0;

	if (a[r2][y2][i7] <= 0 && rv == 5)
		a[r2][y2][i7] = -9;
}


void gotoxy(int xpos, int ypos) {
	COORD screen;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

	screen.X = xpos;
	screen.Y = ypos;

	SetConsoleCursorPosition(hOuput, screen);
}

void delay(int duration) {
	std::this_thread::sleep_for(std::chrono::milliseconds(duration));
}

void textbackground(int background) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, static_cast<WORD>(background << 4));

}

void textcolor(int text) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, static_cast<WORD>(text));
}
