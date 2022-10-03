#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAXSTRLEN 12
typedef unsigned char SString[MAXSTRLEN+1];

bool StrAssign_Sq(SString T, const char *chars);

int StrCompare_Sq(SString S, SString T);//���رȽϽ����0Ϊ��ȣ�S����T�������������򷵻ظ���
void Concat_Sq(SString& T, SString S1, SString S2);
bool SubString_Sq(SString& Sub, SString S, int pos, int len);//�����Ƿ�����ɹ�

void StrPrint_Sq(SString S);

int main(){
	int i;
	SString Chars, T, V, Sub,Temp;
	StrAssign_Sq(Chars, "wA");
	StrAssign_Sq(T, "www.");
	StrAssign_Sq(V, "hhtc.edu.cn");

	printf("����StrCompare_Sq ����...\n");		//4.����StrCompare_Sq����
	{

		printf("�Ƚ��ַ��� Chars �� T ...\n");
		printf("CharsΪ��");StrPrint_Sq(Chars);
		printf("       TΪ��");StrPrint_Sq(T);

		i = StrCompare_Sq(Chars, T);

		i==0 ? printf("\n\n�ȽϽ����Chars==T����\n") : (i<0 ? printf("\n\n�ȽϽ����Chars<T����\n") : printf("\n\n�ȽϽ����Chars>T����\n"));
		printf("\n\n");
	}
	system("pause");

	printf("���� Concat_Sq ����...\n");			//7.����Concat_Sq����
	{
		printf("���� T �� V �����ַ���...\n");
		printf("TΪ��");StrPrint_Sq(T);
		printf("       VΪ��");StrPrint_Sq(V);
		Concat_Sq(Temp, T, V);
		printf("\n�ַ����Ϊ%d���ַ�",MAXSTRLEN);
		printf("\n\n�ϲ���Ĵ�Ϊ�� ");
		StrPrint_Sq(Temp);
		printf("\n\n");
	}
	system("pause");

	printf("���� SubString_Sq ����...\n");		//8.����SubString_Sq����
	{
		printf("�� Sub ���� S �е� 5 ���ַ���� 3 ���ַ�...\n");
		printf("���и�Ĵ�Ϊ��");StrPrint_Sq(V);
		if(SubString_Sq(Sub, V, 5, 3))
		{
			printf("\n\n �Ӵ�Sub Ϊ��Sub = ");
			StrPrint_Sq(Sub);
		}
		else
			printf("\n\nSubStringʧ�ܣ�");

		printf("\n\n");
	}
	system("pause");
}

bool StrAssign_Sq(SString T, const char *chars)	//������С�����Ӽ�
{
	int i, len;
	len = strlen(chars);
	if(len>MAXSTRLEN)								//chars����
		return false;
	else
	{
		T[0] = len;
		for(i=1; i<=len; i++)
			T[i] = chars[i-1];						//charsΪ����
		return true;
	}
}


int StrCompare_Sq(SString S, SString T)				//������С�����Ӽ�
{
    for(int i=1;i<=T[0]&&i<=S[0];i++)
        if(S[i]!=T[i])
            return S[i]-T[i];
    return S[0]-T[0];
}


void Concat_Sq(SString& T, SString S1, SString S2)	//������С�����Ӽ�
{
	if((S1[0]+S2[0])<=MAXSTRLEN){
        T[0] = S1[0]+S2[0];
        int j = 1;
        for(int i=1;i<=MAXSTRLEN;i++) {
            if (i <= S1[0])
                T[i] = S1[i];
            else{
                T[i] = S2[j];
                j++;
            }
        }
    }
    else if(S1[0]<MAXSTRLEN){
        T[0] = MAXSTRLEN;
        int j = 1;
        for(int i=1;i<=MAXSTRLEN;i++){
            if(i <= S1[0])
                T[i] = S1[i];
            else{
                    T[i] = S2[j];
                    j++;
            }
        }
    }
    else{
        T[0] = MAXSTRLEN;
        for(int i=1;i<=MAXSTRLEN;i++)
            T[i] = S1[i];
    }

}

bool SubString_Sq(SString& Sub, SString S, int pos, int len)//������С�����Ӽ�
{
    if(pos<1||pos>S[0]||len<0||len>S[0]-pos+1)
        return false;
    Sub[0] = len;
    int i =pos;
    for(int j=1;j<=len;j++) {
        Sub[j] = S[i];
        i++;
    }
	return true;
}


void StrPrint_Sq(SString S)
{
	int i;
	for(i=1; i<=S[0]; i++)
		printf("%c", S[i]);
}

