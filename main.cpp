#include <iostream>
#include "sculptor.hpp"

int main()
{
    /*
    Sculptor teste(50,50,50);

    teste.setColor(1,1,1,1);//branco
    teste.putVoxel(1,1,1);
    teste.putVoxel(30,1,1);
    teste.putVoxel(1,30,1);
    teste.putVoxel(1,1,30);
    teste.putVoxel(1,30,30);
    teste.putVoxel(30,1,30);
    teste.putVoxel(30,30,1);
    teste.putVoxel(30,30,30);

    teste.setColor(1,0.54,0,1);//marrom
    teste.putBox(3,10,3,10,3,10);
    for(int i=3;i<10;i++){
        teste.cutVoxel(i,6,6);
        teste.cutVoxel(6,i,6);
        teste.cutVoxel(6,6,i);
    }

    teste.setColor(0.39,0.66,0.22,1.0);//verdinho
    teste.putEllipsoid(20,20,25,6,14,10);
    teste.cutSphere(20,20,25,8);

    teste.setColor(1,0.0,0.0,1.0);//vermelho
    teste.putSphere(25,25,8,7);
    teste.setColor(1.0,1.0,0.0,1.0);//amarelo
    teste.putSphere(5,10,20,6);
    teste.cutSphere(5,12,22,5);

    teste.setColor(0.0,1.0,1.0,1.0);//azul claro
    teste.putBox(0,30,15,18,3,6);

    teste.writeOFF("teste.OFF");
    */


    //yoshi da deepweb:
    Sculptor yoshi(50,50,50);

    //pés
    yoshi.setColor(1,0.54,0,1);//marrom
    yoshi.putBox(4,7,1,4,10,16);
    yoshi.putBox(10,13,1,4,10,16);
    //sola do pe
    yoshi.setColor(1,1,1,1);//branco
    yoshi.putBox(4,7,0,1,10,16);
    yoshi.putBox(10,13,0,1,10,16);

    //pernas
    yoshi.setColor(0.39,0.66,0.22,1.0);//verdinho
    yoshi.putBox(4,7,4,6,10,13);
    yoshi.putBox(10,13,4,6,10,13);

    //barriguinha
    yoshi.putBox(4,13,6,15,8,17);
    yoshi.setColor(1,1,1,1);//branco
    yoshi.putBox(5,12,6,15,8,17);

    //braços
    yoshi.setColor(0.39,0.66,0.22,1.0);//verdinho
    yoshi.putBox(2,4,10,14,10,12);
    yoshi.putBox(13,15,10,14,10,12);
    //mãozinhas
    yoshi.setColor(0.19,0.19,0.19,1.0);//cinza
    yoshi.putBox(2,4,7,10,10,13);
    yoshi.putBox(13,15,7,10,10,13);

    //cabeça
    yoshi.setColor(0.39,0.66,0.22,1.0);//verdinho
    yoshi.putBox(3,14,15,28,8,15);
    yoshi.putEllipsoid(8,19,15,7,4,6);//boca

    yoshi.setColor(1,1,1,1);//branco
    yoshi.putSphere(4,19,12,4);//bochechas
    yoshi.putSphere(12,19,12,4);//bochechas

    //olhos
    yoshi.setColor(1,1,1,1);//branco
    yoshi.putBox(5,8,23,27,15,16);
    yoshi.putBox(9,12,23,27,15,16);

    yoshi.setColor(0,0,0,1.0);//preto
    yoshi.putBox(6,7,23,26,15,16);
    yoshi.putBox(10,11,23,26,15,16);

    //calda
    yoshi.setColor(0.39,0.66,0.22,1.0);//verdinho
    yoshi.putBox(6,11,6,13,7,8);
    yoshi.putBox(7,10,6,12,6,7);
    yoshi.putBox(8,9,6,11,5,6);

    yoshi.writeOFF("yoshi-01.off");

    return 0;
}
