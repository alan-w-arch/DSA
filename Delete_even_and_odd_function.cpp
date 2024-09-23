void deleteEvenNodes() {
    node* temp = head;
    node* next;

    while (temp != NULL) {
        next = temp->next;

        if (temp->data % 2 == 0) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                head = temp->next;
            }

            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }

            delete temp;
        }

        temp = next;
    }
}

void deleteOddNodes() {
    node* temp = head;
    node* next;

    while (temp != NULL) {
        next = temp->next;

        if (temp->data % 2 != 0) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                head = temp->next;
            }

            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }

            delete temp;
        }

        temp = next;
    }
}
