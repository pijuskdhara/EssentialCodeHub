#include<stdio.h>

void extractGPSTime(char data);
int tm[]={0,0,0,0,0,0};
void main(){
	char gpsdata[]="$GPRTE,2,1,c,0,PBRCPK,PBRTO,PTELGR,PPLAND,PYAMBU,PPFAIR,PWARRN,PMORTL,PLISMR*73 $GPRTE,2,2,c,0,PCRESY,GRYRIE,GCORIO,GWERR,GWESTG,7FED*34$GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000*40$GPaGGA,123456.00";
	
	int i=0;
	//printf("%d",n);
	for(i=0;i<242;i++){
		extractGPSTime(gpsdata[i]);
	}
	printf("%d%d : %d%d : %d%d ",tm[0],tm[1],tm[2],tm[3],tm[4],tm[5]);
}

char gpflag[]="$GPGGA,";
int dindex=-1, gpflagSize=7;

void extractGPSTime(char data){
	//printf("%c ",data);
	dindex++;
	if(dindex<gpflagSize){
		if(data!=gpflag[dindex]){
			//printf("%c ",data);
			dindex=-1;		
			return;
		}	
	}else{
		int i = dindex-gpflagSize;
		if(i>5){
			dindex=-1;
			return;
		}
		
		tm[i] = data-'0';
		//printf("%c %d\n",data,tm[i]);	
	}
	
}
