#include<stdio.h>
#include<conio.h>
//ͼ�ο� �������ֿ�������ͼ�α�� easyx
#include<graphics.h>
#include<time.h>
enum my
{
	width = 1920,
	height = 640,
	BULLET_NUM = 15, //����ӵ�����
	ENEMY_NUM = 7,
	zhu,
	ma,
	chen,
	du,
	li,
	he
};
struct role //��ҽṹ
{
	double x;
	int y;
	bool live;
	int width;
	int height;
	int hp;
	int type;//����

}player,bull[BULLET_NUM],enemy[ENEMY_NUM];

IMAGE bk;//ͼƬ������ʼ��
IMAGE img_role;
IMAGE img_bull;
IMAGE img_enemy[6];
//��Ϸ��ͼ����غ���
bool timer_arrive(int id, int ms)
{
	static DWORD t[100];
	if (clock() - t[id] > ms)
	{
		t[id] = clock();
		return true;
	}
	return false;
}

void loadImg()
{
	//����ͼƬ
	loadimage(&bk, "./image/2.jpg");
	loadimage(&img_role, "./image/55.jpg");
	loadimage(&img_bull, "./image/56.jpg");
	//���ص���
	loadimage(&img_enemy[0], "./image/31.jpg");
	loadimage(&img_enemy[1], "./image/32.jpg");
	loadimage(&img_enemy[2], "./image/36.jpg");
	loadimage(&img_enemy[3], "./image/34.jpg");
	loadimage(&img_enemy[4], "./image/35.jpg");
	loadimage(&img_enemy[5], "./image/33.jpg");

	
}
//��Ϸ��ʼ������
void enemyHp(int index)
{

		int num = rand();
		if (num % 20 == 0)
		{
			enemy[index].type = ma;
			enemy[index].hp = 1;
			
		}
		else if (num % 20 == 8 || num % 20 == 4)
		{
			enemy[index].type = he;
			enemy[index].hp = 1;

		}
		else if (num % 20 == 3 || num % 20 == 5)
		{
			enemy[index].type = chen;
			enemy[index].hp = 1;
	
		}
		else if (num % 20 == 4 || num % 20 == 6)
		{
			enemy[index].type =du;
			enemy[index].hp = 1;
			
		}
		else if (num % 20 == 2 || num % 20 == 9)
		{
			enemy[index].type = li;
			enemy[index].hp = 1;

		}

		else
		{
			enemy[index].type = zhu;
			enemy[index].hp = 1;

		}


}
void gameInit()
{
	loadImg();
	player.x = 0 ;
	player.y = height/2;
	player.live = true;
	//��ʼ���ӵ�
	for (int i = 0;i < BULLET_NUM;i++)
	{
		bull[i].x = 0;
		bull[i].y = 0;
		bull[i].live = false;
	}
	//��ʼ������
	for (int i = 0;i < ENEMY_NUM;i++)
	{
		enemy[i].live = false;
		enemyHp(i);

	}
	




}
//��Ϸ�Ļ��ƺ���
void gameDraw()
{

	putimage(0, 0, &bk);

	putimage(player.x, player.y, &img_role);
	for (int i=0;i<BULLET_NUM;i++)
	{
		if (bull[i].live)
		{
			putimage(bull[i].x, bull[i].y, &img_bull);

			break;
		}
	}

	//���Ƶл�
	for (int i = 0;i < ENEMY_NUM;i++)
	{
		if (enemy[i].live)
		{
			if (enemy[i].type == ma)
			{
				putimage(enemy[i].x, enemy[i].y, &img_enemy[0]);
			}
			else if (enemy[i].type ==he)
			{
				putimage(enemy[i].x, enemy[i].y, &img_enemy[1]);
			}
			else if (enemy[i].type == zhu)
			{
				putimage(enemy[i].x, enemy[i].y, &img_enemy[2]);
			}
			else if (enemy[i].type == li)
			{
				putimage(enemy[i].x, enemy[i].y, &img_enemy[3]);
			}
			else if (enemy[i].type == du)
			{
				putimage(enemy[i].x, enemy[i].y, &img_enemy[4]);
			}
			else if (enemy[i].type == chen)
			{
				putimage(enemy[i].x, enemy[i].y, &img_enemy[5]);
			}

									
		}
	
	}


}
void createBullet()
{
	for (int i=0;i<1;i++)
	{
		if (!bull[i].live)
		{
			bull[i].x = player.x+100;
			bull[i].y = player.y+25;
			bull[i].live = true;
			break;
		}
	}


}
//�ӵ��ƶ�����
void Bulletmove()
{
	for (int i = 0;i < BULLET_NUM;i++)
	{
		if (bull[i].live)
		{
			bull[i].x += 2;
			if (bull[i].x > 1400)//�ӵ�����֮���false
			{
				bull[i].live = false;
			}
		}
	}
}
void creatEnemy()
{
	for (int i = 0;i <6;i++)
	{
		if (!enemy[i].live)
		{
			enemy[i].x = 1400;
			enemy[i].y = 210 + rand()%(height /2);
			enemy[i].live = true;
			break;
		}
	}
}
void enemyMove()
{
	for (int i = 0;i < ENEMY_NUM;i++)
	{
		if (enemy[i].live)
		{
			enemy[i].x -= 0.2;
			if (enemy[i].x < 0)//�ӵ�����֮���false
			{
				enemy[i].live = false;
			}
		}
	}

	
}
//��ɫ�ƶ�����
void playermove(int speed)
{
#if 0
	//�����ַ�ʽ
	//1��_getch()  �������� ��scanfһ�������û������ �ͻῨס����һֱ�ȴ����룬���һ���ֻ��������windows���� ��Ҫ����ͷ�ļ�conio.h
	if (_kbhit())
	{
		char key = _getch();
		switch (_getch())
		{
		case'w':
		case'W':
				player.y = player.y - speed;
			break;
			case's':
			case'S':
				player.y = player.y + speed;
				break;
			case'A':
			case'a':
			player.x = player.x - speed;
				break;
			case'D':
			case'd':
				player.x = player.x + speed;
				break;


	
		}

		}
	//2.ʹ��windows������ȡ�������� GetAsyncKeyState
#elif 1
	if (GetAsyncKeyState(VK_UP)|| GetAsyncKeyState('W'))
	{
		if (player.y > height/3)
		{
			player.y = player.y - speed;
			//���ƶ�
		}
		
	}
	if (GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState('S'))
	{
		if (player.y < height - 100)
		{
			player.y = player.y + speed;

		}
		
	}
	if (GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState('A'))
	{
		if (player.x > 0)
		{
			player.x = player.x - speed;

		}
		
	}
	if (GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState('D'))
	{
		if (player.x < 1300)
		{
			player.x = player.x + speed;

		}
		
	}


#endif 
	static DWORD t1=0,t2=0;
	if(GetAsyncKeyState('J') && t2-t1>5)
	{
		createBullet();
		t1 = t2;

	}
	t2 = GetTickCount();


}
void playPlane()
{
	for (int i = 0;i < 6;i++)
	{
		if (!enemy[i].live)
			continue;
		if (!bull[0].live)
			continue;
		
		if ((bull[0].x + 50) > enemy[i].x && bull[0].y > enemy[i].y-20 && bull[0].y < (enemy[i].y + 100))
		{
			bull[0].live = false;
			enemy[i].live = false;
		}
		
		

	}
}
int judge()
{
	for (int i = 0;i < 6;i++)
	{
		if (enemy[i].x < 0)
			return 1;
	}
	return 0;

}

int main()
{
	int j = 0;
	//��������  ����̨�����Զ����� ͼ�δ����ֶ�����
	initgraph(width, height);//����ͼ�δ���
	gameInit();//��Ϸ��ʼ��
	//˫�����ͼ
	BeginBatchDraw();
	while (1)
	{
		gameDraw();//ͼ�����
		FlushBatchDraw();
		playermove(1);
		Bulletmove();
		if (timer_arrive(1, 1300))
		{
			creatEnemy();
		}

		
		enemyMove();
		playPlane();
		j = judge();

		if (j)
		{
			break;
		}
		
		
	}
	EndBatchDraw();

	return 0;
}