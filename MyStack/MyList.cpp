#include "MyList.h"

MyList::MyList() :size(0), head(nullptr)/*, tail(nullptr)*/ {}


MyList::MyList(const std::initializer_list<int>& list) :MyList()
{
    for (int i : list)
    {
        this->push_back(i);
    }
}

void MyList::push_back(const int& key)
{
    SElement* temp = new SElement(key, nullptr);
    if (this->size == 0)
    {
        this->head = temp;
    }
    else{
        for (MyList::Iterator it = this->Begin();/*it.GetPtr()->next != nullptr*/; it++)
        {
            if (it.GetPtr()->next == nullptr) {
                it.GetPtr()->next = temp;
                break;
            }
        }
    }

    this->size++;
}

void MyList::push_front(const int& element)
{
    SElement* temp = new SElement(element, this->head);
    this->head = temp;
    this->size++;
}

MyList::~MyList()
{
    while (this->size)
    {
        this->pop_back();
    }
}

int MyList::pop_back()
{
    /*SElement* Temp = this->tail;
    int ReturnValue = this->tail->data;*/
    int ReturnValue;
    if (this->size == 0)
    {
        std::cout << "Error : list is empty\n";
        return int();
    }
    if (this->size == 1)
    {
        ReturnValue = this->head->data;
        SElement* Temp = this->head;
        delete Temp;
        this->head = nullptr;
    }
    else
    {
        for (MyList::Iterator it = this->Begin();/*it.GetPtr()->next != nullptr*/; it++)
        {
            if (it.GetPtr()->next != nullptr and it.GetPtr()->next->next == nullptr) {
                ReturnValue = it.GetPtr()->next->data;
                SElement* Temp = it.GetPtr()->next;
                it.GetPtr()->next = nullptr;
                delete Temp;
                break;
            }
        }
    }
    size--;
    return ReturnValue;
}

int MyList::pop_front()
{
    SElement* Temp = this->head;
    int ReturnValue = this->head->data;
    if (this->size == 0)
    {
        std::cout << "Error : list is empty\n";
        return int();
    }
    if (this->size == 1)
    {
        this->head = nullptr;
    }
    else
    {
        this->head = Temp->next;
    }
    delete Temp;
    size--;
    return ReturnValue;
}

void MyList::insert(const int& element, int index)
{

    if (index > this->getSize() or index < 0)
    {
        std::cout << "wrong index" << std::endl;
        return;
    }

    if (index == 0)
    {
        this->push_front(element);
        return;
    }

    if (index == this->getSize())
    {
        this->push_back(element);
        return;
    }

    SElement* temp = this->head;
    SElement* tempPrev = nullptr;
    for (int i = 0; i < index; i++) {
        tempPrev = temp;
        temp = temp->next;
    }
    SElement* El = new SElement(element, temp);
    tempPrev->next = El;
    this->size++;

}

void MyList::remove(const int& element)
{

    SElement* temp = this->head;
    SElement* tempPrev = nullptr;
    int i = 0;

    while (i < this->getSize())
    {

        if (element == temp->data)
        {
            if (i == 0)
            {
                this->pop_front();
                temp = this->head;
                continue;
            }

            if (temp->next == nullptr and element == temp->data)
            {
                this->pop_back();
                break;
            }
            tempPrev->next = temp->next;
            SElement* temp_ = temp;
            temp = temp->next;
            this->size--;
            delete temp_;
        }
        else {
            tempPrev = temp;
            temp = temp->next;
            i++;
        }

    }
}


void MyList::print()
{
    if (this->size == 0) {
        std::cout << "null" << std::endl;
        return;
    }
    for (MyList::Iterator it = this->Begin(); /*it.GetPtr()->next != nullptr*/; it++)
    {
        if (it.GetPtr()->next == nullptr) {
            std::cout << *it << " ";
            break;
        }
        std::cout << *it << " ";
    }
    std::cout << '\n';
}
