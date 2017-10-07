INCLUDE = ../include
TARGET = mathuser
all :$(TARGET)

$(TARGET): main.c printresult.c ../libmath/math.c
	gcc -save-temps  -I../include/ main.c printresult.c ../libmath/math.c -o $(TARGET)

clean:
	rm -vf *.o *.i *.s $(TARGET)
