#include <stdio.h>
int main(){
    int maxday;
	int ngay;
	printf("nhap ngay:");
	scanf("%d",&ngay);
	int thang;
    printf("nhap thang:");
	scanf("%d",&thang);
	int nam;
	printf("nhap nam:");
	scanf("%d",&nam);
	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 ||thang == 8 || thang == 10 || thang == 12){
		0<ngay<=31;
		maxday=31;
	}else{
		if(thang==2&&((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))){
		   maxday=29;
		   0<ngay<=29;
	}else{
		if(thang==2){
			0<ngay<=28;
			maxday=28;
		}else{
			if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
			   0<ngay<=30;
			   maxday=30;
		}else{
			printf("ko hop le");
		}if (ngay < maxday) {
        ngay = ngay + 1;
    } else {
        ngay = 1;
        if (thang < 12) {
            thang = thang + 1;
        } else {
            thang = 1;
            nam = nam + 1;
        }
    }
	}
}
}


    printf("Ngay ke tiep la: %d/%d/%d", ngay, thang, nam);

}