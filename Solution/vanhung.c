#include <stdio.h>
#include <string.h>
#define MAX 100 

int main(){
	int bacHam1;
	printf("nhap vao bac lon nhat cua ham 1: ");
	scanf("%d", &bacHam1);
	
	int bacHam2;
	printf("nhap vao bac lon nhat cua ham 2: ");
	scanf("%d", &bacHam2);
	
	int bacLonNhat = (bacHam1 > bacHam2) ? bacHam1 : bacHam2;
	
	int ham1[MAX];
	int ham2[MAX];
	
	if(!(bacHam1 - bacLonNhat)){
			int i = 0;
			for(; i <= bacLonNhat; i++){
				printf("X^%d:",(bacLonNhat - i));
		        scanf("%d",&ham1[i]);
			}
			int delta = bacHam1 - bacHam2;
			int j = 0;
			for(; j < delta; j++){
				ham2[j] = 0;
			}
			int k;
			for(k = delta; k <= bacLonNhat; k++){
				printf("X^%d:",(bacLonNhat - k));
		        scanf("%d",&ham2[k]);
			}
		}
	else{
		    int i = 0;
			for(; i <= bacLonNhat; i++){
				printf("X^%d:",(bacLonNhat - i));
		        scanf("%d",&ham2[i]);
			}
			int delta = bacHam2 - bacHam1;
			int j = 0;
			for(; j < delta; j++){
				ham1[j] = 0;
			}
			int k;
			for(k = delta; k <= bacLonNhat; k++){
				printf("X^%d:",(bacLonNhat - k));
		        scanf("%d",&ham1[k]);
			}
	}
	
	//da co ham 1, 2.
	int result[MAX];
    int heso = 0;
    if(!(bacHam1 - bacLonNhat)){
    	for(; heso <= bacLonNhat; heso++){
    		result[heso] = ham1[heso] - ham2[heso];
		}
	}
	else{
		for(; heso <= bacLonNhat; heso++){
    		result[heso] = ham2[heso] - ham1[heso];
		}
	}
	
	//xuat ra ket qua: 
	int m = 0;
	for(; m  <= bacLonNhat; m++){
		if(m != bacLonNhat){
			if(m < (bacLonNhat - 1)){
				if(result[m] > 0){
			        printf("+%dX^%d", result[m], (bacLonNhat - m));
		        } 
		        else if(result[m] == 0){
			        printf("");
		        }
		        else{
			        printf("%dX^%d", result[m], (bacLonNhat - m));
		        }
			}
			else{
				if(result[m] > 0){
			        printf("+%dX", result[m]);
		        } 
		        else if(result[m] == 0){
			        printf("");
		        }
		        else{
			        printf("%dX", result[m]);
		        }
			}
		    
		}
		else{
			if(result[m] > 0){
			    printf("+%d", result[m]);
		    } 
		    else if(result[m] == 0){
			    printf("");
		    } 
		    else{
			    printf("%d", result[m]);
		    }
		} 
	}
	
	return 0; 
} 
