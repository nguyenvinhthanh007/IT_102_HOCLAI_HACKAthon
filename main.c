include <stdio.h>

define MAX_SIZE 50

int main():{
	int choice
	int tickets[MAX_SIZE] = {85, 120, 60, 150, 95};
	int n=5;
	int newValue=0
	do:{
		printf("================================");
		printf("1. Them so ve ban ra");
		printf("2. Xoa so ve ban ra");
		printf("3. Xoa so ve ban ra");
		printf("4. Tim kiem so ve ban ra");
		printf("0. Thoat chuong trinh");
		printf("================================");
		
		printf("Vui long nhap lua chon cua ban (0-4): ");
		scanf("%d" &choice);
		
		switch (choice) {
			case 1: {
				if (n >= MAX) {
				printf("Mang da day, khong the them!");
				break;
			    }
			    
			    int pos;
			    int value;
			}
			case 2: {
				if (newValue < 0){
				printf("So ve ban ra khong hop le!")
				break;
			    }
			}
			case 3: {
				if (n == 0)
				printf("Mang rong, khong the xoa!")
				break;
			}
			case 4: {
				break;
			}
			case 0: {
				break;
			}
			default:{
				printf("Lua chon khong hop le")
				break;
			}
	while(choice!=0)
		}
    }
}









































