#	CC = gcc
final:
#	$(CC)  file1.c file2.c -o final
#clean:
#	rm *.o final  
	#	it will remove .o file in the makefile

#*********Method 3*******#

          # creating multiple targets to compile individualfile it is very useful

$(CC) = gcc
final: 
	$(CC) file1.o file2.o -o final

file1.o: file1.c header.h
	$(CC) -c file1.c

file2.o: file2.c header.h 
	$(CC) -c file2.c

clean : 
	rm -rf *o final

