struct ListNode* reverseList(struct ListNide* head){
	struct ListNode ret, *p, *q;
	ret.next = NULL;
	p = head;
	while(p){
		q = p->next;
		p->next = ret.next;
		ret.next = p;
		p = q;
	}
	return head;
}
