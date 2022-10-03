#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAXSTRLEN 12
typedef unsigned char SString[MAXSTRLEN+1];

bool StrAssign_Sq(SString T, const char *chars);

int StrCompare_Sq(SString S, SString T);//返回比较结果，0为相等，S大于T返回正数，否则返回负数
void Concat_Sq(SString& T, SString S1, SString S2);
bool SubString_Sq(SString& Sub, SString S, int pos, int len);//返回是否操作成功

void StrPrint_Sq(SString S);

int main(){
	int i;
	SString Chars, T, V, Sub,Temp;
	StrAssign_Sq(Chars, "wA");
	StrAssign_Sq(T, "www.");
	StrAssign_Sq(V, "hhtc.edu.cn");

	printf("函数StrCompare_Sq 测试...\n");		//4.函数StrCompare_Sq测试
	{

		printf("比较字符串 Chars 、 T ...\n");
		printf("Chars为：");StrPrint_Sq(Chars);
		printf("       T为：");StrPrint_Sq(T);

		i = StrCompare_Sq(Chars, T);

		i==0 ? printf("\n\n比较结果：Chars==T！！\n") : (i<0 ? printf("\n\n比较结果：Chars<T！！\n") : printf("\n\n比较结果：Chars>T！！\n"));
		printf("\n\n");
	}
	system("pause");

	printf("函数 Concat_Sq 测试...\n");			//7.函数Concat_Sq测试
	{
		printf("连接 T 和 V 两个字符串...\n");
		printf("T为：");StrPrint_Sq(T);
		printf("       V为：");StrPrint_Sq(V);
		Concat_Sq(Temp, T, V);
		printf("\n字符串最长为%d个字符",MAXSTRLEN);
		printf("\n\n合并后的串为： ");
		StrPrint_Sq(Temp);
		printf("\n\n");
	}
	system("pause");

	printf("函数 SubString_Sq 测试...\n");		//8.函数SubString_Sq测试
	{
		printf("用 Sub 返回 S 中第 5 个字符起的 3 个字符...\n");
		printf("被切割的串为：");StrPrint_Sq(V);
		if(SubString_Sq(Sub, V, 5, 3))
		{
			printf("\n\n 子串Sub 为：Sub = ");
			StrPrint_Sq(Sub);
		}
		else
			printf("\n\nSubString失败！");

		printf("\n\n");
	}
	system("pause");
}

bool StrAssign_Sq(SString T, const char *chars)	//属于最小操作子集
{
	int i, len;
	len = strlen(chars);
	if(len>MAXSTRLEN)								//chars过长
		return false;
	else
	{
		T[0] = len;
		for(i=1; i<=len; i++)
			T[i] = chars[i-1];						//chars为常量
		return true;
	}
}


int StrCompare_Sq(SString S, SString T)				//属于最小操作子集
{
    for(int i=1;i<=T[0]&&i<=S[0];i++)
        if(S[i]!=T[i])
            return S[i]-T[i];
    return S[0]-T[0];
}


void Concat_Sq(SString& T, SString S1, SString S2)	//属于最小操作子集
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

bool SubString_Sq(SString& Sub, SString S, int pos, int len)//属于最小操作子集
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

