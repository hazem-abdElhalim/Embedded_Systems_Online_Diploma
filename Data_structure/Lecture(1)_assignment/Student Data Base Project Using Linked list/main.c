/* Lib */
#include "stdio.h"
#include "string.h"
#include "conio.h"
#include <stdlib.h>
#include <errno.h>

#include "Linked_list.h"
extern Sstudent* gpFirstStudent;
u32 length_count;





int main(void) {
	u8  getResonse[20];

	while(1){
	DPRINTF("\n----------------------------------------")
	DPRINTF("\n\t choose one of the following options ")
	DPRINTF("\n 1: Add a student ")
	DPRINTF("\n 2: Delete a student ")
	DPRINTF("\n 3: View all students ")
	DPRINTF("\n 4: Delete all students ")
	DPRINTF("\n 5: write index of an element ")
	DPRINTF("\n 6: show number of elements ")
	DPRINTF("\n 7: get nth Node From The End ")
	DPRINTF("\n 8: the middle Of List ")
	DPRINTF("\n 9: find Loop ")
	DPRINTF("\n 10: reverse list ")

	DPRINTF("\n----------------------------------------")

	DPRINTF("\n================= ")
	gets(getResonse);
	switch(atoi(getResonse)){
	case 1:
		addItem();
		break;
	case 2 :
		deleteItem();
		break;
	case 3:
		viewAll();
		break;
	case 4:
		deleteAll();
		break;
    case 5:
		getNth(3);
		break;
    case 6:
        length_count = getCount(gpFirstStudent);
		DPRINTF("%d",length_count)
		break;
    case 7:
		nthNodeFromTheEnd(4);
		break;
    case 8:
		middleOfList();
		break;
    case 9:
		findLoop();
		break;
    case 10:
		reverseLinkedList(&gpFirstStudent);
		break;
	default:
		DPRINTF("\n Option not found")
		break;
	}

    }
	return 0;
}



