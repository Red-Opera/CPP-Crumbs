#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
enum MAIN { start, reset, end };
enum attEV {LV1/*기본무기*/,LV5,LV10,LV15,LV20,LV25,LV30,LV35,LV40,LV45,LV50};//무기 인벤토리
enum defEV { DLV1/*기본방어구*/, DLV5, DLV10, DLV15, DLV20, DLV25, DLV30, DLV35, DLV40, DLV45, DLV50 }; //방어구 인벤토리
enum Effective { Poison/*독*/, attdown, defdown }; //상태 이상

int itam[8][8]{
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	};
int Equipment[5][4]{
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0,
}; //장비

int mainmenu = 0, cho = 0, at = 0, df = 0, mo = 0, exp = 0, mp = 0, hp = 0;

int attEVordefEVorEffectiveplus(){     //무기 방어구 장착,버프 발생
	int attEVplus = 0, defEVplus = 0, Effectiveplus = 0;
	if (attEVplus > -1 && attEVplus < 11) {
		if (attEV::LV1 == attEVplus)
		{
			const int at = 1;
		}
		else if (attEV::LV5 == attEVplus)
		{
			const int at = 7;
		}
		else if (attEV::LV10 == attEVplus) {
			const int at = 16;
		}
		else if (attEV::LV15 == attEVplus) {
			const int at = 28;
		}
		else if (attEV::LV20 == attEVplus) {
			const int at = 44;
		}
		else if (attEV::LV25 == attEVplus) {
			const int at = 66;
		}
		else if (attEV::LV30 == attEVplus) {
			const int at = 94;
		}
		else if (attEV::LV35 == attEVplus) {
			const int at = 128;
		}
		else if (attEV::LV40 == attEVplus) {
			const int at = 160;
		}
		else if (attEV::LV45 == attEVplus) {
			const int at = 205;
		}
		else if (attEV::LV50 == attEVplus) {
			const int at = 260;
		}
		else {
			printf("ERROR");
			system("pause");
			exit(0);
		}
	}
	else {
		printf("ERROR");
		system("pause");
		exit(0);
	}
	if (defEVplus > -1 && defEVplus < 11) {
		if (defEV::DLV1 == defEVplus)
		{
			const int df = 1;
		}
		else if (defEV::DLV5 == defEVplus)
		{
			const int df = 3;
		}
		else if (defEV::DLV10 == defEVplus)
		{
			const int df = 6;
		}
		else if (defEV::DLV15 == defEVplus)
		{
			const int df = 11;
		}
		else if (defEV::DLV20 == defEVplus)
		{
			const int df = 18;
		}
		else if (defEV::DLV25 == defEVplus)
		{
			const int df = 28;
		}
		else if (defEV::DLV30 == defEVplus)
		{
			const int df = 40;
		}
		else if (defEV::DLV35 == defEVplus)
		{
			const int df = 54;
		}
		else if (defEV::DLV40 == defEVplus)
		{
			const int df = 71;
		}
		else if (defEV::DLV45 == defEVplus)
		{
			const int df = 92;
		}
		else if (defEV::DLV50 == defEVplus)
		{
			const int df = 115;
		}
		else {
			printf("ERROR");
			system("pause");
			exit(0);
		}
	}
	else {
		printf("ERROR");
		system("pause");
		exit(0);
	}
	return 0;
}

int main() 
{
	FILE *a;
	
	a = fopen("SAG.sv", "a");
	fscanf(a, "%d %d %d %d %d %d", &at, &df, &mo, &exp, &mp, &hp);
	const int q = 8, z = 8;
	for (int x = 0; x <= q; x++) {
		for (int i = 0; i <= z; i++) {
			fscanf(a, "%d ",&itam[x][i]);
		}
	}
	const int b = 5, c = 4;
	fprintf(a, "%d %d %d %d %d %d", at, df, mo, exp, mp, hp);
	for (int x = 0; x <= b; x++) {
		for (int i = 0; i <= c; i++) {
			fscanf(a, "%d", &Equipment[x][i]);
		}
	}
	attEVordefEVorEffectiveplus();

	printf("-------------------------------------------------------------------------------\n                                  1.로드\n                                  2.초기화\n                                  3.끝내기\n-------------------------------------------------------------------------------\n무엇을 하시겠습니까? :");
	scanf("%d",&mainmenu);

	if (MAIN::start == mainmenu) {
		system("cls");
		printf("-------------------------------------------------------------------------------\n무엇을 하시겠습니까?");
		scanf("%d",&cho);
		if (cho == 1) {

		}
	}
	else if (MAIN::reset == mainmenu) {
		int at = 0, df = 0, mo = 0, exp = 0, mp = 0, hp = 10;
	}
	else {
		const int b = 8, c = 8;
		fprintf(a, "%d %d %d %d %d %d", at, df, mo, exp, mp, hp);
		for (int x = 0; x <= b; x++) {
			for (int i = 0; i <= c; i++) {
				fprintf(a, "%d", itam[x][i]);
			}
		}
		const int q = 5, z = 4;
		for (int x = 0; x <= q; x++) {
			for (int i = 0; i <= z; i++) {
				fprintf(a, "%d ", Equipment[x][i]);
			}
		}
	}
	exit(0);
}
