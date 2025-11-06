 #include<stdio.h>
 #include<math.h>
 
 // DE 1 
 
 int main(){
 	int i, j ;
 	int n;
 	int temp;
 	int size;
 	int choice;
 	int showmenu =1;
 	int position;
 	int value;
 	printf("xin moi nhap size mang cua ban : ");
 	scanf("%d",&size);
 	int arraytemplate[size];
 	
 	for (i = 0 ; i < size ; i++){
 		printf("\n array %d =  ", i );
 		scanf("%d",&arraytemplate[i]);
	 } 
	
	for ( i = 0 ; i < size ; i++){
		printf("\n -----array %d = %d---- \n", i , arraytemplate[i]);
	}
 	while(showmenu == 1 ){
	 
 		
 		printf("\n ---------------- MENU ---------------- \n ");
 		printf("1.In ra cac phan tu co so nguyen to trong mang\n");
 		printf("2.Thoat chuong trinh\n");
 		printf("3.Xoa phan tu mang\n ");
 		printf("4.Them phan tu mang\n ");
 		printf("5.nguoc lai\n ");
 		printf("6.Gia tri nho nhat trong mang");
 		printf("\n lua chon cua ban la gi??\n \n");
 		
 		scanf("%d",&choice );
 		if(choice == 1){
 			printf("cac so nguyen to co trong mang la");
 			for ( i = 1  ;i < size ; i++){
 				if(arraytemplate[i] % 1 == 0  &! arraytemplate[i] % arraytemplate[i]  == 0  &! arraytemplate[i] % (arraytemplate[i] / 2) == 0  ){
 				    printf("%d ",arraytemplate[i] );
 				  //printf("%d ",arraytemplate[i] );
				 }  //	printf("%d ",arraytemplate[i] );
			}
			//-----------------------
		 } else if (choice == 2 ){
		 	printf("\n \n dang thoat chuong trinh....");
		 	return 0;
		 	//-------------------------------
		 } else if (choice == 3) {
            printf("\nnhap vi tri muon xoa 0 -> %d: ", size);
            scanf("%d", &position);

            if (position < 0 || position > size) {
                printf("Vi tri khong hop le! , NHAP LAI...!!!\n");
                continue;
            }

            for (i = position; i < size - 1; i++) {
                arraytemplate[i] = arraytemplate[i + 1];
            }

            size--; 

            printf("\nmang sau khi xoa: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arraytemplate[i]);
         }
     } else if(choice == 4 ) {
     	printf("\nnhap vi tri muon chen 0 -> %d: ", size);
            scanf("%d", &position);

            if (position < 0 || position > size) {
                printf("Vi tri khong hop le! , NHAP LAI!!!\n");
                continue;
            }
           printf("\n nhap gia tri can chen: ");
            scanf("%d", &value);  
//
            for (i = size; i > position; i--) {
                arraytemplate[i] = arraytemplate[i - 1];
            }
                                
            arraytemplate[position] = value;
            size++;

            printf("\nMang sau khi chen: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arraytemplate[i]);
           }
            printf("\n");
       }   //--------------------
       else if(choice == 5){
       	printf(";-; dont touch this mode  \n");
       	
	 j =size - 1 ;
	 i = 0 ;
		while(i < j){
			int temp = arraytemplate[i];
			arraytemplate[i] = arraytemplate[j] ;
			arraytemplate[j] = temp ;
			i++;
			j--;
		}
		printf("Mang dao nguoc : ");
		for(int i = 0 ; i < size ; i++){
			printf("%d " , arraytemplate[i]);
		}
}
                
                        
                       // didit = 1;
        }
	 
	}  
     	// e loan mat roi khong lam duoc nua =(
	 
 

           
	      


 	
 	
 	
 	

