/*
 * 7seg.c
 *
 *  Created on: Oct 8, 2022
 *      Author: Acer
 */
#include "7seg.h"
void display7SEG1(int num)
 {
	  if(num == 0)
	  {
		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 0 ) ;
		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 0 ) ;
		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 1 ) ;

	  }

	  if(num == 1)
	 	  {
	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 1 ) ;

	 	  }

	  if(num == 2)
	 	 	  {
	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 1 ) ;
	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 1 ) ;
	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	 	 	  }

	  if(num == 3)
	 	 	 	  {
	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 1 ) ;
	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 1 ) ;
	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	 	 	 	  }
	  if(num == 4)
	 	 	 	 	  {
	 	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 1 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 1 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 1 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 0 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	 	 	 	 	  }
	  if(num == 5)
	 	 	 	 	 	  {
	 	 	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 1 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 1 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	 	 	 	 	 	  }
	  if(num == 6)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	  	 	 	 	 	 	  }
	  if(num == 7)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 1 ) ;

	  	 	 	 	 	 	  }
	  if(num == 8)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	  	 	 	 	 	 	  }
	  if(num == 9)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin, 0 ) ;

	  	 	 	 	 	 	  }
 }

void display7SEG2(int num)
 {
	  if(num == 0)
	  {
		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 0 ) ;
		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 0 ) ;
		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 1 ) ;

	  }

	  if(num == 1)
	 	  {
	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 1 ) ;
	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 1 ) ;

	 	  }

	  if(num == 2)
	 	 	  {
	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 1 ) ;
	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 0 ) ;
	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 1 ) ;
	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	 	 	  }

	  if(num == 3)
	 	 	 	  {
	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 1 ) ;
	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 1 ) ;
	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	 	 	 	  }
	  if(num == 4)
	 	 	 	 	  {
	 	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 1 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 1 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 1 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 0 ) ;
	 	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	 	 	 	 	  }
	  if(num == 5)
	 	 	 	 	 	  {
	 	 	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 1 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 1 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 0 ) ;
	 	 	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	 	 	 	 	 	  }
	  if(num == 6)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	  	 	 	 	 	 	  }
	  if(num == 7)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 1 ) ;

	  	 	 	 	 	 	  }
	  if(num == 8)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	  	 	 	 	 	 	  }
	  if(num == 9)
	  	 	 	 	 	 	  {
	  	 	 	 	 	 		HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin, 1 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin, 0 ) ;
	  	 	 	 	 	 		HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin, 0 ) ;

	  	 	 	 	 	 	  }
 }
