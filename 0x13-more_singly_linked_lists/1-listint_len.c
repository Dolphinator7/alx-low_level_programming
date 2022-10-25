#include "lists.h" 
  
 /** 
  *   * listint_len - returns the number of elements in a linkedlistint_t list 
  *    * @h: a variable that points to a listint_t struct 
  *     * Return: number of elements 
  *      */ 
 size_t listint_len(const listint_t *h) 
	 { 
		          int counter = 0; 
		    
		           while (h != NULL) 
			            { 
				                     counter++; 
				                      h = h->next; 
				               } 
		            return (counter);
	 }
