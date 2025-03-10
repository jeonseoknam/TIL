#include <stdio.h>
#include <stdlib.h>

typedef struct node_
{
        int data;
        struct node_ *next;
} Node;

Node *head = NULL;
Node *tail = NULL;

int main()
{
        while(1)
        {
                int input;
                printf("please input data what you want to connect. ");
                scanf("%d", &input);

                if(input <= 0)
                        break;

                Node *newnode = (Node*)malloc(sizeof(Node));

                newnode->data = input;
                newnode->next = NULL;

                if(head == NULL)
                        head = newnode;
                else
                       tail->next = newnode;
				tail=newnode;
        }

        printf("present state : ");
        Node *cur = head;
        while(cur != NULL)
        {
                printf("%d ", cur->data);
                cur = cur->next;
        }
        puts("");

        while(1)
        {
                int k;
                printf("please select data what you want to delete. "); //링크드리스트에서 데이터 삭제하는 경우
                scanf("%d", &k); //삭제할 숫자 입력(data)

                if(k <= 0) 
                        break;

                int search=0;
                Node *cur_prev = NULL; //
                cur = head; //현재 커서는 head를 가리킨다
                while(cur != NULL) //링크드리스트에 노드가 존재하는 동안 반복
                {
                        if(cur->data == k) //커서가 가리키는 노드의 data값이 k라면
                        {
                                search=1; //찾았으므로 search값을 1로 준다
                                break;    //검색 중지
                        }
                        cur_prev = cur;  //현재 커서가 가리키는 노드를 cur_prev도 가리키게 한다
                        cur = cur->next; //현재 커서가 가리키는 노드를 다음 노드로 바꾼다->k를 찾지 못했으니까 계속 전진한다
                        }
                        
                        if(search ==1)
                        {
	                        printf("%d를 삭제합니다.\n",k);
	                        
	                        if(cur == head)
		                        head = cur->next;
		                      else
			                      cur_prev->next = cur->next; // 현재 커서인 cur(=k를 가지는 노드)를 건너뛰게 만든다
			                      
			                     free(cur);
			                    }
			                    
			                    printf("(삭제 후) 연결리스트 현재 상태: ");
			                    cur = head;
			                    while(cur != NULL)
			                    {
				                    printf("%d ",cur->data);
				                    cur = cur->next; //커서가 가리키는게 없을 때까지 링크드리스트의 내용 출력
				                   }
				                   puts("");
				                 }
			                      
                        
}                       
                        
                        

