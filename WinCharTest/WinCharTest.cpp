
#include<Windows.h>
#include<stdio.h>
void C_CHAR()
{
	const char* pszText = "hello c char";
	printf("%s\n", pszText);
}
void W_CHAR()
{

}
int main()
{
	const TCHAR* pszText = TEXT("ÄãºÃ");
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	WriteConsole(hOut, pszText, wcslen(pszText), NULL, NULL);

}