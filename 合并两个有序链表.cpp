#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}		//一个参数的构造方法 
      ListNode(int x,ListNode *p) : val(x), next(p){}//两个参数的构造方法 
	  
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;					//非递归写法 
        if(l2 == NULL) return l1;
        ListNode* new_list = NULL;  
         if(l1->val < l2->val)       
         {  
             new_list = l1;   
             l1 = l1->next;   

         }  
          else                         
         {   
             new_list = l2;   
             l2 = l2->next;  
        } 
        ListNode * pre = new_list;
        while( l1 != NULL  && l2 != NULL ){
            if( l1->val < l2->val ){
                pre->next = l1;
                l1 = l1->next;
            }
            else{
                pre->next = l2;
                l2 = l2->next;
            }
            pre = pre->next;
        }

        if( l1 ) pre->next = l1;
        else pre->next = l2;
        return new_list;

}/* 
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 		//合并两个有序链表 
{
        if(l1 == NULL) return l2;  
        if(l2 == NULL) return l1;  

        if(l1->val < l2->val) {  
            l1->next = mergeTwoLists(l1->next, l2);  		//高效的递归方法 
            return l1;  
        } else {  
            l2->next = mergeTwoLists(l2->next, l1);  
            return l2;  
        }  
}*/
void HeadCreatList (ListNode *L)  //头插法建立链表  
{  
        ListNode *s;  
        L->next=NULL;  //先建立一个带头结点的单链表
        printf("输入链表长度:");
        int n,t;
        scanf("%d",&n);
        for (int i=0;i<n;i++)  
        {  
            //s=(struct ListNode*)malloc(sizeof(struct ListNode));  
            //s->val=t; 
            //s->next=L->next; //将L指向的地址赋值给S; 
            scanf("%d",&t);
            s=new ListNode(t,L->next);//生成新结点
            L->next=s;  //插入到表头
        }  
}
void TailCreatList(ListNode *L)  //尾插法建立链表  
{  
        ListNode *s,*r;  
        r=L;  //r为指向尾部的结点
        printf("输入链表长度:");
        int n,t;
        scanf("%d",&n);
        for (int i=0;i<n;i++)  
        {  
        	scanf("%d",&t);
            //s=(struct ListNode*)malloc(sizeof(struct ListNode));  //生成新结点
            s=new ListNode(0);
			s->val=t;  
            r->next=s;  //将表尾终端结点的指针指向新结点
            r=s;  		//将当前的新结点定义为表尾的终端结点
        }  
        r->next=NULL;  //表示当前链表结束      
}
void DisPlay(ListNode *L)  //带头节点 
{  
        ListNode *p=L->next;  
        while(p!=NULL)  
        {  
            printf ("%d ",p->val);  
            p=p->next;  
        }  
        printf("\n");  
}
void DisPlay1(ListNode *L)  //不带头节点 
{  
        ListNode *p=L;  
        while(p!=NULL)  
        {  
            printf ("%d ",p->val);  
            p=p->next;  
        }  
        printf("\n");  
}  
int main()
{	
	//HeadCreatList(L1);  
    //L1=(struct ListNode*)malloc(sizeof(struct ListNode));  
    //L2=(struct ListNode*)malloc(sizeof(struct ListNode));  
    
    ListNode *L1,*L2,*L;  
    L1=new ListNode(0);			//c++面向对象的写法 
	L2=new ListNode(0); 
	TailCreatList(L1);			//带头节点 
	DisPlay(L1); 
	
	TailCreatList(L2);
	DisPlay(L2); 
	
	L=mergeTwoLists(L1->next,L2->next);
    DisPlay1(L); 
    
    HeadCreatList(L1);			//头插 
    DisPlay(L1); 
    
	HeadCreatList(L2);			//头插 
    DisPlay(L2); 
    
    
     
    
 } 
