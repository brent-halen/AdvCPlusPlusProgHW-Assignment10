// Define Dynstack template

template <class T>
class DynStack
{
private:
	struct StackNode
	{
		T value;
		StackNode *next;
	};
	StackNode *top;

public:
	DynStack()
	{ top = NULL; }
	void push(T);
	void pop(T &);
	bool isEmpty();
};

// Push function, pushes argument onto stack.

template <class T>
void DynStack<T>::push(T num)
{
	StackNode *newNode;
	// Allocate a new node, store num
	newNode = new StackNode;
	newNode->value = num;

	// Set if conditional to make newNode the first node if no nodes are currently in the list. Otherwise, insert it at the top.
	if(isEmpty())
	{
		top = newNode;
		newNode->next = NULL;
	}
	else 
	{
		newNode->next = top;
		top = newNode;
	}
}

// Pop function, takes the top value of the stack off and copies it into the function's argument. 

template <class T>
void DynStack<T>::pop(T &num)
{
	StackNode *temp;
	if (isEmpty())
	{
		cout << "\nThis stack is empty, not unlike your head.\n";
		return;
	}
	else
	{
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}

// isEmpty functions, returns True or False if the stack is empty or otherwise, respectively.

template <class T>
bool DynStack<T>::isEmpty()
{
	if(!top)
		return true;
	else return false;
}