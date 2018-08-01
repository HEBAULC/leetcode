#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}		//һ�������Ĺ��췽�� 
      ListNode(int x,ListNode *p) : val(x), next(p){}//���������Ĺ��췽�� 
	  
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;					//�ǵݹ�д�� 
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
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 		//�ϲ������������� 
{
        if(l1 == NULL) return l2;  
        if(l2 == NULL) return l1;  

        if(l1->val < l2->val) {  
            l1->next = mergeTwoLists(l1->next, l2);  		//��Ч�ĵݹ鷽�� 
            return l1;  
        } else {  
            l2->next = mergeTwoLists(l2->next, l1);  
            return l2;  
        }  
}*/
void HeadCreatList (ListNode *L)  //ͷ�巨��������  
{  
        ListNode *s;  
        L->next=NULL;  //�Ƚ���һ����ͷ���ĵ�����
        printf("����������:");
        int n,t;
        scanf("%d",&n);
        for (int i=0;i<n;i++)  
        {  
            //s=(struct ListNode*)malloc(sizeof(struct ListNode));  
            //s->val=t; 
            //s->next=L->next; //��Lָ��ĵ�ַ��ֵ��S; 
            scanf("%d",&t);
            s=new ListNode(t,L->next);//�����½��
            L->next=s;  //���뵽��ͷ
        }  
}
void TailCreatList(ListNode *L)  //β�巨��������  
{  
        ListNode *s,*r;  
        r=L;  //rΪָ��β���Ľ��
        printf("����������:");
        int n,t;
        scanf("%d",&n);
        for (int i=0;i<n;i++)  
        {  
        	scanf("%d",&t);
            //s=(struct ListNode*)malloc(sizeof(struct ListNode));  //�����½��
            s=new ListNode(0);
			s->val=t;  
            r->next=s;  //����β�ն˽���ָ��ָ���½��
            r=s;  		//����ǰ���½�㶨��Ϊ��β���ն˽��
        }  
        r->next=NULL;  //��ʾ��ǰ�������      
}
void DisPlay(ListNode *L)  //��ͷ�ڵ� 
{  
        ListNode *p=L->next;  
        while(p!=NULL)  
        {  
            printf ("%d ",p->val);  
            p=p->next;  
        }  
        printf("\n");  
}
void DisPlay1(ListNode *L)  //����ͷ�ڵ� 
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
    L1=new ListNode(0);			//c++��������д�� 
	L2=new ListNode(0); 
	TailCreatList(L1);			//��ͷ�ڵ� 
	DisPlay(L1); 
	
	TailCreatList(L2);
	DisPlay(L2); 
	
	L=mergeTwoLists(L1->next,L2->next);
    DisPlay1(L); 
    
    HeadCreatList(L1);			//ͷ�� 
    DisPlay(L1); 
    
	HeadCreatList(L2);			//ͷ�� 
    DisPlay(L2); 
    
    
     
    
 } 
