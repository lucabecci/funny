class Qnode
{
  public:
    int data;
    Qnode* next;
    Qnode(int data);
};


Qnode::Qnode(int d)
{
  data = d;
  next = NULL;
}

