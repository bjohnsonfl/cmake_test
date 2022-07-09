main: api app1 app2
	gcc  main.c ../api/api.o ../app1/app1.o ../app2/app2.o -o main.o -I ../api/ -I ../app1 -I ../app2

api: 
	gcc -c ../api/api.c -o ../api/api.o

app1: 
	gcc -c ../app1/app1.c -o ../app1/app1.o -I ../api 

app2: 
	gcc -c ../app2/app2.c -o ../app2/app2.o -I ../api

clean:
	rm -rf *.o ../api/*.o -I ../app1/*.o -I ../app2/*.o 


#-I ../api/ -I ../app1 -I ../app2