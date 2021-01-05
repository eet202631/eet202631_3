all:#main.o CharCount.o getDetails.o group.o
	gcc main.c CharCount.c getDetails.c group.c -o final
