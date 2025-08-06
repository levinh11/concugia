#include <stdio.h>
int main(){
	long long so_tien_thu_nhap;
	printf("nhap gia tri thu nhap:");
	scanf("%lld",&so_tien_thu_nhap);
	long long tien;
	tien=so_tien_thu_nhap-11000000;
	long long thue_phai_tra;
	if(tien>0){
		if(tien<=5000000){
			thue_phai_tra=tien*0.05;
			
		}else{
			if(5<tien<=10){
				thue_phai_tra=5000000*0.05+(tien-5000000)*0.1;
				
			}else{
				if(10<tien<=18){
					thue_phai_tra=5000000*0.05+5000000*0.1+(tien-10000000)*0.15;
				}else{
					if(18<tien<=32){
						thue_phai_tra=5000000*0.05+5000000*0.1+8000000*0.15+(tien-18000000)*0.2;
					}else{
						if(32<tien<=52){
							thue_phai_tra=5000000*0.05+5000000*0.1+8000000*0.15+14000000*0.2+(tien-32000000)*0.25;
						}else{
							if(52<tien<=80){
								thue_phai_tra=5000000*0.05+5000000*0.1+8000000*0.15+14000000*0.2+20000000*0.25+(tien-52000000)*0.3;
							}else{
								if(tien>80000000){
									thue_phai_tra=5000000*0.05+5000000*0.1+8000000*0.15+14000000*0.2+20000000*0.25+28000000*0.3+(tien-80000000)*0.35;
								}
							}
						}
					}
				}
			}
		}	
	}else{
		printf("ko thu thue");
	}
	printf("So tien thue phai nop la: %lld",thue_phai_tra );
}