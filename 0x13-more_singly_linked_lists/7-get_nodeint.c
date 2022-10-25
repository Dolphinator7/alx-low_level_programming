#include "lists.h" 
 /** 
  *   * listint_len - returns the number of elements in a linkedlisti\ 
  *   nt_t list 
  *    * @h: a variable that points to a listint_t struct 
  *     * Return: number of elements 
  *      */ 
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
 /** 
  *   * get_nodeint_at_index - returns the nth node of listint_t list 
  *    * @head: a variable pointing to a struct 
  *     * @index: index of node, starting from 0 
  *      * 
  *       * Return: a variable pointing to a struct 
  *        */ 
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) 
	 { 
	          unsigned int i = 0; 
	          size_t length; 
	   
	          length = listint_len(head); 
	          if (index > length) 
	                  return (NULL); 
	          for (i = 0; i < index; i++) 
	                  head = head->next; 
	          return (head); 
	  }
