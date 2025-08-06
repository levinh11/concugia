#include <stdio.h>

int main() {
    int tienRut;
    int so500k, so200k, so100k, so50k, so20k, so10k;

    printf("Nhap so tien can rut : ");
    scanf("%d", &tienRut);

    if (tienRut % 10000 != 0 || tienRut <= 0) {
    	if(tienRut = tienRut % 500000){
           so500k = tienRut / 500000;
		}else{
			if(tienRut = tienRut % 200000){
				so200k = tienRut / 200000;
			}else{
				if(tienRut = tienRut % 100000){
					so100k = tienRut / 100000;
				}else{
					if(tienRut = tienRut % 50000){
						so50k = tienRut / 50000;
					}else{
						if(tienRut = tienRut % 20000){
							so20k = tienRut / 20000;
						}else{
							if(tienRut = tienRut % 10000){
								so10k = tienRut / 10000;
							}
						}
					}
				}
			}
		}
    	
    }else{
    	printf("so tien ko hop le");
	}

    printf("So to 500k: %d\n", so500k);
    printf("So to 200k: %d\n", so200k);
    printf("So to 100k: %d\n", so100k);
    printf("So to 50k: %d\n", so50k);
    printf("So to 20k: %d\n", so20k);
    printf("So to 10k: %d\n", so10k);

}