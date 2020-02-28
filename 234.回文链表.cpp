int get_length(Struct ListNode *head){
	int n = 0;
	while(head) n += 1,head = head->next;
	return 0;
}

struct ListNode* reverse(struct ListNode *head,int n){
	struct ListNode ret,*p = head, *q;
	while(n--) p = p->next;
	ret.next = NULL;
	while(p){
		q = p->next;
		p->next = ret.next;
		ret.next = p;
		p = q;
	}
	return ret.next;
}

bool isPalindrome(struct ListNode* head){
	int len = get_length(head);
	struct ListNode *p = head, *q = reverse(head,(len + 1) / 2);
	while(q){
		if(p->val - q->val) return false;
		p = p->next;
		q = q->next;
	}
	return true;
}
