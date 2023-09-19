#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

#define DPRINTF(...)    {fflush(stdout); \
						fflush(stdout); \
						printf(__VA_ARGS__); \
						fflush(stdout); \
						fflush(stdout);}




typedef unsigned int  u32;
typedef  float  f32;
typedef unsigned char u8;

typedef struct {
	u8 name[20];
	u32 id;
	f32 height;
}Sdata;

typedef struct {
	Sdata student ;
	u32* PnextStudent;
}Sstudent;



void addItem();
int deleteItem();
void viewAll();
void deleteAll();
void getNth(u32 index);
int getCount(Sstudent* counter);
void nthNodeFromTheEnd(u32 index);
void middleOfList(void);
void findLoop(void);
void reverseLinkedList(Sstudent** head);



#endif // LINKED_LIST_H_INCLUDED
