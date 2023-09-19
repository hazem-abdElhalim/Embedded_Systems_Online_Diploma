
#include "stdio.h"
#include "string.h"
#include "conio.h"
#include <stdlib.h>
#include <errno.h>

#include "Linked_list.h"


Sstudent* gpFirstStudent= NULL;

// APIs
void addItem(){
	Sstudent* pLastStudent;
	Sstudent* pNewStudent;
	u8 data[40];
	u8 *endptr;
	// check if the list is empty
	if(gpFirstStudent){  // the list is not empty
		pLastStudent=gpFirstStudent;
		while(pLastStudent->PnextStudent){   // navigate till reach the last record
			pLastStudent =pLastStudent->PnextStudent;
		}
		pNewStudent = (Sstudent*)malloc(sizeof(Sstudent)); // create new record
		if (pNewStudent == NULL) {
		    // Handle memory allocation failure
		    DPRINTF("Failed to allocate memory for the new student.\n")
		    return;
		}
		pLastStudent->PnextStudent = pNewStudent;
	}
	else{  // the list is empty
		pNewStudent = (Sstudent*)malloc(sizeof(Sstudent));  // create new record
		if (pNewStudent == NULL) {
		    // Handle memory allocation failure
		    DPRINTF("Failed to allocate memory for the new student.\n")
		    return;
		}
		gpFirstStudent=pNewStudent;
	}
	// fill the new record
	DPRINTF("\nEnter the name");
	gets(pNewStudent->student.name);
	DPRINTF("\nEnter the ID");
	gets(data);
	pNewStudent->student.id =atoi(data);
	DPRINTF("\nEnter the height");
	gets(data);
	pNewStudent->student.height = strtof(data,&endptr);
	// set PnextStudent pointer
	pNewStudent->PnextStudent = NULL;
}

int deleteItem(){
	u32 id;
	u8 inputText[20];
	// Get ID of record to be deleted
	DPRINTF("\nEnter the ID of record to be deleted")
	gets(inputText);
	id= atoi(inputText);

	//check if the list is empty
	if(gpFirstStudent){
		Sstudent* pPreviousRecord= NULL;
		Sstudent* pSelectedRecord=gpFirstStudent;
		// loop all records till reach the selected id
		while(pSelectedRecord){
			// check for the selected ID
			if(pSelectedRecord->student.id == id){
				if(pPreviousRecord){
					pPreviousRecord->PnextStudent = pSelectedRecord->PnextStudent;
				}
				else{
					gpFirstStudent = pSelectedRecord->PnextStudent;
				}
				free(pSelectedRecord);
				return 1 ;
			}
			pPreviousRecord =pSelectedRecord;
			pSelectedRecord = pSelectedRecord->PnextStudent;
		}
	}
	DPRINTF("\n ID not found !");
	return 0;
}

void viewAll(){
	Sstudent* pcurrentRecord =gpFirstStudent;
	u32 count=0;
	if(!gpFirstStudent)
		DPRINTF("\nEmpty list !")
	while(pcurrentRecord){
        DPRINTF("\n ---------------------%d------------------------",count+1)
		DPRINTF("\n Record number : %d" , count+1)
		DPRINTF("\n Student name is : %s" , pcurrentRecord->student.name)
		DPRINTF("\n Student ID is : %d" , pcurrentRecord->student.id)
		DPRINTF("\n Student height is : %.1f" , pcurrentRecord->student.height)
		pcurrentRecord = pcurrentRecord->PnextStudent;
		count ++;
	}
}

void deleteAll(){
	Sstudent* pcurrentRecord =gpFirstStudent;
	if(!gpFirstStudent)
			DPRINTF("\nEmpty list !")
	while(pcurrentRecord){
		Sstudent* pTemp = pcurrentRecord;
		pcurrentRecord = pcurrentRecord->PnextStudent;
		free(pTemp);
	}
	gpFirstStudent = NULL;
}

void getNth(u32 index){
    u32 counter=0;
    Sstudent* pcurrentRecord =gpFirstStudent;
    while(pcurrentRecord){
        if(counter == index){
          break;
        }
        else if(pcurrentRecord->PnextStudent == NULL){
            DPRINTF("Out of the list")
            return;
        }
        else{
        pcurrentRecord = pcurrentRecord->PnextStudent;
        counter++;
        }
    }
    DPRINTF("\n Record index : %d" , counter)
    DPRINTF("\n Student name is : %s" , pcurrentRecord->student.name)
    DPRINTF("\n Student ID is : %d" , pcurrentRecord->student.id)
    DPRINTF("\n Student height is : %.1f" , pcurrentRecord->student.height)
}

int getCount(Sstudent* counter){
    u32 sizeOfList = 0;
   if(!counter){
        return 0;
   }
   else{
        counter = counter->PnextStudent;
        sizeOfList++ ;
        return 1 + getCount(counter);
   }
}

void nthNodeFromTheEnd(u32 index){
    Sstudent* pMainPointer =gpFirstStudent;
    Sstudent* pReferencePointer =gpFirstStudent;
    u32 counter=0;
    if(gpFirstStudent){
        while(pReferencePointer->PnextStudent){
            while(counter <= index) {
                if(pReferencePointer->PnextStudent == NULL)
                        break;
                pReferencePointer = pReferencePointer->PnextStudent;
                counter ++ ;
            }
            if(pReferencePointer->PnextStudent == NULL)
                break;
            pReferencePointer = pReferencePointer->PnextStudent;
            pMainPointer = pMainPointer->PnextStudent;
        }
        DPRINTF("\n Record index : %d" , counter)
        DPRINTF("\n Student name is : %s" , pMainPointer->student.name)
        DPRINTF("\n Student ID is : %d" , pMainPointer->student.id)
        DPRINTF("\n Student height is : %.1f" , pMainPointer->student.height)
    }
    else{
        DPRINTF("The list is empty")
    }
}

void middleOfList(void){
     Sstudent* pSlowPointer =gpFirstStudent;
     Sstudent* pFastPointer =gpFirstStudent;
     u32 counter=1;
     while(pFastPointer->PnextStudent){
        pSlowPointer = pSlowPointer->PnextStudent;
        pFastPointer = pFastPointer->PnextStudent;
        if(pFastPointer->PnextStudent == NULL)
            break;
        pFastPointer = pFastPointer->PnextStudent;
        counter++;
     }
        DPRINTF("\n Record index : %d" , counter)
        DPRINTF("\n Student name is : %s" , pSlowPointer->student.name)
        DPRINTF("\n Student ID is : %d" , pSlowPointer->student.id)
        DPRINTF("\n Student height is : %.1f" , pSlowPointer->student.height)
}

void findLoop(void){
     Sstudent* pSlowPointer =gpFirstStudent;
     Sstudent* pFastPointer =gpFirstStudent;
     while(pFastPointer->PnextStudent){
        pSlowPointer = pSlowPointer->PnextStudent;
        pFastPointer = pFastPointer->PnextStudent;
        if(pFastPointer->PnextStudent == NULL)
            break;
        pFastPointer = pFastPointer->PnextStudent;
        if( pSlowPointer == pFastPointer){
            DPRINTF ("Found loop")
        }
     }
}

void reverseLinkedList(Sstudent** head) {
    Sstudent* previous = NULL;
    Sstudent* current = *head;
    Sstudent* next = NULL;

    while(current){
        next = current->PnextStudent;
        current->PnextStudent = previous;
        previous = current ;
        current = next ;
    }
    *head = previous ;

}




