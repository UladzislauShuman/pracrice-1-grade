#include "MyList.h"
#include "MyList.h"

MyList::MyList() :size(0), head(nullptr) {}
MyList::MyList(const std::initializer_list<int>& list) :MyList()
{
    for (int i : list)
    {
        this->push_back(i);
    }
}
MyList::~MyList()
{
    while (this->size)
    {
        this->pop_back();
    }
}

void MyList::push_back(const int& key)
{
    SElement* temp = new SElement(key, nullptr);
    if (this->size == 0)
    {
        this->head = temp;
    }
    else {
        SElement* temp_ = this->head;
        for (int i = 1; i < this->size; ++i)
        {
            temp_ = temp_->next;
        }
        temp_->next = temp;
    }

    this->size++;
}

void MyList::push_front(const int& element)
{
    SElement* temp = new SElement(element, this->head);
    this->head = temp;
    this->size++;
}



int MyList::pop_back()
{
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
        SElement* temp = this->head;
        for (int i = 1; i < this->size; ++i)
        {
            temp = temp->next;
        }
        ReturnValue = temp->data;
        delete temp;
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

    if (index > this->count() or index < 0)
    {
        std::cout << "wrong index" << std::endl;
        return;
    }

    if (index == 0)
    {
        this->push_front(element);
        return;
    }

    if (index == this->count())
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

    while (i < this->count())
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
    for (MyIterator i(this);!i.IsDone();i.Next())
    {
        std::cout << i.CurrentItem() << " ";
    }
    std::cout << '\n';
}

int& MyList::Get(int index) {
    try {
        if (index < 0 or index >= this->size) {
            throw "bad index";
        }
        if (index == 0) {
            return this->head->data;
        }
        else {
            SElement* temp = this->head;
            for (int i = 1; i <= index; ++i) {
                temp = temp->next;
            }
            return temp->data;
        }
    }
    catch (const std::string* exception_) {
        std::cout << *exception_ << std::endl;
    }
}
