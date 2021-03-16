#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	int MSSV;
	string hoTen;
	string gTinh;
	string diaChi;
	float diemTB;
};

void nhapSV();
void xuatSV();
void xuatSV_X();
void sort_DTB();
void sort_apha();

int main(int argc, char** argv) {
	vector<SinhVien> SV;
	cout<<"|................................................|\n";
	cout<<"|\t\t\tMENU\t\t\t|\n";
	cout<<"|1. Nhap cac sinh vien vao danh sach\t\t|\n";
	cout<<"|2. In danh sach sinh vien\t\t\t|\n";
	cout<<"|3. Xuat thong tin sinh vien co ma so x\t\t|\n";
	cout<<"|4. Sap xep danh sach sinh vien theo dtb\t|\n";
	cout<<"|5. Sap xep danh sach sinh vien theo alphabet	|\n";
	cout<<"|................................................|\n";
	
	int choose;
	while(choose!=0){
		cout<<"Moi ban nhap : ";
		cin>>choose;
		switch(choose){
			case 1 :
				cout<<"Nhap so luong sinh vien muon them vao danh sach : ";
				int n;
				cin>>n;
				while(SV.size()+n>50){
					cout<<"Sinh vien vuot qua gian han!";
					cin>>n;
				}
				nhapSV(SV,n);
				break;
			case 2 :
				xuatSV();
				break;
			case 3 :
				xuatSV_X();
				break;
			case 4:
				sort_DTB();
				break;
			case 5:
				sort_apha();
				break;		
		}
	}
	return 0;
}


void nhapSV(vector<SinhVien> &SV, int n){
	for(int i = 0; i<n; i++){
		cout<<"Nhap MSSV : ";
		cin>>SV[i].MSSV;
		cout<<"Nhap ten sinh vien : ";
		cin>>SV[i].hoTen;
		cout<<"Nhap gioi tinh : ";
		cin>>SV[i].gTinh;
		cout<<"Nhap dia chi sinh vien : ";
		cin>>SV[i].diaChi;
		cout<<"Nhap diem trung binh cua sinh vien ";
		cin>>SV[i].diemTB;
		
		SV.push_back(SV[i]);
	}
}
void xuatSV(FILE *fp){
	
}
